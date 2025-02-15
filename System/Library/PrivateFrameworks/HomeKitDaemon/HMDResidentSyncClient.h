//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFExponentialBackoffTimer, HMFFuture, HMFMessageDispatcher, HMFPromise, MKFResidentSyncMetadata, NSHashTable, NSString;
@protocol HMDResidentDeviceManager, HMDResidentSyncClientDataSource, HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDResidentSyncClient
{
    HMFMessageDispatcher *_dispatcher;	// 56 = 0x38
    id <HMDResidentDeviceManager> _residentDeviceManager;	// 64 = 0x40
    id <HMDResidentSyncClientDataSource> _dataSource;	// 72 = 0x48
    _Bool _residentCapable;	// 80 = 0x50
    NSHashTable *_requestsInProgress;	// 88 = 0x58
    MKFResidentSyncMetadata *_metadata;	// 96 = 0x60
    HMFExponentialBackoffTimer *_retryTimer;	// 104 = 0x68
    HMFFuture *_performFetchJitterFuture;	// 112 = 0x70
    HMFPromise *_performFetchJitterPromise;	// 120 = 0x78
    _Bool _retryRequired;	// 128 = 0x80
    long long _accessDeniedCount;	// 136 = 0x88
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000009a3f4f
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
- (void)_handleHomeDataChanged:(id)arg1;	// IMP=0x00000000009a3e5d
- (id)retryTimer;	// IMP=0x00000000009a3e48
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000009a3dd1
- (void)performResidentRequest:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000009a3bfd
- (void)handlePrimaryResidentChanged:(id)arg1;	// IMP=0x00000000009a390b
- (void)performSync;	// IMP=0x00000000009a38b8
- (void)stop;	// IMP=0x00000000009a3878
- (id)start;	// IMP=0x00000000009a36cc
- (id)initWithHome:(id)arg1 codingModel:(id)arg2 dispatcher:(id)arg3 residentDeviceManager:(id)arg4 notificationCenter:(id)arg5 persistence:(id)arg6 isResidentCapable:(_Bool)arg7 dataSource:(id)arg8 logEventSubmitter:(id)arg9;	// IMP=0x00000000009a34e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

