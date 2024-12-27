//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface AMSDDeviceMessengerService : NSObject
{
    NSArray *_cachedMessages;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSMutableArray *_delegates;	// 24 = 0x18
    NSMutableDictionary *_outgoingMessageReplyHandlers;	// 32 = 0x20
    IDSService *_service;	// 40 = 0x28
}

+ (_Bool)isConnectionEntitled:(id)arg1;	// IMP=0x002000000001745f
+ (id)sharedService;	// IMP=0x0010000000016e4d
- (void).cxx_destruct;	// IMP=0x002000000001bcca
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
@property(readonly, nonatomic) NSMutableDictionary *outgoingMessageReplyHandlers; // @synthesize outgoingMessageReplyHandlers=_outgoingMessageReplyHandlers;
@property(retain, nonatomic) NSMutableArray *delegates; // @synthesize delegates=_delegates;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSArray *cachedMessages; // @synthesize cachedMessages=_cachedMessages;
- (id)_saveLocation;	// IMP=0x001000000001bc18
- (void)_saveMessage:(id)arg1;	// IMP=0x001000000001b690
- (void)_overwriteSavedMessages:(id)arg1;	// IMP=0x001000000001ac5f
- (id)_getSavedMessages;	// IMP=0x001000000001a50c
- (void)_clearMessage:(id)arg1;	// IMP=0x001000000001a16c
- (void)_cleanupSavedMessages;	// IMP=0x001000000001a0f5
- (_Bool)_sendMessage:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000199d9
- (id)_replyForIncomingMessage:(id)arg1;	// IMP=0x0010000000019878
- (id)_messageWithProtobuf:(id)arg1 fromID:(id)arg2 context:(id)arg3;	// IMP=0x00100000000193c9
- (void)_handleIncomingReply:(id)arg1;	// IMP=0x001000000001906b
- (void)_handleIncomingMessage:(id)arg1;	// IMP=0x0010000000018f51
- (void)_handleErrorForIdentifier:(id)arg1 error:(id)arg2;	// IMP=0x0010000000018cab
- (void)_enumerateDelegatesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000189cf
- (long long)_determineDeviceTypeFromDeviceID:(id)arg1 devices:(id)arg2;	// IMP=0x001000000001874f
- (id)_determineDestinationsForMessage:(id)arg1;	// IMP=0x001000000001817d
- (_Bool)_attemptAutomaticHandleForMessage:(id)arg1;	// IMP=0x0010000000018119
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x0010000000017fd1
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000017d54
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x0010000000017bee
- (void)sendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000176c4
- (void)getMessagesWithPurpose:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000174e9
- (void)addDelegate:(id)arg1;	// IMP=0x001000000001732b
- (id)init;	// IMP=0x0010000000016ea2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

