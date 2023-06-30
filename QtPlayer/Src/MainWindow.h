#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vlc/vlc.h>
#ifdef Q_OS_WINDOWS
#include <windows.h>
#endif // Q_OS_WINDOWS


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    // 构造函数
    MainWindow(QWidget *parent = nullptr, bool embed = false);
    // 析构函数
    ~MainWindow();

private:
    // 响应媒体长度改变事件的静态处理函数
    static void onMediaPlayerLengthChanged(
        libvlc_event_t const* event, void* data);
    // 响应媒体长度改变事件的普通处理函数
    void onMediaPlayerLengthChanged(libvlc_time_t length);

#ifdef Q_OS_WINDOWS
    // 子窗口枚举回调函数
    static BOOL CALLBACK onEnumVLCWindow(HWND hwnd, LPARAM);
    // 响应视频输出启动事件的静态处理函数
    static void onMediaPlayerVout(libvlc_event_t const*, void* data);
    // 响应视频输出启动事件的普通处理函数
    void onMediaPlayerVout(void);
#endif // Q_OS_WINDOWS

    // 响应时间改变事件的静态处理函数
    static void onMediaPlayerTimeChanged(
        libvlc_event_t const* event, void* data);
    // 响应时间改变事件的普通处理函数
    void onMediaPlayerTimeChanged(libvlc_time_t time);

    // 响应终点到达事件的静态处理函数
    static void onMediaPlayerEndReached(
        libvlc_event_t const*, void* data);
    // 响应终点到达事件的普通处理函数
    void onMediaPlayerEndReached(void);

    // 显示窗口时被调用的虚函数
    void showEvent(QShowEvent*);
    // 视频框控件有事件时被调用的虚函数
    bool eventFilter(QObject* obj, QEvent* event);

private slots:
    // 响应进度滑块值改变信号的槽函数(拖拽滑块或点击滑轨)
    void on_sliderProgress_valueChanged(int value);
    // 响应播放按钮点击信号的槽函数
    void on_btnPlay_clicked();
    // 响应暂停按钮点击信号的槽函数
    void on_btnPause_clicked();
    // 响应停止按钮点击信号的槽函数
    void on_btnStop_clicked();
    // 响应快进按钮点击信号的槽函数
    void on_btnFastForward_clicked();
    // 响应快退按钮点击信号的槽函数
    void on_btnFastBackward_clicked();
    // 响应音量滑块移动信号的槽函数(拖拽滑块)
    void on_sliderVolume_sliderMoved(int position);
    // 响应音量滑块值改变信号的槽函数(点击滑轨)
    void on_sliderVolume_valueChanged(int value);
    // 响应关于按钮点击信号的槽函数
    void on_btnAbout_clicked();
    // 响应退出按钮点击信号的槽函数
    void on_btnQuit_clicked();

    void on_btnDirectoy_clicked();

private:
    Ui::MainWindow *ui;

    bool embed; // 内嵌视频

    libvlc_instance_t*      vlcInstance;     // VLC实例
    libvlc_media_player_t*  vlcMediaPlayer;  // VLC媒体播放器
    libvlc_event_manager_t* vlcEventManager; // VLC事件管理器
    libvlc_media_t*         vlcMedia;        // VLC媒体
    libvlc_time_t           vlcMediaLength;  // VLC媒体长度
};
#endif // MAINWINDOW_H
