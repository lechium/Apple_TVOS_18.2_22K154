//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

__attribute__((visibility("hidden")))
@interface HMDHAPAccessoryAdvertisement
{
    _Bool _pairingPresent;	// 8 = 0x8
    NSData *_setupHash;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004ee46
@property(retain, nonatomic) NSData *setupHash; // @synthesize setupHash=_setupHash;
@property(readonly, nonatomic) _Bool pairingPresent; // @synthesize pairingPresent=_pairingPresent;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004ecbe
- (unsigned long long)hash;	// IMP=0x000000000004ec32
- (id)description;	// IMP=0x000000000004eb56
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 categoryIdentifier:(id)arg3 pairingPresent:(_Bool)arg4 setupHash:(id)arg5;	// IMP=0x000000000004e995

@end

