//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BKSHIDEventAuthenticationOriginator, NSObject, NSString, _CFRemotePasteboardCache;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _CFGeneralPasteboardStore
{
    long long _localOnlyGeneration;	// 112 = 0x70
    _CFRemotePasteboardCache *_remotePasteboardCache;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_remotePasteboardNotificationQueue;	// 128 = 0x80
    unsigned long long _lastAccessTimestamp;	// 136 = 0x88
    unsigned long long _lastRemoteAvailableTimestamp;	// 144 = 0x90
    unsigned long long _timeout;	// 152 = 0x98
    BKSHIDEventAuthenticationOriginator *_authenticationOriginator;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_authenticationQueue;	// 168 = 0xa8
    struct __CFDictionary *_appsToVerificationTokenRequesters;	// 176 = 0xb0
    NSObject<OS_dispatch_queue> *_approvalDialogQueue;	// 184 = 0xb8
}

+ (id)generalPasteboard;	// IMP=0x00100000001098dc
- (void)getUserApproval:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000010c42a
- (void)pasteboardWillBeFetched:(CDUnknownBlockType)arg1;	// IMP=0x000000000010c424
- (void)remotePasteboardAvailable:(_Bool)arg1;	// IMP=0x000000000010c417
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000010c395
- (void)_onqueue_handleNewEntries:(struct __CFArray *)arg1 forMessage:(id)arg2 shouldInvalidateClientMetadata:(_Bool *)arg3;	// IMP=0x000000000010bfec
- (id)_onqueue_cacheForGeneration:(long long)arg1;	// IMP=0x000000000010bed8
- (long long)_onqueue_nextGenerationCount;	// IMP=0x000000000010be1d
- (void)notifyRemoteGenerationBecameAvailable:(unsigned char)arg1;	// IMP=0x000000000010bc5e
- (void)_onqueue_notifyRemoteGenerationBecameAvailable:(unsigned char)arg1;	// IMP=0x000000000010baf9
- (void)handleRequestData:(id)arg1;	// IMP=0x000000000010b3a6
- (void)validatePasteRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000010a96d
- (void)handleVerificationTokenCreate:(id)arg1;	// IMP=0x000000000010a06d
- (void)handleRefreshCache:(id)arg1;	// IMP=0x0000000000109ede
- (void)setTimeout:(unsigned long long)arg1;	// IMP=0x0000000000109ed2
- (void)handlePasteNotification;	// IMP=0x0000000000109ead
- (void)handleRegisterEntries:(id)arg1;	// IMP=0x0000000000109e3a
- (void)handleNotifyHasEntries:(id)arg1;	// IMP=0x0000000000109dc7
- (void)handleMakeGenerationLocal:(id)arg1;	// IMP=0x0000000000109ce2
- (void)onqueue_handleDeadClient:(id)arg1 withUUID:(struct __CFUUID *)arg2;	// IMP=0x0000000000109ae6
- (void)dealloc;	// IMP=0x0000000000109a26
- (id)_initWithName:(struct __CFString *)arg1;	// IMP=0x000000000010993d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

