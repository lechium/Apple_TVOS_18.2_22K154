//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFNetAddress;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterFirewallRuleLANMulticast
{
    unsigned short _port;	// 8 = 0x8
    HMFNetAddress *_ipAddress;	// 16 = 0x10
}

+ (id)createWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(_Bool)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(_Bool)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(_Bool)arg7 ruleDictionary:(id)arg8 error:(id *)arg9;	// IMP=0x00600000000b0136
- (void).cxx_destruct;	// IMP=0x00000000000b0123
@property(readonly, nonatomic) unsigned short port; // @synthesize port=_port;
@property(readonly, nonatomic) HMFNetAddress *ipAddress; // @synthesize ipAddress=_ipAddress;
- (id)prettyJSONDictionary;	// IMP=0x00000000000affa2
- (id)attributeDescriptions;	// IMP=0x00000000000afe0a
- (unsigned long long)hash;	// IMP=0x00000000000afdab
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000afc4c
- (id)initWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(_Bool)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(_Bool)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(_Bool)arg7 ipAddress:(id)arg8 port:(unsigned short)arg9;	// IMP=0x00000000000afb7f

@end

