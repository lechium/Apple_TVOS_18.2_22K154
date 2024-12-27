//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDCompositeSettingIntegerConstraint : NSObject
{
    long long _min;	// 8 = 0x8
    long long _max;	// 16 = 0x10
    long long _step;	// 24 = 0x18
}

@property(readonly) long long step; // @synthesize step=_step;
@property(readonly) long long max; // @synthesize max=_max;
@property(readonly) long long min; // @synthesize min=_min;
- (_Bool)isValidValue:(id)arg1 error:(id *)arg2;	// IMP=0x00000000006b6f91
- (id)initWithMaxValue:(long long)arg1 minValue:(long long)arg2 stepValue:(long long)arg3;	// IMP=0x00000000006b6f3e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

