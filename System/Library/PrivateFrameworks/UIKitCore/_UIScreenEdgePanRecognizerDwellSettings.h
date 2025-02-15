//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UISettings.h"

__attribute__((visibility("hidden")))
@interface _UIScreenEdgePanRecognizerDwellSettings : _UISettings
{
    double _longPressTipPermittedHorizontalMovement;	// 8 = 0x8
    double _longPressTipPermittedVerticalMovement;	// 16 = 0x10
    double _longPressPermittedHorizontalMovement;	// 24 = 0x18
    double _longPressPermittedVerticalMovement;	// 32 = 0x20
    double _longPressRequiredDuration;	// 40 = 0x28
}

+ (id)settingsControllerModule;	// IMP=0x0060000000acb85f
@property(nonatomic) double longPressRequiredDuration; // @synthesize longPressRequiredDuration=_longPressRequiredDuration;
@property(nonatomic) double longPressPermittedVerticalMovement; // @synthesize longPressPermittedVerticalMovement=_longPressPermittedVerticalMovement;
@property(nonatomic) double longPressPermittedHorizontalMovement; // @synthesize longPressPermittedHorizontalMovement=_longPressPermittedHorizontalMovement;
@property(nonatomic) double longPressTipPermittedVerticalMovement; // @synthesize longPressTipPermittedVerticalMovement=_longPressTipPermittedVerticalMovement;
@property(nonatomic) double longPressTipPermittedHorizontalMovement; // @synthesize longPressTipPermittedHorizontalMovement=_longPressTipPermittedHorizontalMovement;
- (void)setDefaultValues;	// IMP=0x0000000000acb7ba

@end

