//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSOperationQueue, NSString, NSURL, NSURLConnection, NSURLRequest;

__attribute__((visibility("hidden")))
@interface NSURLConnectionInternal : NSObject
{
    NSURLConnection *_connection;	// 8 = 0x8
    NSOperationQueue *_delegateQueue;	// 16 = 0x10
    NSURL *_url;	// 24 = 0x18
    NSURLRequest *_originalRequest;	// 32 = 0x20
    NSURLRequest *_currentRequest;	// 40 = 0x28
    id _delegate;	// 48 = 0x30
    NSDictionary *_connectionProperties;	// 56 = 0x38
    _Bool _connectionActive;	// 64 = 0x40
}

- (id)_timingData;	// IMP=0x0000000000243fdd
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;	// IMP=0x0000000000243fd7
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;	// IMP=0x0000000000243fd1
- (void)cancelAuthenticationChallenge:(id)arg1;	// IMP=0x0000000000243fcb
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;	// IMP=0x0000000000243fc5
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;	// IMP=0x0000000000243fbf
- (void)invokeForDelegate:(CDUnknownBlockType)arg1;	// IMP=0x0000000000243fb9
- (void)_invalidate;	// IMP=0x0000000000243fb3
- (void)_setDelegateQueue:(id)arg1;	// IMP=0x0000000000243f85
- (void)dealloc;	// IMP=0x0000000000243f26
- (id)initWithInfo:(const struct InternalInit *)arg1;	// IMP=0x0000000000243e85

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

