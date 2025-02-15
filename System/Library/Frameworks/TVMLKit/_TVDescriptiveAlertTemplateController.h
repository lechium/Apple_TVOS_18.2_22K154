//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_TVBgImageLoadingViewController.h"

@class IKImageElement, IKViewElement, NSArray, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface _TVDescriptiveAlertTemplateController : _TVBgImageLoadingViewController
{
    IKViewElement *_templateElement;	// 8 = 0x8
    NSArray *_templateSubviews;	// 16 = 0x10
    NSArray *_templateSubcontrollers;	// 24 = 0x18
    UIView *_preferredFocusView;	// 32 = 0x20
    UIColor *_backgroundColor;	// 40 = 0x28
    IKImageElement *_bgImageElement;	// 48 = 0x30
    IKImageElement *_bgHeroImageElement;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000c7fa2
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;	// IMP=0x00000000000c7f39
- (long long)_blurEffectStyle;	// IMP=0x00000000000c7efe
- (_Bool)_backgroundImageRequiresBlur;	// IMP=0x00000000000c7ed7
- (id)_backgroundImageProxy;	// IMP=0x00000000000c7dba
- (struct CGSize)_backgroundImageProxySize;	// IMP=0x00000000000c7d56
- (void)_normalizeButtonsInViews:(id)arg1;	// IMP=0x00000000000c78f3
- (void)loadView;	// IMP=0x00000000000c758f
- (void)updateWithViewElement:(id)arg1;	// IMP=0x00000000000c61c1

@end

