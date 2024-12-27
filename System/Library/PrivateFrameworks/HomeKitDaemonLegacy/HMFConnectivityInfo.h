//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFWoBLEInfo, HMFWoWLANInfo, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface HMFConnectivityInfo : HMFObject
{
    NSString *_accessoryIdentifier;	// 8 = 0x8
    HMFWoBLEInfo *_woBLEInfo;	// 16 = 0x10
    NSArray *_woWLANInfos;	// 24 = 0x18
}

+ (id)shortDescription;	// IMP=0x00100000005bd2d0
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000005bd2c8
+ (id)connectivityInfoWithAccessoryIdentifier:(id)arg1 wakeConfiguration:(id)arg2;	// IMP=0x00100000005bcffb
- (void).cxx_destruct;	// IMP=0x00000000005bcfb9
@property(retain, nonatomic) NSArray *woWLANInfos; // @synthesize woWLANInfos=_woWLANInfos;
@property(retain, nonatomic) HMFWoBLEInfo *woBLEInfo; // @synthesize woBLEInfo=_woBLEInfo;
@property(readonly, nonatomic) NSString *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
- (id)description;	// IMP=0x00000000005bcea1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005bcb7c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000005bc9ec
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005bc834
- (unsigned long long)hash;	// IMP=0x00000000005bc77e
@property(readonly, nonatomic) HMFWoWLANInfo *woWLANInfo;
- (id)initWithAccessoryIdentifier:(id)arg1 woBLEInfo:(id)arg2 woWLANInfos:(id)arg3;	// IMP=0x00000000005bc3a4

@end

