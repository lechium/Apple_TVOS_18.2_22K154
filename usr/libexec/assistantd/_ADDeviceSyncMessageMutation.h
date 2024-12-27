//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceSyncCommandPullDeltaRequest, ADDeviceSyncCommandPullDeltaResponse, ADDeviceSyncCommandPullGenerationsRequest, ADDeviceSyncCommandPullGenerationsResponse, ADDeviceSyncCommandPullSnapshotRequest, ADDeviceSyncCommandPullSnapshotResponse, ADDeviceSyncCommandPushGenerationsRequest, ADDeviceSyncCommandPushGenerationsResponse, ADDeviceSyncMessage, NSString;

@interface _ADDeviceSyncMessageMutation : NSObject
{
    ADDeviceSyncMessage *_base;	// 8 = 0x8
    unsigned long long _sequence;	// 16 = 0x10
    long long _type;	// 24 = 0x18
    ADDeviceSyncCommandPushGenerationsRequest *_commandPushGenerationsRequest;	// 32 = 0x20
    ADDeviceSyncCommandPushGenerationsResponse *_commandPushGenerationsResponse;	// 40 = 0x28
    ADDeviceSyncCommandPullGenerationsRequest *_commandPullGenerationsRequest;	// 48 = 0x30
    ADDeviceSyncCommandPullGenerationsResponse *_commandPullGenerationsResponse;	// 56 = 0x38
    ADDeviceSyncCommandPullDeltaRequest *_commandPullDeltaRequest;	// 64 = 0x40
    ADDeviceSyncCommandPullDeltaResponse *_commandPullDeltaResponse;	// 72 = 0x48
    ADDeviceSyncCommandPullSnapshotRequest *_commandPullSnapshotRequest;	// 80 = 0x50
    ADDeviceSyncCommandPullSnapshotResponse *_commandPullSnapshotResponse;	// 88 = 0x58
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasSequence:1;
        unsigned int hasType:1;
        unsigned int hasCommandPushGenerationsRequest:1;
        unsigned int hasCommandPushGenerationsResponse:1;
        unsigned int hasCommandPullGenerationsRequest:1;
        unsigned int hasCommandPullGenerationsResponse:1;
        unsigned int hasCommandPullDeltaRequest:1;
        unsigned int hasCommandPullDeltaResponse:1;
        unsigned int hasCommandPullSnapshotRequest:1;
        unsigned int hasCommandPullSnapshotResponse:1;
    } _mutationFlags;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000000cb1e5
- (void)setCommandPullSnapshotResponse:(id)arg1;	// IMP=0x00100000000cb1c3
- (id)getCommandPullSnapshotResponse;	// IMP=0x00100000000cb18b
- (void)setCommandPullSnapshotRequest:(id)arg1;	// IMP=0x00100000000cb169
- (id)getCommandPullSnapshotRequest;	// IMP=0x00100000000cb131
- (void)setCommandPullDeltaResponse:(id)arg1;	// IMP=0x00100000000cb10f
- (id)getCommandPullDeltaResponse;	// IMP=0x00100000000cb0d7
- (void)setCommandPullDeltaRequest:(id)arg1;	// IMP=0x00100000000cb0b7
- (id)getCommandPullDeltaRequest;	// IMP=0x00100000000cb07f
- (void)setCommandPullGenerationsResponse:(id)arg1;	// IMP=0x00100000000cb05f
- (id)getCommandPullGenerationsResponse;	// IMP=0x00100000000cb027
- (void)setCommandPullGenerationsRequest:(id)arg1;	// IMP=0x00100000000cb007
- (id)getCommandPullGenerationsRequest;	// IMP=0x00100000000cafcf
- (void)setCommandPushGenerationsResponse:(id)arg1;	// IMP=0x00100000000cafaf
- (id)getCommandPushGenerationsResponse;	// IMP=0x00100000000caf77
- (void)setCommandPushGenerationsRequest:(id)arg1;	// IMP=0x00100000000caf57
- (id)getCommandPushGenerationsRequest;	// IMP=0x00100000000caf1f
- (void)setType:(long long)arg1;	// IMP=0x00100000000caf11
- (long long)getType;	// IMP=0x00100000000caeef
- (void)setSequence:(unsigned long long)arg1;	// IMP=0x00100000000caee1
- (unsigned long long)getSequence;	// IMP=0x00100000000caebf
- (_Bool)isDirty;	// IMP=0x00100000000caeb4
- (id)initWithBase:(id)arg1;	// IMP=0x00100000000cae49

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

