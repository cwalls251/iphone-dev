/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Foundation/Foundation.h>

@interface AVRecorder : NSObject
{
    struct AVRecorderPrivate *_priv;
}

- (BOOL)activate:(id *)fp8;	// IMP=0x3029b18c
- (id)attributeForKey:(id)fp8;	// IMP=0x3029b168
- (BOOL)audioCurrentAverageDecibelLevels:(float *)fp8 andPeakDecibelLevels:(float *)fp12;	// IMP=0x3029bc94
- (BOOL)audioCurrentAverageVolumeLevels:(float *)fp8 andPeakVolumeLevels:(float *)fp12;	// IMP=0x3029bb9c
- (unsigned int)audioNumDeviceChannels;	// IMP=0x3029bb90
- (void)deactivate;	// IMP=0x3029b984
- (void)dealloc;	// IMP=0x3029aeec
- (id)filePath;	// IMP=0x3029b078
- (id)init;	// IMP=0x3029acf8
- (BOOL)isActive;	// IMP=0x3029b978
- (BOOL)isRecording;	// IMP=0x3029b958
- (float)micVolume;	// IMP=0x3029bb10
- (double)recordedDuration;	// IMP=0x3029bb70
- (long long)recordedFileSizeInBytes;	// IMP=0x3029bb60
- (void)setAttribute:(id)fp8 forKey:(id)fp12;	// IMP=0x3029b0ac
- (void)setFilePath:(id)fp8;	// IMP=0x3029b020
- (void)setMicVolume:(float)fp8;	// IMP=0x3029bb44
- (BOOL)start;	// IMP=0x3029b5a4
- (void)stop;	// IMP=0x3029b7c8

@end

