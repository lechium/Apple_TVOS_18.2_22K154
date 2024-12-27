//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface CCRapportRequest : NSObject
{
    NSObject<OS_os_transaction> *_transaction;	// 8 = 0x8
    NSMutableSet *_deliveredToDevices;	// 16 = 0x10
    NSMutableSet *_inFlightToDevices;	// 24 = 0x18
    NSMutableDictionary *_errorFromDevice;	// 32 = 0x20
    unsigned long long _state;	// 40 = 0x28
    NSUUID *_uuid;	// 48 = 0x30
    NSObject<OS_xpc_object> *_activity;	// 56 = 0x38
    NSArray *_itemTypesSupportingSync;	// 64 = 0x40
    CDUnknownBlockType _completionHandler;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_requestTimeout;	// 88 = 0x58
    CDUnknownBlockType _requestTimeoutHandler;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000009444
@property(copy, nonatomic) CDUnknownBlockType requestTimeoutHandler; // @synthesize requestTimeoutHandler=_requestTimeoutHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *requestTimeout; // @synthesize requestTimeout=_requestTimeout;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSDictionary *errorFromDevice; // @synthesize errorFromDevice=_errorFromDevice;
@property(retain, nonatomic) NSSet *inFlightToDevices; // @synthesize inFlightToDevices=_inFlightToDevices;
@property(retain, nonatomic) NSSet *deliveredToDevices; // @synthesize deliveredToDevices=_deliveredToDevices;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSArray *itemTypesSupportingSync; // @synthesize itemTypesSupportingSync=_itemTypesSupportingSync;
@property(retain, nonatomic) NSObject<OS_xpc_object> *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)requestTimeoutDidFire;	// IMP=0x00000000000092a9
- (void)stopRequestTimeout;	// IMP=0x0000000000009273
- (void)startRequestTimeout;	// IMP=0x000000000000912b
- (void)markAsDeliveredToDevice:(id)arg1 withError:(id)arg2;	// IMP=0x000000000000909f
- (void)markAsInFlightToDevice:(id)arg1;	// IMP=0x000000000000904c
- (id)initWithUUID:(id)arg1 activity:(id)arg2 itemTypesSupportingSync:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000008eb4

@end

