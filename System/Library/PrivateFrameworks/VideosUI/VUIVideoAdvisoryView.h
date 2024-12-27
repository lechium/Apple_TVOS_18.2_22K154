//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray, VUIAdditionalAdvisoryInfoView, VUIImageView, VUIVideoAdvisoryViewLayout;

__attribute__((visibility("hidden")))
@interface VUIVideoAdvisoryView : UIView
{
    _Bool _reduceMotion;	// 8 = 0x8
    VUIVideoAdvisoryViewLayout *_layout;	// 16 = 0x10
    VUIAdditionalAdvisoryInfoView *_photoSensitivityView;	// 24 = 0x18
    VUIImageView *_logoImageView;	// 32 = 0x20
    UIView *_dividerView;	// 40 = 0x28
    NSArray *_legendViews;	// 48 = 0x30
    NSArray *_additionalViewsInfo;	// 56 = 0x38
    NSMutableArray *_additionalViews;	// 64 = 0x40
    double _legendAnimationDistance;	// 72 = 0x48
    double _legendYAnimationDistance;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000001cffe1
@property(nonatomic) _Bool reduceMotion; // @synthesize reduceMotion=_reduceMotion;
@property(nonatomic) double legendYAnimationDistance; // @synthesize legendYAnimationDistance=_legendYAnimationDistance;
@property(nonatomic) double legendAnimationDistance; // @synthesize legendAnimationDistance=_legendAnimationDistance;
@property(retain, nonatomic) NSMutableArray *additionalViews; // @synthesize additionalViews=_additionalViews;
@property(retain, nonatomic) NSArray *additionalViewsInfo; // @synthesize additionalViewsInfo=_additionalViewsInfo;
@property(copy, nonatomic) NSArray *legendViews; // @synthesize legendViews=_legendViews;
@property(retain, nonatomic) UIView *dividerView; // @synthesize dividerView=_dividerView;
@property(retain, nonatomic) VUIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) VUIAdditionalAdvisoryInfoView *photoSensitivityView; // @synthesize photoSensitivityView=_photoSensitivityView;
@property(retain, nonatomic) VUIVideoAdvisoryViewLayout *layout; // @synthesize layout=_layout;
- (void)_configureSubviewsWithDictionary:(id)arg1;	// IMP=0x00000000001cfa23
- (struct UIEdgeInsets)_dividerMargin;	// IMP=0x00000000001cf9c7
- (struct UIEdgeInsets)_legendsMargin;	// IMP=0x00000000001cf96b
- (struct UIEdgeInsets)_logoMargin;	// IMP=0x00000000001cf90f
- (struct CGSize)_dividerSize;	// IMP=0x00000000001cf893
- (struct CGSize)_legendSize;	// IMP=0x00000000001cf839
- (struct CGSize)_logoSize;	// IMP=0x00000000001cf7df
- (struct UIEdgeInsets)_margin;	// IMP=0x00000000001cf783
- (_Bool)_isPortrait;	// IMP=0x00000000001cf77b
- (void)removeAllViews;	// IMP=0x00000000001cf62e
- (void)layoutSubviews;	// IMP=0x00000000001ceadd
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001ce64d
- (id)initWithAdvisoryInfoDictionary:(id)arg1 reduceMotion:(_Bool)arg2;	// IMP=0x00000000001ce542
- (void)_hideWithCoreAnimationWithPlatterView:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001d1c0d
- (void)_showAdditionalViewAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2 platterView:(id)arg3 superview:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000001d1340
- (void)hideAnimated:(_Bool)arg1 platterView:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d1014
- (void)_showWithCoreAnimationWithPlatterView:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001d0423
- (void)showAnimated:(_Bool)arg1 platterView:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d0067

@end

