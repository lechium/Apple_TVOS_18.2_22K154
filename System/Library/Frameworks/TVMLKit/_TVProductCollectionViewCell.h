//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface _TVProductCollectionViewCell : UICollectionViewCell
{
    UIView *_titleView;	// 8 = 0x8
    struct UIEdgeInsets _activeMargins;	// 16 = 0x10
    _Bool _marginActive;	// 48 = 0x30
    UIViewController *_viewController;	// 56 = 0x38
    struct UIEdgeInsets _partialMargins;	// 64 = 0x40
    struct UIEdgeInsets _margins;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000013873
@property(nonatomic) struct UIEdgeInsets margins; // @synthesize margins=_margins;
@property(nonatomic) struct UIEdgeInsets partialMargins; // @synthesize partialMargins=_partialMargins;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (id)preferredFocusEnvironments;	// IMP=0x0000000000013724
- (_Bool)canBecomeFocused;	// IMP=0x0000000000013648
- (void)prepareForReuse;	// IMP=0x000000000001352e
- (void)layoutSubviews;	// IMP=0x00000000000131a1
- (void)disableMargins;	// IMP=0x00000000000130b4
- (void)enableWithMargins:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000012ff4
- (_Bool)isShowingTitleView;	// IMP=0x0000000000012fcb
- (void)showTitleView:(_Bool)arg1;	// IMP=0x0000000000012db5
- (void)setTitleView:(id)arg1 margins:(struct UIEdgeInsets)arg2 show:(_Bool)arg3;	// IMP=0x0000000000012ce8
- (id)titleView;	// IMP=0x0000000000012cd3

@end

