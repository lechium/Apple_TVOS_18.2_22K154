//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString;
@protocol ADDeviceSyncMessageReceiving, OS_dispatch_queue;

@interface ADDeviceSyncSession : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    unsigned long long _incomingSequence;	// 16 = 0x10
    unsigned long long _outgoingSequence;	// 24 = 0x18
    NSSet *_messageSenders;	// 32 = 0x20
    NSDictionary *_dataConsumersByType;	// 40 = 0x28
    NSDictionary *_dataProvidersByType;	// 48 = 0x30
    NSString *_deviceIdentifier;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000170022
@property(readonly, copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (void)_pullSnapshotForDataType:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000016fe31
- (void)_pullDeltaForDataType:(id)arg1 generation:(unsigned long long)arg2 limit:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000016fc1d
- (void)_pullGenerationsForDataTypes:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000016fa36
- (void)_pushGenerationsByDataType:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000016f84f
- (void)_pingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000016f6b1
- (void)_sendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000016f33c
- (void)_handlePullSnapshotForDataType:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000016f0de
- (void)_handlePullDeltaForDataType:(id)arg1 generation:(unsigned long long)arg2 limit:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000016ee39
- (void)_handlePullGenerationsForDataTypes:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000016e9fc
- (void)_handlePushGenerationsByDataType:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000016e773
- (void)_handlePingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000016e6c8
- (void)_receiveMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000016e1c3
- (_Bool)_handlePulledSnapshot:(id)arg1 forDataType:(id)arg2;	// IMP=0x001000000016e145
- (_Bool)_handlePulledDeltaWithIncrementalChanges:(id)arg1 forDataType:(id)arg2;	// IMP=0x001000000016e0c7
- (_Bool)_handlePushedOrPulledGeneration:(unsigned long long)arg1 forDataType:(id)arg2;	// IMP=0x001000000016df47
- (void)_invalidate;	// IMP=0x001000000016def8
- (void)sendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000016de41
- (void)receiveMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000016dd8a
- (void)invalidate;	// IMP=0x001000000016dd3f
- (void)pushGenerationsByDataTypes:(id)arg1;	// IMP=0x001000000016dcb2
- (id)initWithQueue:(id)arg1 deviceIdentifier:(id)arg2 dataConsumersByType:(id)arg3 dataProvidersByType:(id)arg4 messageSenders:(id)arg5;	// IMP=0x001000000016db2d
@property(readonly, nonatomic) id <ADDeviceSyncMessageReceiving> messageReceiver;
- (void)dealloc;	// IMP=0x001000000016dae6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

