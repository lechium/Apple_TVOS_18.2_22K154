//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SiriUISnippetViewController.h"

@class NSString, SAABPersonPicker, SiriUIObjectPickerViewController;

__attribute__((visibility("hidden")))
@interface SiriUIPrivatePeoplePickerViewController : SiriUISnippetViewController
{
    SAABPersonPicker *_picker;	// 8 = 0x8
    SiriUIObjectPickerViewController *_pickerController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000009a65
- (void)pickerViewController:(id)arg1 willDismissPicker:(id)arg2;	// IMP=0x00000000000099c0
- (void)pickerViewController:(id)arg1 didSelectObject:(id)arg2 fromPicker:(id)arg3;	// IMP=0x00000000000098fb
- (void)pickerViewController:(id)arg1 willPresentPicker:(id)arg2;	// IMP=0x0000000000009823
- (id)viewControllerForPickerPresentation:(id)arg1;	// IMP=0x000000000000981a
- (double)desiredHeightForFooterView;	// IMP=0x0000000000009811
- (void)_showPicker:(id)arg1;	// IMP=0x00000000000097d2
- (void)configureReusableFooterView:(id)arg1;	// IMP=0x00000000000097cc
- (id)_pickerController;	// IMP=0x0000000000009752
- (Class)footerViewClass;	// IMP=0x0000000000009741
- (_Bool)usePlatterStyle;	// IMP=0x0000000000009739
- (double)desiredHeightForWidth:(double)arg1;	// IMP=0x00000000000096d7
- (void)loadView;	// IMP=0x0000000000009648
- (id)initWithSnippet:(id)arg1;	// IMP=0x00000000000095af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

