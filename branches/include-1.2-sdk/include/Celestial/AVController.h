/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Foundation/Foundation.h>

@interface AVController : NSObject
{
    struct AVControllerPrivate *_priv;
}

+ (id)avController;	// IMP=0x30275e90
+ (id)avControllerWithQueue:(id)fp8 error:(id *)fp12;	// IMP=0x30275ed4
+ (void)setEnableNetworkMode:(BOOL)fp8;	// IMP=0x30275e7c
- (BOOL)activate:(id *)fp8;	// IMP=0x30278894
- (id)addNextFeederItemToQueue;	// IMP=0x302780c4
- (void)applyAttributesFromItem:(id)fp8;	// IMP=0x3027b1c8
- (id)attributeForKey:(id)fp8;	// IMP=0x30278d60
- (BOOL)beginInterruption:(id *)fp8;	// IMP=0x30278800
- (BOOL)beginRepeatGap;	// IMP=0x30277a64
- (void)cancelContinueAfterRepeatGap;	// IMP=0x30277980
- (void)cancelPrepareForPlayback;	// IMP=0x302768ac
- (void)checkQueueSpace;	// IMP=0x302765c8
- (void)continueAfterRepeatGap;	// IMP=0x30277960
- (long)copyImageForTime:(struct __CVBuffer **)fp8 time:(const CDAnonymousStruct1 *)fp12;	// IMP=0x30276440
- (id)currentItem;	// IMP=0x302775d8
- (void)currentItemHasChanged:(id)fp8;	// IMP=0x3027a768
- (id)currentItemPriv;	// IMP=0x3027760c
- (void)currentItemWillChangeToItem:(id)fp8 oldItemCurrentTime:(double)fp12;	// IMP=0x3027a5d4
- (double)currentTime;	// IMP=0x30278a88
- (void)dealloc;	// IMP=0x302760a0
- (id)delegate;	// IMP=0x3027a974
- (void)dequeueFirstItem;	// IMP=0x30277f90
- (void)doCancelContinueAfterRepeatGap;	// IMP=0x302779b8
- (void)doScheduleContinueAfterRepeatGap:(id)fp8;	// IMP=0x30277a00
- (void)endInterruptionWithStatus:(id)fp8;	// IMP=0x30278928
- (int)eqPreset;	// IMP=0x30278c7c
- (id)errorWithDescription:(id)fp8 code:(long)fp12;	// IMP=0x30278708
- (void)failPlayback:(id)fp8 reason:(long)fp12 notifyClient:(unsigned char)fp16;	// IMP=0x3027b2d4
- (void)feederInvalidatedWithCurrentItemMoved:(id)fp8;	// IMP=0x3027d2a8
- (void)feederRangeWasInserted:(id)fp8;	// IMP=0x30276ce4
- (void)feederRangeWasRemoved:(id)fp8;	// IMP=0x3027704c
- (void)fmpRateDidChange;	// IMP=0x3027a2f0
- (void)fmpRelease:(id)fp8;	// IMP=0x3027b29c
- (void)fmpTimeJumped;	// IMP=0x3027a1d4
- (BOOL)havePlayedCurrentItem;	// IMP=0x302775cc
- (unsigned int)indexOfCurrentQueueFeederItem;	// IMP=0x30278050
- (id)init;	// IMP=0x3027607c
- (id)initWithError:(id *)fp8;	// IMP=0x30275f20
- (id)initWithQueue:(id)fp8 error:(id *)fp12;	// IMP=0x3027ae20
- (id)initWithQueue:(id)fp8 fmpType:(unsigned long)fp12 error:(id *)fp16;	// IMP=0x3027aeec
- (int)instantiateFMPRef:(struct opaqueFigMoviePlaybackRef **)fp8 forItem:(id)fp12;	// IMP=0x3027b648
- (BOOL)isCurrentItemReady;	// IMP=0x30277938
- (BOOL)isNewImageAvailableForTime:(const CDAnonymousStruct1 *)fp8 willNeverBeAvailable:(char *)fp12;	// IMP=0x30276438
- (BOOL)isValid;	// IMP=0x3027ae70
- (id)itemAttribute:(id)fp8 forKey:(id)fp12;	// IMP=0x3027ac44
- (void)itemCompletedDecode;	// IMP=0x30277df8
- (void)itemFailedPlaying;	// IMP=0x30277b20
- (void)itemFinishedPlaying:(id)fp8;	// IMP=0x30277b6c
- (void)itemHasFinishedPlayingNotification:(id)fp8;	// IMP=0x3027a868
- (void)itemPropertyDidChangeNotification:(id)fp8;	// IMP=0x30276448
- (struct _LKImageQueue *)lkEnsureQueueForWidth:(unsigned int)fp8 Height:(unsigned int)fp12;	// IMP=0x3027a04c
- (struct _LKImageQueue *)lkImageQueue;	// IMP=0x30279fe8
- (id)lkLayer;	// IMP=0x30278d18
- (double)lkServerTime;	// IMP=0x3027a160
- (void)makeCurrentItemReady;	// IMP=0x302778e8
- (void)makeError:(id *)fp8 withDescription:(id)fp12 code:(long)fp16;	// IMP=0x302787c4
- (void)maybeDumpPerformanceDictionary:(struct opaqueFigMoviePlaybackRef *)fp8;	// IMP=0x3027bf48
- (BOOL)muted;	// IMP=0x30278b20
- (BOOL)okToNotifyFromThisThread;	// IMP=0x3027a1a8
- (id)outputQTESFilePath;	// IMP=0x30278cd0
- (void)pause;	// IMP=0x30277f6c
- (BOOL)play:(id *)fp8;	// IMP=0x30277f44
- (BOOL)playNextItem:(id *)fp8;	// IMP=0x3027835c
- (void)prepareForPlaybackReply:(long)fp8;	// IMP=0x3027ca98
- (struct AVControllerPrivate *)privateStorage;	// IMP=0x30276430
- (id)queue;	// IMP=0x30276cd8
- (id)queueFeeder;	// IMP=0x30277574
- (void)queueItemWasAdded:(id)fp8;	// IMP=0x30276678
- (void)queueItemWasAddedNotification:(id)fp8;	// IMP=0x30276774
- (void)queueItemWillBeRemovedNotification:(id)fp8;	// IMP=0x302767d0
- (float)rate;	// IMP=0x302783ec
- (void)rateDidChangeToRate:(float)fp8;	// IMP=0x3027a32c
- (void)registerTimeMarkerObserver:(id)fp8 forItem:(id)fp12 times:(id)fp16 context:(id)fp20;	// IMP=0x3027c5b8
- (void)removeFMPRefListeners:(struct opaqueFigMoviePlaybackRef *)fp8;	// IMP=0x3027c02c
- (void)removeObserver:(id)fp8 fromTMOArray:(id)fp12;	// IMP=0x3027c74c
- (int)repeatMode;	// IMP=0x302775c0
- (void)repeatModeHasChanged:(int)fp8;	// IMP=0x3027cd14
- (BOOL)resumePlayback:(double)fp8 error:(id *)fp16;	// IMP=0x3027864c
- (void)resynchronizeTiming;	// IMP=0x3027a970
- (void)scheduleQueueSpaceCheck;	// IMP=0x30276580
- (void)scheduleUpdateTimeMarkerObservations;	// IMP=0x3027c58c
- (void)setAVItemClass:(Class)fp8;	// IMP=0x30276070
- (BOOL)setAttribute:(id)fp8 forKey:(id)fp12 error:(id *)fp16;	// IMP=0x3027929c
- (void)setCurrentItem:(id)fp8;	// IMP=0x302778c8
- (void)setCurrentItem:(id)fp8 preservingRate:(BOOL)fp12;	// IMP=0x30277618
- (void)setCurrentTime:(double)fp8;	// IMP=0x30278ac4
- (void)setDelegate:(id)fp8;	// IMP=0x3027a980
- (void)setEQPreset:(int)fp8;	// IMP=0x30278be8
- (BOOL)setIndexOfCurrentQueueFeederItem:(unsigned int)fp8 error:(id *)fp12;	// IMP=0x3027d060
- (BOOL)setItemAttribute:(id)fp8 value:(id)fp12 forKey:(id)fp16 error:(id *)fp20;	// IMP=0x3027a9cc
- (void)setLayer:(id)fp8;	// IMP=0x30278d24
- (void)setMuted:(BOOL)fp8;	// IMP=0x30278b80
- (void)setOutputQTESFilePath:(id)fp8;	// IMP=0x30278cdc
- (void)setQueue:(id)fp8;	// IMP=0x30276914
- (void)setQueueFeeder:(id)fp8;	// IMP=0x30277554
- (void)setQueueFeeder:(id)fp8 withIndex:(int)fp12;	// IMP=0x30277360
- (BOOL)setRate:(float)fp8 error:(id *)fp12;	// IMP=0x3027850c
- (BOOL)setRepeatMode:(int)fp8;	// IMP=0x30277580
- (void)setVisualContext:(struct OpaqueFigVisualContext *)fp8;	// IMP=0x30278c94
- (void)setVolume:(float)fp8;	// IMP=0x30278a04
- (BOOL)shouldBeginPlayingItem:(id)fp8 error:(id *)fp12;	// IMP=0x3027842c
- (void)shutdownFMPRef:(struct opaqueFigMoviePlaybackRef *)fp8;	// IMP=0x3027c248
- (void)sizeHasChanged:(struct _NSSize)fp8;	// IMP=0x3027a49c
- (void)unregisterTimeMarkerObserver:(id)fp8 forItem:(id)fp12;	// IMP=0x3027c7d4
- (void)updateTimeMarkerObservations;	// IMP=0x3027c2a0
- (struct OpaqueFigVisualContext *)visualContext;	// IMP=0x30278c88
- (float)volume;	// IMP=0x30278994

@end

