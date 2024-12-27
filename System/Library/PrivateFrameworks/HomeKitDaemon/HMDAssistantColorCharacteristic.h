//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDAssistantColorCharacteristic : HMFObject
{
    _Bool _mandatory;	// 8 = 0x8
    NSString *_readCharacteristicType;	// 16 = 0x10
    NSString *_writeCharacteristicType;	// 24 = 0x18
    NSString *_format;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000032173e
@property(readonly, nonatomic) _Bool mandatory; // @synthesize mandatory=_mandatory;
@property(readonly, nonatomic) NSString *format; // @synthesize format=_format;
@property(readonly, nonatomic) NSString *writeCharacteristicType; // @synthesize writeCharacteristicType=_writeCharacteristicType;
@property(readonly, nonatomic) NSString *readCharacteristicType; // @synthesize readCharacteristicType=_readCharacteristicType;
- (id)initWithReadCharacteristicType:(id)arg1 writeCharacteristicType:(id)arg2 format:(id)arg3 mandatory:(_Bool)arg4;	// IMP=0x0000000000321620

@end

