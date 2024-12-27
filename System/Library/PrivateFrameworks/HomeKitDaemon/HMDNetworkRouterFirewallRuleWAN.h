//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDNetworkRouterFirewallRuleWANSubject, NSArray;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterFirewallRuleWAN
{
    unsigned char _transportProtocol;	// 8 = 0x8
    unsigned short _portStart;	// 10 = 0xa
    unsigned short _portEnd;	// 12 = 0xc
    unsigned long long _purpose;	// 16 = 0x10
    HMDNetworkRouterFirewallRuleWANSubject *_subject;	// 24 = 0x18
    NSArray *_icmpTypes;	// 32 = 0x20
}

+ (id)createWithJSONDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0040000000b59605
+ (_Bool)__decodePorts:(id)arg1 portStart:(unsigned short *)arg2 portEnd:(unsigned short *)arg3;	// IMP=0x0040000000b5940e
+ (_Bool)__decodeSubject:(id)arg1 subject:(id *)arg2;	// IMP=0x0040000000b58efa
+ (_Bool)__decodeAddressRange:(id)arg1 endValue:(id)arg2 subject:(id *)arg3;	// IMP=0x0040000000b58cc3
+ (id)__nonWildcardAddressFrom:(id)arg1 key:(id)arg2;	// IMP=0x0040000000b5887b
+ (_Bool)__decodeAddresses:(id)arg1 subject:(id *)arg2;	// IMP=0x0040000000b57f26
+ (_Bool)__decodeAddress:(id)arg1 subject:(id *)arg2;	// IMP=0x0040000000b57e72
+ (_Bool)__decodeHostnames:(id)arg1 subject:(id *)arg2;	// IMP=0x0040000000b56cf3
+ (_Bool)__decodeType:(id)arg1 transportProtocol:(unsigned char *)arg2 error:(id *)arg3;	// IMP=0x0040000000b56af4
+ (_Bool)__decodeFlags:(id)arg1 critical:(_Bool *)arg2;	// IMP=0x0040000000b56a84
+ (_Bool)__decodePurpose:(id)arg1 purpose:(unsigned long long *)arg2;	// IMP=0x0040000000b56a10
+ (id)ipAddressAny;	// IMP=0x0040000000b569e0
+ (id)ipAddressAnyIPv6;	// IMP=0x0040000000b569b0
+ (id)ipAddressAnyIPv4;	// IMP=0x0040000000b56980
- (void).cxx_destruct;	// IMP=0x0000000000b5693a
@property(readonly, nonatomic) NSArray *icmpTypes; // @synthesize icmpTypes=_icmpTypes;
@property(readonly, nonatomic) unsigned short portEnd; // @synthesize portEnd=_portEnd;
@property(readonly, nonatomic) unsigned short portStart; // @synthesize portStart=_portStart;
@property(readonly, nonatomic) HMDNetworkRouterFirewallRuleWANSubject *subject; // @synthesize subject=_subject;
@property(readonly, nonatomic) unsigned char transportProtocol; // @synthesize transportProtocol=_transportProtocol;
@property(readonly, nonatomic) unsigned long long purpose; // @synthesize purpose=_purpose;
- (id)prettyJSONDictionary;	// IMP=0x0000000000b563b6
- (id)attributeDescriptions;	// IMP=0x0000000000b56049
- (unsigned long long)hash;	// IMP=0x0000000000b55f68
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b55d02
- (id)initWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(_Bool)arg3 purpose:(unsigned long long)arg4 transportProtocol:(unsigned char)arg5 subject:(id)arg6 portStart:(unsigned short)arg7 portEnd:(unsigned short)arg8 icmpTypes:(id)arg9;	// IMP=0x0000000000b55bfb

@end

