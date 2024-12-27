//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableDictionary, NSNumber, NSString, UIImage, _UIBarButtonItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface _UINavigationBarAppearanceStorage
{
    NSDictionary *textAttributes;	// 16 = 0x10
    NSMutableDictionary *titleVerticalAdjustmentsForBarMetrics;	// 24 = 0x18
    UIImage *shadowImage;	// 32 = 0x20
    _Bool hidesShadow;	// 40 = 0x28
    long long barMetrics;	// 48 = 0x30
    UIImage *backIndicatorImage;	// 56 = 0x38
    UIImage *backIndicatorTransitionMaskImage;	// 64 = 0x40
    NSNumber *backIndicatorLeftMargin;	// 72 = 0x48
    _Bool reversesShadowOffset;	// 80 = 0x50
    _UIBarButtonItemAppearanceStorage *buttonAppearanceStorage;	// 88 = 0x58
    _Bool _deferShadowToSearchBar;	// 96 = 0x60
    long long defaultBarMetrics;	// 104 = 0x68
    long long activeBarMetrics;	// 112 = 0x70
    NSString *_backdropViewGroupName;	// 120 = 0x78
}

+ (long long)typicalBarPosition;	// IMP=0x0060000000378096
- (void).cxx_destruct;	// IMP=0x0000000000378540
@property(retain, nonatomic) NSString *backdropViewGroupName; // @synthesize backdropViewGroupName=_backdropViewGroupName;
@property(nonatomic) _Bool deferShadowToSearchBar; // @synthesize deferShadowToSearchBar=_deferShadowToSearchBar;
@property(retain, nonatomic) NSNumber *backIndicatorLeftMargin; // @synthesize backIndicatorLeftMargin;
@property(retain, nonatomic) UIImage *backIndicatorTransitionMaskImage; // @synthesize backIndicatorTransitionMaskImage;
@property(retain, nonatomic) UIImage *backIndicatorImage; // @synthesize backIndicatorImage;
@property(nonatomic) long long activeBarMetrics; // @synthesize activeBarMetrics;
@property(nonatomic) long long defaultBarMetrics; // @synthesize defaultBarMetrics;
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage;
@property(nonatomic) _Bool reversesShadowOffset; // @synthesize reversesShadowOffset;
@property(copy, nonatomic) NSDictionary *textAttributes; // @synthesize textAttributes;
@property(nonatomic) _Bool hidesShadow; // @synthesize hidesShadow;
- (id)representativeImageForIdiom:(long long)arg1;	// IMP=0x000000000037834c
@property(readonly, nonatomic) _UIBarButtonItemAppearanceStorage *barButtonAppearanceStorage;
@property(readonly, nonatomic) _UIBarButtonItemAppearanceStorage *_barButtonAppearanceStorage;
- (double)titleVerticalAdjustmentForBarMetrics:(long long)arg1;	// IMP=0x0000000000378211
- (void)setTitleVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000378102
@property(readonly, nonatomic) UIImage *miniPromptBackgroundImage;
@property(readonly, nonatomic) UIImage *promptBackgroundImage;
@property(readonly, nonatomic) UIImage *miniBackgroundImage;
@property(readonly, nonatomic) UIImage *backgroundImage;

@end

