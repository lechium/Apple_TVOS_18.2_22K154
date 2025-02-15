//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIViewController, _UISheetPresentationController;
@protocol SRCompactEditableUtterancePresenterDelegate, SiriSharedUIUserUtteranceEditingDataManaging;

@interface SRCompactEditableUtterancePresenter : NSObject
{
    id <SiriSharedUIUserUtteranceEditingDataManaging> _userUtteranceEditingDataManager;	// 8 = 0x8
    UIViewController *_editableUtteranceViewController;	// 16 = 0x10
    id <SRCompactEditableUtterancePresenterDelegate> _delegate;	// 24 = 0x18
    _Bool _shouldStartNewRequest;	// 32 = 0x20
    _Bool _editableUtteranceViewControllerIsPresented;	// 33 = 0x21
    _Bool _previousShouldScaleDownBehindDescendantSheetsValue;	// 34 = 0x22
    _UISheetPresentationController *_sheetPresentationController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000004be25
- (void)_editableUtteranceViewControllerDidDismiss:(id)arg1;	// IMP=0x001000000004bdb9
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x001000000004bda3
- (void)presentationControllerWillDismiss:(id)arg1;	// IMP=0x001000000004bd3a
- (void)_editableUtteranceViewControllerWillBePresentedWithSheetPresentationController:(id)arg1;	// IMP=0x001000000004bca5
- (void)presentViewController:(id)arg1 fromViewController:(id)arg2 animateAlongsideTransition:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000004baa3
- (void)editableUtteranceViewController:(id)arg1 openURL:(id)arg2;	// IMP=0x001000000004ba47
- (void)editableUtteranceViewController:(id)arg1 didFinishEditingWithText:(id)arg2;	// IMP=0x001000000004b97a
- (void)editableUtteranceViewController:(id)arg1 alternativeSelectedAtIndex:(long long)arg2;	// IMP=0x001000000004b882
- (void)willBeginEditingFromUtteranceViewController:(id)arg1;	// IMP=0x001000000004b84c
- (void)editableUtteranceViewController:(id)arg1 requestsKeyboardWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004b7f0
- (void)didResignFirstResponderFromUtteranceViewController:(id)arg1;	// IMP=0x001000000004b7ba
- (long long)numberOfAlternativeUtterances;	// IMP=0x001000000004b7a4
- (id)attributedStringAtIndex:(long long)arg1;	// IMP=0x001000000004b78e
- (_Bool)hasContentAtPoint:(struct CGPoint)arg1;	// IMP=0x001000000004b776
- (void)dismissEditableUtteranceViewControllerAndShouldStartNewRequest:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004b57f
- (void)presentUtteranceViewControllerFromViewController:(id)arg1 animateAlongsideTransition:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004b48f
- (id)initWithUserEditingDataManager:(id)arg1 delegate:(id)arg2;	// IMP=0x001000000004b39d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

