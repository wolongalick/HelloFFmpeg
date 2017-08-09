package com.alick.helloffmpeg;

/**
 * 功能:
 * 作者: 崔兴旺
 * 日期: 2017/8/10
 * 备注:
 */
public class FFmpegBridge {
    /**
     * 返回ffmpeg的编译信息
     * @return
     */
    public static native String getFFmpegConfig();

    /**
     * 命令形式运行ffmpeg
     * @param cmd
     * @return  返回0表示成功
     */
    public static native int jxCMDRun(String cmd[]);

    /**
     * 编码一帧视频,暂时只能编码yv12视频
     * @param data
     * @return
     */
    public static native int encodeFrame2H264(byte[] data);

    /**
     * 编码一帧音频,暂时只能编码音频
     * @param data
     * @return
     */
    public static native int encodeFrame2AAC(byte[] data);

    /**
     * 录制结束
     * @return
     */
    public static native int recordEnd();

    /**
     * 初始化
     * @param debug
     * @param logUrl
     */
    public static native void initJXFFmpeg(boolean debug,String logUrl);


    public static native void nativeRelease();



}
