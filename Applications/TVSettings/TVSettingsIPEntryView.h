//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSString, UIButton;
@protocol TVSettingsIPEntryViewDelegate;

@interface TVSettingsIPEntryView : UIView
{
    id <TVSettingsIPEntryViewDelegate> _delegate;	// 8 = 0x8
    NSArray *_digitViews;	// 16 = 0x10
    NSArray *_dotViews;	// 24 = 0x18
    NSString *_ipString;	// 32 = 0x20
    UIButton *_doneButton;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000fd8a0
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) NSString *ipString; // @synthesize ipString=_ipString;
@property(retain, nonatomic) NSArray *dotViews; // @synthesize dotViews=_dotViews;
@property(retain, nonatomic) NSArray *digitViews; // @synthesize digitViews=_digitViews;
@property(nonatomic) __weak id <TVSettingsIPEntryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)_octetForBlockIndex:(unsigned long long)arg1;	// IMP=0x00100000000fd787
- (void)_updateDigitLimits;	// IMP=0x00100000000fd60d
- (void)doneButton:(id)arg1;	// IMP=0x00100000000fd5b0
- (void)passcodeDigitView:(id)arg1 didChangeText:(id)arg2;	// IMP=0x00100000000fd4c1
- (void)passcodeDigitViewDidResignFirstResponder:(id)arg1;	// IMP=0x00100000000fd4bb
- (void)passcodeDigitViewDidBecomeFirstResponder:(id)arg1;	// IMP=0x00100000000fd4b5
@property(copy, nonatomic) NSString *IPAddress;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00100000000fd0ec
- (void)layoutSubviews;	// IMP=0x00100000000fcc7a
- (id)preferredFocusEnvironments;	// IMP=0x00100000000fcc59
- (_Bool)canBecomeFocused;	// IMP=0x00100000000fcbd4
- (id)initWithIPAddress:(id)arg1;	// IMP=0x00100000000fc85f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

