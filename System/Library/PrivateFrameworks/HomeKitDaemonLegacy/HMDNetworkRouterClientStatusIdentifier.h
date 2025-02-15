//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HAPTLVUnsignedNumberValue, HMDNetworkRouterIPAddress, NSData, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterClientStatusIdentifier : NSObject
{
    HAPTLVUnsignedNumberValue *_clientIdentifier;	// 8 = 0x8
    NSData *_macAddress;	// 16 = 0x10
    HMDNetworkRouterIPAddress *_ipAddress;	// 24 = 0x18
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000051957a
- (void).cxx_destruct;	// IMP=0x0000000000519547
@property(retain, nonatomic) HMDNetworkRouterIPAddress *ipAddress; // @synthesize ipAddress=_ipAddress;
@property(retain, nonatomic) NSData *macAddress; // @synthesize macAddress=_macAddress;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000519167
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005190af
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000518cf3
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000051891a
- (id)initWithClientIdentifier:(id)arg1 macAddress:(id)arg2 ipAddress:(id)arg3;	// IMP=0x0000000000518862
- (id)init;	// IMP=0x0000000000518833

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

