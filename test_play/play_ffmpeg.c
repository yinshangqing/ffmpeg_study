/*************************************************************************
	> File Name: play_ffmpeg.c
	> Author: yinshangqing
	> Mail: 841668821@qq.com 
	> Created Time: Wed 14 Mar 2018 03:09:34 AM EDT
 ************************************************************************/

#include <stdio.h>
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libswscale/swscale.h>
#include <libavdevice/avdevice.h>
 
  
int main()
{
	printf("play FFmpeg!");
	av_register_all();
	unsigned int version = avcodec_version(); 
	printf("version is: %d\n", version);

	return 0;
}

