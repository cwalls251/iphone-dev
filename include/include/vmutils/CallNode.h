/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface CallNode : NSObject
{
    unsigned int flags;	// 4 = 0x4
    NSString *name;	// 8 = 0x8
    unsigned int address;	// 12 = 0xc
    NSArray *sortedChildrenWithPseudoNode;	// 16 = 0x10
    unsigned int numBytes;	// 20 = 0x14
    unsigned int count;	// 24 = 0x18
    union {
        NSString *thePseudoName;
        CallNode *theChild;
        CallNode **theChildren;
    } un;	// 28 = 0x1c
    CallNode *parent;	// 32 = 0x20
}

+ (void)compareChildrenOf:(id)fp8 toChildrenOf:(id)fp12 storeDiffIn:(id)fp16;	// IMP=0x318b01cc
+ (id)makeFakeRootForNode:(id)fp8;	// IMP=0x318ad514
+ (id)rootForCompare:(id)fp8 to:(id)fp12;	// IMP=0x318ae0ec
+ (id)rootForLogRecords:(CDAnonymousStruct2 *)fp8 imageSymbols:(id)fp12;	// IMP=0x318ae398
+ (id)rootForNonWaitingSamples:(id)fp8 imageSymbols:(id)fp12;	// IMP=0x318ae1d8
+ (id)rootForSampleFile:(struct __sFILE *)fp8;	// IMP=0x318ade68
+ (id)rootForSamples:(id)fp8 imageSymbols:(id)fp12;	// IMP=0x318ad760
+ (id)rootForTraceData:(id)fp8;	// IMP=0x318adac0
- (void)addStackEntry:(id)fp8 imageSymbols:(id)fp12 numBytes:(unsigned int)fp16 threadTable:(id)fp20;	// IMP=0x318ad5c4
- (char *)addSubTreeFromFile:(struct __sFILE *)fp8 withIndent:(int)fp12 withLine:(char *)fp16 withLen:(unsigned int *)fp20;	// IMP=0x318adc30
- (void)addTraceEvent:(id)fp8 forTraceData:(id)fp12;	// IMP=0x318ad8f0
- (unsigned int)address;	// IMP=0x318ace04
- (id)browserName;	// IMP=0x318ace14
- (int)compare:(id)fp8;	// IMP=0x318ae810
- (int)compareNames:(id)fp8;	// IMP=0x318ae858
- (id)copyWithZone:(struct _NSZone *)fp8;	// IMP=0x318ad0a4
- (unsigned int)count;	// IMP=0x318acdec
- (void)dealloc;	// IMP=0x318ad31c
- (id)filterOutSymbols:(id)fp8;	// IMP=0x318ae9ec
- (id)filterOutSymbols:(id)fp8 required:(id)fp12;	// IMP=0x318aeab8
- (id)filterOutWaiting;	// IMP=0x318ae9e8
- (void)finalize;	// IMP=0x318ad40c
- (id)findNodeMatching:(id)fp8 searchForward:(BOOL)fp12 ignoreCase:(BOOL)fp16 wholeWords:(BOOL)fp20;	// IMP=0x318af5c8
- (id)findOrAddChildWithName:(id)fp8 address:(unsigned int)fp12;	// IMP=0x318ad0d0
- (id)fullOutputWithThreshold:(unsigned int)fp8;	// IMP=0x318afbf8
- (id)invertedNode;	// IMP=0x318af1e0
- (BOOL)isPseudo;	// IMP=0x318ad0c4
- (id)largestTopOfStackPath;	// IMP=0x318affe8
- (id)name;	// IMP=0x318acdfc
- (id)nextNode;	// IMP=0x318af50c
- (unsigned int)numBytes;	// IMP=0x318acdf4
- (id)parent;	// IMP=0x318ace0c
- (id)prevNode;	// IMP=0x318af5c0
- (id)prune:(unsigned int)fp8;	// IMP=0x318af2ac
- (id)pseudoName;	// IMP=0x318ae8cc
- (id)pseudoNodeTopOfStackChild;	// IMP=0x318ae8fc
- (void)release;	// IMP=0x318ad2d4
- (id)retain;	// IMP=0x318ad2a0
- (unsigned int)retainCount;	// IMP=0x318ad2c0
- (void)setNameToCount:(id)fp8;	// IMP=0x318af5d0
- (id)sortedChildrenByNameWithPseudoNode;	// IMP=0x318af8d8
- (id)sortedChildrenWithPseudoNode;	// IMP=0x318af7f4
- (id)sortedChildrenWithPseudoNode:(id)fp8 withCompare:(SEL)fp12;	// IMP=0x318af6a0
- (unsigned int)sumOfChildrenCounts;	// IMP=0x318ae87c

@end
