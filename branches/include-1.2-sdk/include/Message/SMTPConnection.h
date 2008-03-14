/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Message/Connection.h>

@class NSMutableArray, NSMutableData, NSString;

@interface SMTPConnection : Connection
{
    unsigned int _lastResponseCode:31;
    unsigned int _hideLoggedData:1;
    id _lastResponse;
    NSMutableArray *_serviceExtensions;
    NSMutableData *_mdata;
    NSString *_domainName;
    int _originalSocketTimeout;
    int _lastCommandTimestamp;
    id _delegate;
}

+ (void)initialize;	// IMP=0x30b8be71
- (BOOL)authenticateUsingAccount:(id)fp8;	// IMP=0x30b8c3b1
- (BOOL)authenticateUsingAccount:(id)fp8 authenticator:(id)fp12;	// IMP=0x30b8c3fd
- (id)authenticationMechanisms;	// IMP=0x30b8c2e1
- (BOOL)connectUsingAccount:(id)fp8;	// IMP=0x30b8c865
- (id)dataForDataCmd;	// IMP=0x30b8ccbd
- (id)dataForMailFrom:(id)fp8;	// IMP=0x30b8cc65
- (id)dataForRcptTo:(id)fp8;	// IMP=0x30b8cc91
- (void)dealloc;	// IMP=0x30b8bfad
- (id)domainName;	// IMP=0x30b8c0f7
- (id)init;	// IMP=0x30b8bf41
- (id)lastResponse;	// IMP=0x30b8c00f
- (unsigned int)lastResponseCode;	// IMP=0x30b8c0f1
- (int)mailFrom:(id)fp8;	// IMP=0x30b8cb61
- (int)mailFrom:(id)fp8 recipients:(id)fp12 withData:(id)fp16 host:(id)fp20 errorMessage:(id *)fp24 serverResponse:(id *)fp28 displayError:(char *)fp32;	// IMP=0x30b8d619
- (unsigned long long)maximumMessageBytes;	// IMP=0x30b8c1b5
- (int)noop;	// IMP=0x30b8cbe1
- (int)quit;	// IMP=0x30b8cc21
- (int)rcptTo:(id)fp8;	// IMP=0x30b8cba1
- (int)sendData:(id)fp8;	// IMP=0x30b8d331
- (void)setDelegate:(id)fp8;	// IMP=0x30b8bfa9
- (void)setDomainName:(id)fp8;	// IMP=0x30b8c0fb
- (int)state;	// IMP=0x30b8c001
- (BOOL)supportsPipelining;	// IMP=0x30b8c13d
- (long)timeLastCommandWasSent;	// IMP=0x30b8cce5

@end

