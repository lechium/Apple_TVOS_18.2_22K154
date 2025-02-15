//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITableViewCellLayoutManager.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableViewCellLayoutManagerEditable1 : UITableViewCellLayoutManager
{
}

- (void)_textValueChanged:(id)arg1;	// IMP=0x00000000012bd2d7
- (void)_textFieldEndEditingOnReturn:(id)arg1;	// IMP=0x00000000012bd2d1
- (void)_textFieldEndEditing:(id)arg1;	// IMP=0x00000000012bd24c
- (void)_textFieldStartEditing:(id)arg1;	// IMP=0x00000000012bd1c0
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000000012bd1b8
- (_Bool)textFieldShouldBeginEditing:(id)arg1;	// IMP=0x00000000012bd1b0
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x00000000012bd0b0
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x00000000012bd0aa
- (struct CGSize)intrinsicContentSizeForCell:(id)arg1 rowWidth:(double)arg2;	// IMP=0x00000000012bcfcf
- (id)editableTextFieldForCell:(id)arg1;	// IMP=0x00000000012bce8e
- (id)detailTextLabelForCell:(id)arg1;	// IMP=0x00000000012bce86
- (void)layoutSubviewsOfCell:(id)arg1;	// IMP=0x00000000012bc356
- (double)defaultTextFieldFontSizeForCell:(id)arg1;	// IMP=0x00000000012bc327

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

