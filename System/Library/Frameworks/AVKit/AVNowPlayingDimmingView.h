//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class AVGradientView;

__attribute__((visibility("hidden")))
@interface AVNowPlayingDimmingView : UIView
{
    _Bool _dimsEntireBounds;	// 8 = 0x8
    _Bool _dimsReducedAmount;	// 9 = 0x9
    UIView *_flatBackdrop;	// 16 = 0x10
    AVGradientView *_gradientBackdrop;	// 24 = 0x18
    AVGradientView *_reducedGradientBackdrop;	// 32 = 0x20
}

+ (id)_gradientViewForTheme:(id)arg1 withBounds:(struct CGRect)arg2 usingReducedHeight:(_Bool)arg3;	// IMP=0x006000000003c4cb
- (void).cxx_destruct;	// IMP=0x000000000003c261
@property(retain, nonatomic) AVGradientView *reducedGradientBackdrop; // @synthesize reducedGradientBackdrop=_reducedGradientBackdrop;
@property(retain, nonatomic) AVGradientView *gradientBackdrop; // @synthesize gradientBackdrop=_gradientBackdrop;
@property(retain, nonatomic) UIView *flatBackdrop; // @synthesize flatBackdrop=_flatBackdrop;
@property(nonatomic) _Bool dimsReducedAmount; // @synthesize dimsReducedAmount=_dimsReducedAmount;
@property(nonatomic) _Bool dimsEntireBounds; // @synthesize dimsEntireBounds=_dimsEntireBounds;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003c051
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000003bffc

@end

