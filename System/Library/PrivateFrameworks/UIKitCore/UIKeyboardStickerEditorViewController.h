//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class NSString, NSUUID, STKRemoteStickerEffectEditorViewController, UIKBBackdropView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface UIKeyboardStickerEditorViewController : UIViewController
{
    NSUUID *_stickerIdentifier;	// 440 = 0x1b8
    struct CGRect _sourceRect;	// 448 = 0x1c0
    STKRemoteStickerEffectEditorViewController *_editorViewController;	// 480 = 0x1e0
    UIKBBackdropView *_backdropView;	// 488 = 0x1e8
    UIVisualEffectView *_visualEffectView;	// 496 = 0x1f0
    _Bool _shown;	// 504 = 0x1f8
}

- (void).cxx_destruct;	// IMP=0x000000000128ce14
- (void)dismissAnimated:(_Bool)arg1;	// IMP=0x000000000128cb50
- (void)dismiss;	// IMP=0x000000000128cae9
- (void)stickerEffectEditorViewControllerControllerDidTapDone;	// IMP=0x000000000128cad2
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000128ca1f
- (void)configureEditorViewController;	// IMP=0x000000000128c235
- (void)showInKeyboard;	// IMP=0x000000000128b87f
- (void)configureVisualEffectView;	// IMP=0x000000000128b527
- (void)configureBackdropView;	// IMP=0x000000000128b181
- (void)viewDidLoad;	// IMP=0x000000000128b115
- (id)initWithStickerIdentifier:(id)arg1 sourceRect:(struct CGRect)arg2;	// IMP=0x000000000128b082

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

