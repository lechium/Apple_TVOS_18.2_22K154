//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol HMDNetworkRouterFirewallRuleManagerClient;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterFirewallRuleManagerClientState : NSObject
{
    id <HMDNetworkRouterFirewallRuleManagerClient> _client;	// 8 = 0x8
    CDUnknownBlockType _startupCompletion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000035b625
@property(copy, nonatomic) CDUnknownBlockType startupCompletion; // @synthesize startupCompletion=_startupCompletion;
@property(nonatomic) __weak id <HMDNetworkRouterFirewallRuleManagerClient> client; // @synthesize client=_client;

@end

