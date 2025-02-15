//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_TVBgImageLoadingViewController.h"

@class IKImageElement, IKTextFieldElement, IKViewElement, NSString, UIImageView, _TVTextEntryController;

__attribute__((visibility("hidden")))
@interface _TVFormTemplateController : _TVBgImageLoadingViewController
{
    _TVTextEntryController *_textEntryController;	// 8 = 0x8
    IKViewElement *_templateElement;	// 16 = 0x10
    IKViewElement *_bannerElement;	// 24 = 0x18
    IKTextFieldElement *_textFieldElement;	// 32 = 0x20
    IKViewElement *_footerElement;	// 40 = 0x28
    IKImageElement *_bgImageElement;	// 48 = 0x30
    IKImageElement *_bgHeroImageElement;	// 56 = 0x38
    UIImageView *_backgroundImageView;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000005022e
- (void)_updateKeyboardText;	// IMP=0x0000000000050101
- (void)_updateTextFieldText;	// IMP=0x000000000004ff59
- (void)_updateViewIgnoringSparseUpdates:(_Bool)arg1;	// IMP=0x000000000004fb38
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;	// IMP=0x000000000004f98d
- (long long)_blurEffectStyle;	// IMP=0x000000000004f952
- (_Bool)_backgroundImageRequiresBlur;	// IMP=0x000000000004f92b
- (id)_backgroundImageProxy;	// IMP=0x000000000004f80e
- (struct CGSize)_backgroundImageProxySize;	// IMP=0x000000000004f7aa
- (void)_textFieldEndEditing;	// IMP=0x000000000004f7a4
- (void)_textFieldEditingChanged;	// IMP=0x000000000004f749
- (void)_textFieldBeginEditing;	// IMP=0x000000000004f743
- (void)textEntryControllerDidFinish:(id)arg1;	// IMP=0x000000000004f706
- (void)textDidChangeForKeyboard:(id)arg1;	// IMP=0x000000000004f6cf
- (id)preferredFocusEnvironments;	// IMP=0x000000000004f6b2
- (void)loadView;	// IMP=0x000000000004f1b1
- (void)viewDidLayoutSubviews;	// IMP=0x000000000004f094
- (void)updateWithViewElement:(id)arg1;	// IMP=0x000000000004eb3e
- (void)dealloc;	// IMP=0x000000000004eaec
@property(readonly, nonatomic) UIImageView *backgroundImageView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

