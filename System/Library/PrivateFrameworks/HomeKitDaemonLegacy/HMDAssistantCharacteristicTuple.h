//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SAHAAttributeValue;

__attribute__((visibility("hidden")))
@interface HMDAssistantCharacteristicTuple : NSObject
{
    NSString *_attribute;	// 8 = 0x8
    SAHAAttributeValue *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002fb1b8
@property(readonly, nonatomic) SAHAAttributeValue *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *attribute; // @synthesize attribute=_attribute;
- (id)initWithAttribute:(id)arg1 value:(id)arg2;	// IMP=0x00000000002fb10b
- (id)init;	// IMP=0x00000000002fb063

@end

