//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, TVSMAirPodsModuleCAPackageView, UILabel, UIView, _UIFloatingContentView;

@interface TVSMAirPodsModuleCollectionViewCell : UICollectionViewCell
{
    _Bool _isFocused;	// 8 = 0x8
    _Bool _displayAsSelected;	// 9 = 0x9
    _Bool _disabled;	// 10 = 0xa
    NSString *_title;	// 16 = 0x10
    NSString *_packageName;	// 24 = 0x18
    _UIFloatingContentView *_floatingContentView;	// 32 = 0x20
    UIView *_backgroundColorView;	// 40 = 0x28
    UILabel *_titleLabel;	// 48 = 0x30
    UILabel *_statusLabel;	// 56 = 0x38
    TVSMAirPodsModuleCAPackageView *_focusedPackageView;	// 64 = 0x40
    TVSMAirPodsModuleCAPackageView *_normalPackageView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000004f70
@property(retain, nonatomic) TVSMAirPodsModuleCAPackageView *normalPackageView; // @synthesize normalPackageView=_normalPackageView;
@property(retain, nonatomic) TVSMAirPodsModuleCAPackageView *focusedPackageView; // @synthesize focusedPackageView=_focusedPackageView;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *backgroundColorView; // @synthesize backgroundColorView=_backgroundColorView;
@property(retain, nonatomic) _UIFloatingContentView *floatingContentView; // @synthesize floatingContentView=_floatingContentView;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) _Bool displayAsSelected; // @synthesize displayAsSelected=_displayAsSelected;
@property(retain, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (unsigned long long)_controlStateForCell;	// IMP=0x0000000000004c80
- (void)_updatePackageRasterizationScale;	// IMP=0x0000000000004bb0
- (void)_updatePackageViewVisibility;	// IMP=0x00000000000049e0
- (void)_configureAppearanceForControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000043d0
- (void)_setupPackageViews;	// IMP=0x0000000000003b70
- (void)_setupConstraints;	// IMP=0x00000000000030f0
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000002fe0
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000002f60
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000002530

@end

