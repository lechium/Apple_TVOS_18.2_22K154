//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HAPAccessory, NSDate, NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDAccessoryTransportInformation : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _reachable;	// 12 = 0xc
    HAPAccessory *_hapAccessory;	// 16 = 0x10
    NSString *_protocolVersion;	// 24 = 0x18
    NSDate *_reachableLastChangedTime;	// 32 = 0x20
    NSString *_serverIdentifier;	// 40 = 0x28
    NSNumber *_instanceID;	// 48 = 0x30
    long long _linkType;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000046685b
- (void).cxx_destruct;	// IMP=0x00000000004667f7
@property(readonly, nonatomic) long long linkType; // @synthesize linkType=_linkType;
@property(readonly, copy, nonatomic) NSNumber *instanceID; // @synthesize instanceID=_instanceID;
@property(readonly, copy, nonatomic) NSString *serverIdentifier; // @synthesize serverIdentifier=_serverIdentifier;
- (id)attributeDescriptions;	// IMP=0x00000000004665e4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000466512
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004662ee
- (id)report;	// IMP=0x00000000004660ff
@property(readonly) NSDictionary *transportInfoDictionary;
@property(readonly, copy) NSDate *reachableLastChangedTime; // @synthesize reachableLastChangedTime=_reachableLastChangedTime;
@property(getter=isReachable) _Bool reachable; // @synthesize reachable=_reachable;
@property(copy) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(retain) HAPAccessory *hapAccessory; // @synthesize hapAccessory=_hapAccessory;
- (id)initWithServerIdentifier:(id)arg1 instanceID:(id)arg2 linkType:(long long)arg3;	// IMP=0x0000000000465c67

@end

