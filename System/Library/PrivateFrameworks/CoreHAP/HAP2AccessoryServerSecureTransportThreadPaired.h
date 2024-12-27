//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HAPSecuritySessionEncryption;

__attribute__((visibility("hidden")))
@interface HAP2AccessoryServerSecureTransportThreadPaired
{
    HAPSecuritySessionEncryption *_eventEncryption;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001d3d37
@property(retain, nonatomic) HAPSecuritySessionEncryption *eventEncryption; // @synthesize eventEncryption=_eventEncryption;
- (void)securitySession:(id)arg1 didCloseWithError:(id)arg2;	// IMP=0x00000000001d3c22
- (void)securitySessionDidOpen:(id)arg1;	// IMP=0x00000000001d3b5a
- (id)securitySessionDidRequestAdditionalDerivedKeyTuples:(id)arg1;	// IMP=0x00000000001d3a5c
- (id)decryptData:(id)arg1 type:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000001d381a

@end

