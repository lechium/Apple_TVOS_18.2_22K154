//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDMediaOutputDevice;

__attribute__((visibility("hidden")))
@interface HMDMediaAccessoryAdvertisement
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _associated;	// 12 = 0xc
    HMDMediaOutputDevice *_outputDevice;	// 16 = 0x10
}

+ (_Bool)canAirPortExpressSupportMediaAccessory:(id)arg1;	// IMP=0x00100000009be037
- (void).cxx_destruct;	// IMP=0x00000000009be024
- (long long)associationOptions;	// IMP=0x00000000009bdf5d
@property(getter=isAssociated) _Bool associated; // @synthesize associated=_associated;
@property(retain) HMDMediaOutputDevice *outputDevice; // @synthesize outputDevice=_outputDevice;
- (id)description;	// IMP=0x00000000009bdd7b
- (_Bool)matchesWACDeviceID:(id)arg1;	// IMP=0x00000000009bdd06
- (id)initWithOutputDevice:(id)arg1;	// IMP=0x00000000009bdb71

@end

