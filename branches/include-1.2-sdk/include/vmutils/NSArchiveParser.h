/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface NSArchiveParser : NSObject
{
    unsigned int _mappedMemory;	// 4 = 0x4
    unsigned int _mappedMemorySize;	// 8 = 0x8
    unsigned int _archive;	// 12 = 0xc
    unsigned int _archiveSize;	// 16 = 0x10
    int _cpuType;	// 20 = 0x14
    NSMutableDictionary *_fileDict;	// 24 = 0x18
    NSString *_path;	// 28 = 0x1c
    BOOL _mustSwap;	// 32 = 0x20
}

- (id)allEntries;	// IMP=0x318b0a98
- (void)dealloc;	// IMP=0x318b0e8c
- (id)entryForName:(id)fp8;	// IMP=0x318b0a78
- (void)findArchive;	// IMP=0x318b094c
- (id)initWithPath:(id)fp8 withCPUType:(int)fp12;	// IMP=0x318b07a8
- (BOOL)mapFile:(id)fp8;	// IMP=0x318b0ab8
- (void)parseArchiveEntries:(struct ar_hdr *)fp8;	// IMP=0x318b0c38

@end

