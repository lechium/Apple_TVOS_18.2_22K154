//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class BFFPaneHeaderView, UILabel;

__attribute__((visibility("hidden")))
@interface AAUIPaneHeaderView_tvOS : UIView
{
    BFFPaneHeaderView *_header;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000051418
- (void)makeAllTheTextFits;	// IMP=0x00000000000511db
- (double)innerHeaderMaxY;	// IMP=0x0000000000050fd1
@property(readonly, nonatomic) UIView *_header;
- (void)layoutSubviews;	// IMP=0x0000000000050ef2
- (void)setLayoutMargins:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000050ed5
- (void)setTitleText:(id)arg1;	// IMP=0x0000000000050eb8
@property(readonly, nonatomic) UILabel *textLabel;
@property(readonly, nonatomic) UILabel *subLabel;
@property(readonly, nonatomic) UILabel *detailTextLabel;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000050d16

@end

