//
// Created by Administrator on 2017/8/10.
//

#ifndef HELLOFFMPEG_JX_LOG_H
#define HELLOFFMPEG_JX_LOG_H


#include <android/log.h>

extern int JNI_DEBUG;

#define LOG_E(debug,format,...) if(debug){ __android_log_print(ANDROID_LOG_ERROR,"cxw_ffmpeg",format,##__VA_ARGS__);}

#define LOG_I(debug,format,...) if(debug){ __android_log_print(ANDROID_LOG_INFO,"cxw_ffmpeg",format,##__VA_ARGS__);}


#endif //HELLOFFMPEG_JX_LOG_H
