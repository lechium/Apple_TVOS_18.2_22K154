//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewPropertyAnimator.h>

@class UICubicTimingParameters, UISpringTimingParameters;

__attribute__((visibility("hidden")))
@interface SLDisambiguationCollectionViewAnimator : UIViewPropertyAnimator
{
}

+ (id)springAnimation;	// IMP=0x001000000001af19
+ (id)init;	// IMP=0x001000000001adac
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001af13
@property(readonly, nonatomic) UISpringTimingParameters *springTimingParameters;
@property(readonly, nonatomic) UICubicTimingParameters *cubicTimingParameters;
@property(readonly, nonatomic) long long timingCurveType;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001ae19
- (id)commonInit;	// IMP=0x000000000001adeb

@end

