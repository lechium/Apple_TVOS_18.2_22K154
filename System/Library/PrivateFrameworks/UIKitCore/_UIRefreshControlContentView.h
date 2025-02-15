//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSAttributedString, UIColor, UIRefreshControl;

__attribute__((visibility("hidden")))
@interface _UIRefreshControlContentView : UIView
{
    UIRefreshControl *_refreshControl;	// 160 = 0xa0
    UIColor *_tintColor;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x0000000000882e70
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
- (void)_removeAllAnimations;	// IMP=0x0000000000882e23
- (double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;	// IMP=0x0000000000882e1a
- (void)didTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x0000000000882e14
- (void)willTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x0000000000882dcd
- (void)refreshControlInvalidatedSnappingHeight;	// IMP=0x0000000000882dc7
@property(readonly, nonatomic) double maximumSnappingHeight;
@property(readonly, nonatomic) double minimumSnappingHeight;
@property(readonly, nonatomic) long long style;
@property(retain, nonatomic) NSAttributedString *attributedTitle;

@end

