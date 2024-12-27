//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, TVDigitEntryViewController;

@interface TVSettingsRestrictionsSetPasscodeViewController : UIViewController
{
    TVDigitEntryViewController *_passcodeEntryViewController;	// 8 = 0x8
    NSString *_passcodeToConfirm;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000111cd7
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSString *passcodeToConfirm; // @synthesize passcodeToConfirm=_passcodeToConfirm;
@property(retain, nonatomic) TVDigitEntryViewController *passcodeEntryViewController; // @synthesize passcodeEntryViewController=_passcodeEntryViewController;
- (void)_callCompletionHandlerWithPasscode:(id)arg1;	// IMP=0x0010000000111c09
- (void)_verifyPasscode:(id)arg1;	// IMP=0x0010000000111913
- (void)_promptForConfirmationOfPasscode:(id)arg1;	// IMP=0x001000000011185c
- (void)_userDidCancel;	// IMP=0x0010000000111848
- (void)viewWillLayoutSubviews;	// IMP=0x001000000011175e
- (void)viewDidLoad;	// IMP=0x0010000000111530
- (id)preferredFocusEnvironments;	// IMP=0x00100000001114e0
- (id)initWithTitle:(id)arg1 prompt:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000111342

@end

