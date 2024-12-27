//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HAPTLVUnsignedNumberValue, HMDNetworkRouterCredential, HMDNetworkRouterLANFirewallConfiguration, HMDNetworkRouterWANFirewallConfiguration, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterClientConfiguration : NSObject
{
    HAPTLVUnsignedNumberValue *_clientIdentifier;	// 8 = 0x8
    HAPTLVUnsignedNumberValue *_lanIdentifier;	// 16 = 0x10
    HMDNetworkRouterCredential *_credential;	// 24 = 0x18
    HMDNetworkRouterWANFirewallConfiguration *_wanFirewallConfiguration;	// 32 = 0x20
    HMDNetworkRouterLANFirewallConfiguration *_lanFirewallConfiguration;	// 40 = 0x28
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000006d7f8d
+ (id)configurationForFirewallConfiguration:(id)arg1 hapAccessory:(_Bool)arg2 airplayAccessory:(_Bool)arg3 withClientIdentifier:(id)arg4;	// IMP=0x00100000006452ef
+ (id)configurationForOpenProtectionWithClientIdentifier:(id)arg1;	// IMP=0x0010000000645239
+ (id)configurationWithClientIdentifier:(id)arg1 lanIdentifier:(long long)arg2;	// IMP=0x0010000000645139
- (void).cxx_destruct;	// IMP=0x00000000006c8e35
@property(retain, nonatomic) HMDNetworkRouterLANFirewallConfiguration *lanFirewallConfiguration; // @synthesize lanFirewallConfiguration=_lanFirewallConfiguration;
@property(retain, nonatomic) HMDNetworkRouterWANFirewallConfiguration *wanFirewallConfiguration; // @synthesize wanFirewallConfiguration=_wanFirewallConfiguration;
@property(retain, nonatomic) HMDNetworkRouterCredential *credential; // @synthesize credential=_credential;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *lanIdentifier; // @synthesize lanIdentifier=_lanIdentifier;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006c8801
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006c86f9
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000006c8184
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000006c7c14
- (id)initWithClientIdentifier:(id)arg1 lanIdentifier:(id)arg2 credential:(id)arg3 wanFirewallConfiguration:(id)arg4 lanFirewallConfiguration:(id)arg5;	// IMP=0x00000000006c7b0d
- (id)init;	// IMP=0x00000000006c7ade
@property(readonly, nonatomic) NSUUID *fingerprint;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

