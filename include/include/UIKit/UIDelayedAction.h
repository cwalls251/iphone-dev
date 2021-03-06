/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class NSTimer;

@interface UIDelayedAction : NSObject
{
    id m_target;
    SEL m_action;
    id m_userInfo;
    double m_delay;
    NSTimer *m_timer;
    BOOL m_canceled;
}

- (void)cancel;	// IMP=0x3242fdf0
- (void)dealloc;	// IMP=0x3242fbf0
- (id)initWithTarget:(id)fp8 action:(SEL)fp12 userInfo:(id)fp16 delay:(double)fp20;	// IMP=0x3242fb3c
- (BOOL)scheduled;	// IMP=0x3242fe84
- (void)setTarget:(id)fp8;	// IMP=0x3242fec0
- (id)target;	// IMP=0x3242ff00
- (void)timerFired:(id)fp8;	// IMP=0x3242ff08
- (void)touch;	// IMP=0x3242fc88
- (void)touchWithDelay:(double)fp8;	// IMP=0x3242fcb4
- (id)userInfo;	// IMP=0x3242fe7c

@end

