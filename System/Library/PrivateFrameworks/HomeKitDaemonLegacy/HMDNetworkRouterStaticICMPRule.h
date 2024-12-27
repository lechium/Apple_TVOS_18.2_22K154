//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDNetworkRouterICMPTypeList, HMDNetworkRouterIPAddress, HMDNetworkRouterLANIdentifierList, HMDNetworkRouterRuleDirection, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterStaticICMPRule : NSObject
{
    HMDNetworkRouterRuleDirection *_direction;	// 8 = 0x8
    HMDNetworkRouterLANIdentifierList *_lanIdentifierList;	// 16 = 0x10
    HMDNetworkRouterIPAddress *_destinationIPAddress;	// 24 = 0x18
    HMDNetworkRouterICMPTypeList *_icmpTypeList;	// 32 = 0x20
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000005092c6
+ (id)ruleFromFirewallRuleLAN:(id)arg1;	// IMP=0x0010000000492fb7
- (void).cxx_destruct;	// IMP=0x0000000000506912
@property(retain, nonatomic) HMDNetworkRouterICMPTypeList *icmpTypeList; // @synthesize icmpTypeList=_icmpTypeList;
@property(retain, nonatomic) HMDNetworkRouterIPAddress *destinationIPAddress; // @synthesize destinationIPAddress=_destinationIPAddress;
@property(retain, nonatomic) HMDNetworkRouterLANIdentifierList *lanIdentifierList; // @synthesize lanIdentifierList=_lanIdentifierList;
@property(retain, nonatomic) HMDNetworkRouterRuleDirection *direction; // @synthesize direction=_direction;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005063ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000050630d
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000505e80
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000005059eb
- (id)initWithDirection:(id)arg1 lanIdentifierList:(id)arg2 destinationIPAddress:(id)arg3 icmpTypeList:(id)arg4;	// IMP=0x0000000000505903
- (id)init;	// IMP=0x00000000005058d4
- (void)addTo:(id)arg1;	// IMP=0x00000000004916aa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

