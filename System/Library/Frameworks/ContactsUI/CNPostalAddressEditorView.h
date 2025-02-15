//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class CNMutablePostalAddress, CNPostalAddress, CNPostalAddressEditorTableView, NSArray, NSDictionary, NSMutableDictionary, NSString, UIColor;
@protocol CNPresenterDelegate;

__attribute__((visibility("hidden")))
@interface CNPostalAddressEditorView : UIControl
{
    CNMutablePostalAddress *_address;	// 8 = 0x8
    NSDictionary *_valueTextAttributes;	// 16 = 0x10
    id <CNPresenterDelegate> _delegate;	// 24 = 0x18
    CNPostalAddressEditorTableView *_tableView;	// 32 = 0x20
    NSDictionary *_addressFormats;	// 40 = 0x28
    NSArray *_cellsLayout;	// 48 = 0x30
    NSMutableDictionary *_textFields;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000075d21
@property(copy, nonatomic) NSMutableDictionary *textFields; // @synthesize textFields=_textFields;
@property(copy, nonatomic) NSArray *cellsLayout; // @synthesize cellsLayout=_cellsLayout;
@property(copy, nonatomic) NSDictionary *addressFormats; // @synthesize addressFormats=_addressFormats;
@property(retain, nonatomic) CNPostalAddressEditorTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <CNPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_cellsLayoutForCountryCode:(id)arg1;	// IMP=0x00000000000755be
- (id)_normalizeCountryCodeToISO:(id)arg1;	// IMP=0x00000000000754d4
- (id)_countryCode;	// IMP=0x0000000000075454
- (id)_addressPlaceholderForKey:(id)arg1;	// IMP=0x00000000000752ef
- (id)_addressValueForKey:(id)arg1;	// IMP=0x0000000000075184
- (void)_setAddressValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000074fb6
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000000074f26
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x0000000000074d9a
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000074c25
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000744da
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000744c8
- (void)countryPicker:(id)arg1 didPickCountryCode:(id)arg2;	// IMP=0x00000000000743b2
- (void)countryPickerDidCancel:(id)arg1;	// IMP=0x0000000000074347
- (void)layoutMarginsDidChange;	// IMP=0x0000000000074040
- (void)textFieldChanged:(id)arg1;	// IMP=0x0000000000073ddb
- (void)_invalidateCellsLayout;	// IMP=0x0000000000073cae
@property(copy, nonatomic) CNPostalAddress *address;
@property(copy, nonatomic) UIColor *separatorColor;
@property(copy, nonatomic) NSDictionary *ab_textAttributes;
@property(copy, nonatomic) NSString *ab_text;
@property(readonly, nonatomic) long long lineCount;
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000000737ae
- (_Bool)becomeFirstResponder;	// IMP=0x00000000000736e0
- (_Bool)isFirstResponder;	// IMP=0x000000000007357a
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000000734f5
- (void)dealloc;	// IMP=0x0000000000073480
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000730cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

