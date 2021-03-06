/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@interface MessageKeychainManager : NSObject
{
}

+ (id)_passwordForGenericAccount:(id)fp8 service:(id)fp12;	// IMP=0x30b9a669
+ (id)_passwordForHost:(id)fp8 username:(id)fp12 port:(int)fp16 protocol:(id)fp20;	// IMP=0x30b9a19d
+ (void)initialize;	// IMP=0x30b9a161
+ (id)passwordForHost:(id)fp8 username:(id)fp12 port:(int)fp16 protocol:(id)fp20;	// IMP=0x30b9a319
+ (id)passwordForServiceName:(id)fp8 accountName:(id)fp12;	// IMP=0x30b9a781
+ (void)removePasswordForHost:(id)fp8 username:(id)fp12 port:(int)fp16 protocol:(id)fp20;	// IMP=0x30b9a545
+ (void)removePasswordForServiceName:(id)fp8 accountName:(id)fp12;	// IMP=0x30b9a939
+ (void)setPassword:(id)fp8 forHost:(id)fp12 username:(id)fp16 port:(int)fp20 protocol:(id)fp24;	// IMP=0x30b9a379
+ (void)setPassword:(id)fp8 forServiceName:(id)fp12 accountName:(id)fp16;	// IMP=0x30b9a7d5

@end

