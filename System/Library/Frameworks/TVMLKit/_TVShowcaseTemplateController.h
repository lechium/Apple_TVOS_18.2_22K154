//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_TVBgImageLoadingViewController.h"

@class IKAudioElement, IKImageElement, IKViewElement, NSArray, NSString, UIImage, UIView, UIViewController, _TVFocusCaptureView, _TVOneupTemplateController, _TVShowcaseViewController;

__attribute__((visibility("hidden")))
@interface _TVShowcaseTemplateController : _TVBgImageLoadingViewController
{
    IKViewElement *_templateElement;	// 8 = 0x8
    UIView *_overlayView;	// 16 = 0x10
    _TVFocusCaptureView *_disabledTemplateFocusCaptureView;	// 24 = 0x18
    _TVShowcaseViewController *_showcaseViewController;	// 32 = 0x20
    _TVOneupTemplateController *_oneupViewController;	// 40 = 0x28
    UIViewController *_activeViewController;	// 48 = 0x30
    IKImageElement *_bgImageElement;	// 56 = 0x38
    UIImage *_bgImage;	// 64 = 0x40
    IKAudioElement *_audioElement;	// 72 = 0x48
    NSArray *_lockupElements;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000170e04
@property(copy, nonatomic) NSArray *lockupElements; // @synthesize lockupElements=_lockupElements;
@property(retain, nonatomic) IKAudioElement *audioElement; // @synthesize audioElement=_audioElement;
@property(retain, nonatomic) UIImage *bgImage; // @synthesize bgImage=_bgImage;
@property(nonatomic) __weak IKImageElement *bgImageElement; // @synthesize bgImageElement=_bgImageElement;
@property(nonatomic) __weak UIViewController *activeViewController; // @synthesize activeViewController=_activeViewController;
@property(nonatomic) __weak _TVOneupTemplateController *oneupViewController; // @synthesize oneupViewController=_oneupViewController;
@property(nonatomic) __weak _TVShowcaseViewController *showcaseViewController; // @synthesize showcaseViewController=_showcaseViewController;
- (void)_updateWithShowcaseElement:(id)arg1 update:(_Bool)arg2;	// IMP=0x000000000017013c
- (void)_updateDisabledFocusView;	// IMP=0x0000000000170008
- (void)_transitionControllersWithMenuAction:(_Bool)arg1;	// IMP=0x000000000016fc1f
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000016fb2c
- (void)_menuAction:(id)arg1;	// IMP=0x000000000016fa93
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;	// IMP=0x000000000016f9f0
- (id)_backgroundImageProxy;	// IMP=0x000000000016f8ca
- (struct CGSize)_backgroundImageProxySize;	// IMP=0x000000000016f821
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000016f719
- (void)loadView;	// IMP=0x000000000016f2fa
- (id)preferredFocusEnvironments;	// IMP=0x000000000016f1c7
- (void)updateWithViewElement:(id)arg1;	// IMP=0x000000000016f154
- (void)updateWithShowcaseElement:(id)arg1;	// IMP=0x000000000016f142
- (id)initWithShowcaseElement:(id)arg1;	// IMP=0x000000000016edad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

