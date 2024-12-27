//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

__attribute__((visibility("hidden")))
@interface _UIHDRSettings : PTSettings
{
    _Bool _asymmetricAnimationDurations;	// 8 = 0x8
    double _animationDurationUp;	// 16 = 0x10
    double _animationDurationDown;	// 24 = 0x18
}

+ (id)settingsControllerModule;	// IMP=0x0060000000ac5817
@property(nonatomic) _Bool asymmetricAnimationDurations; // @synthesize asymmetricAnimationDurations=_asymmetricAnimationDurations;
@property(nonatomic) double animationDurationDown; // @synthesize animationDurationDown=_animationDurationDown;
@property(nonatomic) double animationDurationUp; // @synthesize animationDurationUp=_animationDurationUp;
- (void)setDefaultValues;	// IMP=0x0000000000ac57a2

@end

