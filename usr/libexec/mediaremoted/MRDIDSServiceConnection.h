//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDevice, IDSService, MRDIDSService, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MRDIDSServiceConnection : NSObject
{
    NSMutableDictionary *_messageHandlers;	// 8 = 0x8
    NSMutableDictionary *_destinationMessageHandlers;	// 16 = 0x10
    NSMutableDictionary *_responseHandlers;	// 24 = 0x18
    IDSDevice *_device;	// 32 = 0x20
    id _serviceHandlerToken;	// 40 = 0x28
    NSString *_deviceUID;	// 48 = 0x30
    MRDIDSService *_mrService;	// 56 = 0x38
    IDSService *_idsService;	// 64 = 0x40
    CDUnknownBlockType _invalidationHandler;	// 72 = 0x48
    CDUnknownBlockType _connectionHandler;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_queue;	// 88 = 0x58
    unsigned long long _totalOutgoingMessageCount;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x002000000017803f
@property(readonly, nonatomic) unsigned long long totalOutgoingMessageCount; // @synthesize totalOutgoingMessageCount=_totalOutgoingMessageCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType connectionHandler; // @synthesize connectionHandler=_connectionHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(readonly, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
@property(readonly, nonatomic) MRDIDSService *mrService; // @synthesize mrService=_mrService;
@property(readonly, nonatomic) NSString *deviceUID; // @synthesize deviceUID=_deviceUID;
- (id)_configurationFromDestination:(id)arg1 session:(id)arg2;	// IMP=0x0010000000177f3d
- (unsigned long long)_generateMessageID;	// IMP=0x0010000000177f01
- (void)_maybeDeviceConnectionStatusChanged;	// IMP=0x0010000000177ad6
- (void)handleIncomingMessage:(id)arg1 type:(id)arg2 destination:(id)arg3 session:(id)arg4 messageID:(id)arg5 replyID:(id)arg6;	// IMP=0x0010000000177599
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x0010000000177587
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x0010000000177575
- (void)handleDidReceiveResetConnectionRequest;	// IMP=0x0010000000177413
- (void)removeMessageHandlerForType:(id)arg1 destination:(id)arg2 session:(id)arg3;	// IMP=0x00100000001771f6
- (void)removeMessageHandlerForType:(id)arg1;	// IMP=0x0010000000177106
- (void)setMessageHandler:(CDUnknownBlockType)arg1 forType:(id)arg2 destination:(id)arg3 session:(id)arg4;	// IMP=0x0010000000176ea4
- (void)setMessageHandler:(CDUnknownBlockType)arg1 forType:(id)arg2;	// IMP=0x0010000000176d08
- (_Bool)sendMessage:(id)arg1 type:(id)arg2 destination:(id)arg3 session:(id)arg4 options:(id)arg5 priority:(long long)arg6 response:(CDUnknownBlockType)arg7;	// IMP=0x0010000000176bec
- (_Bool)sendMessage:(id)arg1 type:(id)arg2 destination:(id)arg3 session:(id)arg4 options:(id)arg5 priority:(long long)arg6;	// IMP=0x0010000000176bc0
- (void)resetConnection;	// IMP=0x0010000000176b70
@property(readonly, nonatomic) _Bool isConnected;
@property(readonly, nonatomic) NSString *name;
@property(retain, nonatomic) IDSDevice *device;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (void)dealloc;	// IMP=0x001000000017650a
- (id)initWithDeviceUID:(id)arg1;	// IMP=0x001000000017636d
- (id)initWithDevice:(id)arg1;	// IMP=0x00100000001762eb
- (id)init;	// IMP=0x0010000000176204

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

