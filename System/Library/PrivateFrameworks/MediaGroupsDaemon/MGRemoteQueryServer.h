//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSString;
@protocol MGRemoteQueryServerDelegate, OS_dispatch_queue, OS_nw_listener;

__attribute__((visibility("hidden")))
@interface MGRemoteQueryServer : NSObject
{
    _Bool _invalidated;	// 8 = 0x8
    id <MGRemoteQueryServerDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSObject<OS_nw_listener> *_listener;	// 32 = 0x20
    NSString *_homeHash;	// 40 = 0x28
    NSArray *_clients;	// 48 = 0x30
    NSError *_error;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000081cb
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSArray *clients; // @synthesize clients=_clients;
@property(readonly, nonatomic) NSString *homeHash; // @synthesize homeHash=_homeHash;
@property(retain, nonatomic) NSObject<OS_nw_listener> *listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) __weak id <MGRemoteQueryServerDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned int)_connectionLimit;	// IMP=0x0000000000008044
- (void)_updateConnectionLimit;	// IMP=0x0000000000007f93
- (unsigned long long)_unsafe_transactionCount;	// IMP=0x0000000000007e50
- (unsigned long long)_transactionCount;	// IMP=0x0000000000007dfd
- (void)clientInvalidated:(id)arg1;	// IMP=0x0000000000007d28
- (void)clientLostTransaction:(id)arg1;	// IMP=0x0000000000007ca1
- (void)_clientRemove:(id)arg1;	// IMP=0x0000000000007aff
- (id)_clientFind:(id)arg1;	// IMP=0x00000000000077bb
- (id)_clientAdd:(id)arg1;	// IMP=0x00000000000075b4
- (void)_handleNewConnection:(id)arg1;	// IMP=0x0000000000006ea2
- (void)_prepareListenerHandlers;	// IMP=0x0000000000006ad9
- (id)_prepareListenerAdvertisement;	// IMP=0x00000000000068db
- (void)_prepareListenerHTTP:(id)arg1;	// IMP=0x0000000000006854
- (id)_prepareListenerIdentity;	// IMP=0x00000000000067ed
- (CDUnknownBlockType)_prepareListenerTLS;	// IMP=0x00000000000066c8
- (id)_prepareListenerParameters;	// IMP=0x00000000000065d8
- (void)_invalidated;	// IMP=0x0000000000006464
- (void)_invalidate;	// IMP=0x00000000000062a6
- (void)_startListener;	// IMP=0x0000000000005fc6
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000005e71
- (id)initWithHomeHash:(id)arg1 delegate:(id)arg2 dispatchQueue:(id)arg3;	// IMP=0x0000000000005cdf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

