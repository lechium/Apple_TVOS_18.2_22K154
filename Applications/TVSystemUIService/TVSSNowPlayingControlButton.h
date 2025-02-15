//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class BSUICAPackageView, NSArray, NSString, UIImageView, _UIFloatingContentView;

@interface TVSSNowPlayingControlButton : UIControl
{
    BSUICAPackageView *_caPackageView;	// 8 = 0x8
    NSString *_symbolImageName;	// 16 = 0x10
    UIImageView *_symbolImageView;	// 24 = 0x18
    _UIFloatingContentView *_floatingContentView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000b650
@property(retain, nonatomic) _UIFloatingContentView *floatingContentView; // @synthesize floatingContentView=_floatingContentView;
@property(retain, nonatomic) UIImageView *symbolImageView; // @synthesize symbolImageView=_symbolImageView;
@property(readonly, nonatomic) NSString *symbolImageName; // @synthesize symbolImageName=_symbolImageName;
@property(readonly, nonatomic) BSUICAPackageView *caPackageView; // @synthesize caPackageView=_caPackageView;
- (unsigned long long)_computedControlState;	// IMP=0x001000000000b4c0
- (void)_configureAppearanceForControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x001000000000ac50
- (void)_configure;	// IMP=0x0010000000009e20
- (void)_updateForUserInterfaceStyleChange;	// IMP=0x0010000000009da0
- (_Bool)_canHandlePresses:(id)arg1;	// IMP=0x0010000000009cb0
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0010000000009b20
- (_Bool)canBecomeFocused;	// IMP=0x0010000000009b00
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000009a20
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000009950
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000009880
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00100000000097f0
@property(readonly, nonatomic) NSArray *tintableViews;
@property(readonly, nonatomic) NSArray *tintableLayers;
- (void)addSymbolEffect:(id)arg1;	// IMP=0x00100000000096b0
- (void)layoutSubviews;	// IMP=0x00100000000095a0
- (id)initWithSymbolImageName:(id)arg1 frame:(struct CGRect)arg2;	// IMP=0x0010000000009390
- (id)initWithCAPackageView:(id)arg1 frame:(struct CGRect)arg2;	// IMP=0x0010000000009270
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000091f0

@end

