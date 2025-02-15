//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIDatePicker, UIViewController;

__attribute__((visibility("hidden")))
@interface CNPropertyDateEditingCell
{
    UIDatePicker *_datePicker;	// 8 = 0x8
    UIViewController *_contentViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007edaa
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
- (void)picker:(id)arg1 didPickItem:(id)arg2;	// IMP=0x000000000007ec88
- (void)pickerDidCancel:(id)arg1;	// IMP=0x000000000007ec1d
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x000000000007ec15
- (_Bool)textFieldShouldBeginEditing:(id)arg1;	// IMP=0x000000000007eae0
- (_Bool)_shouldUseYearlessPickerForDateComponents:(id)arg1;	// IMP=0x000000000007e763
- (void)dateChanged:(id)arg1;	// IMP=0x000000000007e4b6
- (void)labelButtonClicked:(id)arg1;	// IMP=0x000000000007e4b0
- (void)localeUpdated:(id)arg1;	// IMP=0x000000000007e3b4
- (void)prepareForReuse;	// IMP=0x000000000007e34d
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000007e1d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

