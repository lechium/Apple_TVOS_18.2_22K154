//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSLayoutConstraint;
@protocol _UITAMICAdaptorViewDelegate;

__attribute__((visibility("hidden")))
@interface _UITAMICAdaptorView : UIView
{
    UIView *_view;	// 160 = 0xa0
    NSLayoutConstraint *_width;	// 168 = 0xa8
    NSLayoutConstraint *_height;	// 176 = 0xb0
    struct CGSize _layoutSize;	// 184 = 0xb8
    _Bool _inLayout;	// 200 = 0xc8
    float _sizingPriority;	// 204 = 0xcc
    id <_UITAMICAdaptorViewDelegate> _delegate;	// 208 = 0xd0
}

+ (_Bool)shouldWrapView:(id)arg1;	// IMP=0x0010000000358deb
- (void).cxx_destruct;	// IMP=0x00000000003596bc
@property(nonatomic) __weak id <_UITAMICAdaptorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float sizingPriority; // @synthesize sizingPriority=_sizingPriority;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (void)layoutSubviews;	// IMP=0x0000000000359580
- (void)_geometryChanged:(const CDStruct_6f49ea1d *)arg1 forAncestor:(id)arg2;	// IMP=0x0000000000359532
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000359503
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x000000000035949d
- (void)_updateTraitsAndLayoutSizeIfNecessary;	// IMP=0x0000000000359431
- (void)updateForAvailableSize;	// IMP=0x00000000003592b7
- (void)didMoveToWindow;	// IMP=0x000000000035924b
- (id)initWithView:(id)arg1;	// IMP=0x0000000000358f11

@end

