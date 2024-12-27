//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIStatusBarForegroundStyleAttributes, UIStatusBarStyleRequest;

__attribute__((visibility("hidden")))
@interface UIStatusBarStyleAttributes : NSObject
{
    UIStatusBarStyleRequest *_request;	// 8 = 0x8
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;	// 16 = 0x10
    _Bool _pulsingAnimationEnabled;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000012581ad
@property(nonatomic, getter=isPulsingAnimationEnabled) _Bool pulsingAnimationEnabled; // @synthesize pulsingAnimationEnabled=_pulsingAnimationEnabled;
- (long long)tapButtonType;	// IMP=0x000000000125818e
- (_Bool)shouldShowInternalItemType:(int)arg1 withScreenCapabilities:(id)arg2;	// IMP=0x0000000001258186
- (double)glowAnimationDuration;	// IMP=0x000000000125817d
- (id)newForegroundStyleWithHeight:(double)arg1;	// IMP=0x0000000001258175
- (id)backgroundImageName;	// IMP=0x000000000125816d
- (id)backgroundColorWithTintColor:(id)arg1;	// IMP=0x0000000001258165
- (_Bool)shouldUseVisualAltitude;	// IMP=0x000000000125815d
- (_Bool)shouldProduceReturnEvent;	// IMP=0x0000000001258155
- (_Bool)isDoubleHeight;	// IMP=0x000000000125814d
- (_Bool)usesVerticalLayout;	// IMP=0x0000000001258109
- (_Bool)isLockScreen;	// IMP=0x0000000001258101
- (_Bool)isTransparent;	// IMP=0x00000000012580f9
- (_Bool)isTranslucent;	// IMP=0x00000000012580f1
- (double)heightForMetrics:(long long)arg1;	// IMP=0x00000000012580e8
- (double)heightForOrientation:(long long)arg1;	// IMP=0x0000000001258025
- (long long)idiom;	// IMP=0x0000000001257fda
- (id)foregroundStyle;	// IMP=0x0000000001257f26
- (_Bool)supportsRasterization;	// IMP=0x0000000001257f0d
- (long long)legibilityStyle;	// IMP=0x0000000001257ef7
- (long long)style;	// IMP=0x0000000001257ee1
@property(nonatomic) double foregroundAlpha; // @dynamic foregroundAlpha;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001257ddb
- (id)init;	// IMP=0x0000000001257dc7
- (id)initWithRequest:(id)arg1;	// IMP=0x0000000001257d54

@end

