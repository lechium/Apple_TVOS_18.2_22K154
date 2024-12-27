//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFMessage, NSObject, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDRemoteReadRequestMessage : HMFObject
{
    HMFMessage *_readMessage;	// 8 = 0x8
    NSUUID *_accessoryUUID;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_responseQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003e61b5
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // @synthesize responseQueue=_responseQueue;
@property(readonly, nonatomic) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(readonly, nonatomic) HMFMessage *readMessage; // @synthesize readMessage=_readMessage;
- (id)description;	// IMP=0x00000000003e608c
- (id)debugDescription;	// IMP=0x00000000003e5f44
- (id)initWithReadMessage:(id)arg1 accessoryUUID:(id)arg2 responseQueue:(id)arg3;	// IMP=0x00000000003e5e7a

@end

