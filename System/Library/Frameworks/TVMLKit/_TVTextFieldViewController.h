//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class IKTextFieldElement, NSString, UITextField;

__attribute__((visibility("hidden")))
@interface _TVTextFieldViewController : UIViewController
{
    IKTextFieldElement *_viewElement;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000190abb
@property(readonly, retain, nonatomic) IKTextFieldElement *viewElement; // @synthesize viewElement=_viewElement;
- (void)_updateKeyboardWithUserText;	// IMP=0x00000000001909d5
- (void)_updateUserText;	// IMP=0x00000000001908fc
- (void)_updateViewLayout;	// IMP=0x0000000000190692
- (void)searchBarDidChangeText:(id)arg1;	// IMP=0x0000000000190637
- (void)loadView;	// IMP=0x00000000001905a0
- (void)textDidChangeForKeyboard:(id)arg1;	// IMP=0x0000000000190569
@property(readonly, retain, nonatomic) UITextField *textField;
- (void)updateWithViewElement:(id)arg1;	// IMP=0x0000000000190450
- (void)dealloc;	// IMP=0x00000000001903fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

