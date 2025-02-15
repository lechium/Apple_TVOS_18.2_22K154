//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDDevice, HMDMessageDispatcher, HMFTimer, NSMapTable, NSMutableArray, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDResidentCommunicationHandler : HMFObject
{
    _Bool _ownerUser;	// 8 = 0x8
    int _numOutstandingReadRequests;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSMapTable *_deviceMapping;	// 24 = 0x18
    NSMutableArray *_pendingReadRequests;	// 32 = 0x20
    NSMapTable *_dispatchedReadRequests;	// 40 = 0x28
    HMFTimer *_multiReadCoalesceTimer;	// 48 = 0x30
    NSUUID *_homeUUID;	// 56 = 0x38
    HMDMessageDispatcher *_remoteDispatcher;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x00100000003ea2c0
+ (void)_clearAllPendingRequests:(id)arg1 error:(id)arg2;	// IMP=0x00100000003ea18c
+ (void)_clearAllGeneratedRequests:(id)arg1 error:(id)arg2;	// IMP=0x00100000003e9f18
+ (id)createResponseSubset:(id)arg1 overallError:(id)arg2 readRequest:(id)arg3 error:(id *)arg4;	// IMP=0x00100000003e94a3
+ (void)_processResponseForMultireadRequest:(id)arg1 overallError:(id)arg2 response:(id)arg3;	// IMP=0x00100000003e8f18
- (void).cxx_destruct;	// IMP=0x00000000003e839a
@property(nonatomic) int numOutstandingReadRequests; // @synthesize numOutstandingReadRequests=_numOutstandingReadRequests;
@property(readonly, nonatomic) __weak HMDMessageDispatcher *remoteDispatcher; // @synthesize remoteDispatcher=_remoteDispatcher;
@property(readonly, nonatomic, getter=isOwnerUser) _Bool ownerUser; // @synthesize ownerUser=_ownerUser;
@property(readonly, nonatomic) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(retain, nonatomic) HMFTimer *multiReadCoalesceTimer; // @synthesize multiReadCoalesceTimer=_multiReadCoalesceTimer;
@property(readonly, nonatomic) NSMapTable *dispatchedReadRequests; // @synthesize dispatchedReadRequests=_dispatchedReadRequests;
@property(readonly, nonatomic) NSMutableArray *pendingReadRequests; // @synthesize pendingReadRequests=_pendingReadRequests;
@property(retain, nonatomic) NSMapTable *deviceMapping; // @synthesize deviceMapping=_deviceMapping;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (id)logIdentifier;	// IMP=0x00000000003e8273
- (void)_processResponse:(id)arg1 overallError:(id)arg2 messageIdentifier:(id)arg3;	// IMP=0x00000000003e7d19
- (void)_sendMultipleCharacteristicRead;	// IMP=0x00000000003e6e27
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000003e6d6f
- (void)redispatchMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3;	// IMP=0x00000000003e6c5f
- (long long)preferredDeviceType;	// IMP=0x00000000003e6b65
@property(readonly, nonatomic) HMDDevice *preferredDevice;
- (id)deviceForType:(long long)arg1;	// IMP=0x00000000003e6aad
- (_Bool)containsDevice:(id)arg1;	// IMP=0x00000000003e68bc
- (void)removeDeviceForType:(long long)arg1;	// IMP=0x00000000003e66df
- (void)setDevice:(id)arg1 forType:(long long)arg2;	// IMP=0x00000000003e65ec
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000003e638c
- (id)initWithHome:(id)arg1 remoteDispatcher:(id)arg2;	// IMP=0x00000000003e61f7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

