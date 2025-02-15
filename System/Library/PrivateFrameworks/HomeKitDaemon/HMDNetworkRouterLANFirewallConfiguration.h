//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDNetworkRouterLANFirewall, HMDNetworkRouterLANFirewallRuleList, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterLANFirewallConfiguration : NSObject
{
    HMDNetworkRouterLANFirewall *_type;	// 8 = 0x8
    HMDNetworkRouterLANFirewallRuleList *_ruleList;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000006d321a
+ (id)configurationFromFirewallRuleConfiguration:(id)arg1;	// IMP=0x00100000006442c8
+ (id)configurationWithFullAccess;	// IMP=0x0010000000644237
- (void).cxx_destruct;	// IMP=0x00000000006c98c1
@property(retain, nonatomic) HMDNetworkRouterLANFirewallRuleList *ruleList; // @synthesize ruleList=_ruleList;
@property(retain, nonatomic) HMDNetworkRouterLANFirewall *type; // @synthesize type=_type;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006c95cf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006c9541
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000006c9278
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000006c8f46
- (id)initWithType:(id)arg1 ruleList:(id)arg2;	// IMP=0x00000000006c8ead
- (id)init;	// IMP=0x00000000006c8e7e
- (void)addRulesFromFirewallConfiguration:(id)arg1;	// IMP=0x000000000064264e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

