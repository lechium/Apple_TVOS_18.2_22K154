//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, HMFMessageDispatcher, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDZone : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableArray *_roomUUIDs;	// 16 = 0x10
    NSMutableDictionary *_currentRooms;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSUUID *_uuid;	// 40 = 0x28
    NSUUID *_spiClientIdentifier;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQueue;	// 56 = 0x38
    HMDHome *_home;	// 64 = 0x40
    HMFMessageDispatcher *_msgDispatcher;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000708070
- (void).cxx_destruct;	// IMP=0x00000000007079d0
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy) NSUUID *spiClientIdentifier; // @synthesize spiClientIdentifier=_spiClientIdentifier;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)backingStoreObjects:(long long)arg1;	// IMP=0x00000000007078a4
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x0000000000707766
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000707760
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000007074ec
- (_Bool)updateZoneWithModel:(id)arg1 message:(id)arg2 error:(id *)arg3;	// IMP=0x000000000070729a
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)removeRoom:(id)arg1;	// IMP=0x0000000000707192
- (void)addRoomIfNotPresent:(id)arg1;	// IMP=0x0000000000707079
- (_Bool)_handleSetRoomsTransactionWithRoomUUIDStrings:(id)arg1 error:(id *)arg2;	// IMP=0x00000000007066fd
- (void)_handleRename:(id)arg1;	// IMP=0x0000000000706325
- (void)_handleRemoveRoom:(id)arg1;	// IMP=0x0000000000705f99
- (id)_checkForAddValidity:(id)arg1;	// IMP=0x0000000000705b76
- (void)_handleAddRoom:(id)arg1;	// IMP=0x0000000000705842
- (void)_registerForMessages;	// IMP=0x0000000000705497
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000070530b
- (id)_initWithCoder:(id)arg1;	// IMP=0x0000000000704dfa
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000704d91
- (id)dumpState;	// IMP=0x00000000007049fd
@property(readonly, copy) NSArray *rooms;
@property(readonly, copy) NSArray *roomUUIDs;
@property(copy) NSString *name; // @synthesize name=_name;
- (void)configure:(id)arg1 queue:(id)arg2;	// IMP=0x00000000007047dc
- (void)dealloc;	// IMP=0x0000000000704716
- (id)initWithName:(id)arg1 uuid:(id)arg2 home:(id)arg3;	// IMP=0x00000000007044da
@property(readonly, copy) NSDictionary *assistantObject;
@property(readonly, copy) NSString *urlString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

