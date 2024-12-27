//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HAPCharacteristic, NSString;

__attribute__((visibility("hidden")))
@interface HAPCharacteristicTuple : HMFObject
{
    HAPCharacteristic *_hapCharacteristic;	// 8 = 0x8
    NSString *_serverIdentifier;	// 16 = 0x10
    long long _linkType;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000005928ee
@property long long linkType; // @synthesize linkType=_linkType;
@property(retain, nonatomic) NSString *serverIdentifier; // @synthesize serverIdentifier=_serverIdentifier;
@property(retain, nonatomic) HAPCharacteristic *hapCharacteristic; // @synthesize hapCharacteristic=_hapCharacteristic;
- (id)initWithHAPCharacteristic:(id)arg1 serverIdentifier:(id)arg2 linkType:(long long)arg3;	// IMP=0x00000000005927cd

@end

