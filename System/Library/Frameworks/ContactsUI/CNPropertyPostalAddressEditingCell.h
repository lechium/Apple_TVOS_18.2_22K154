//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNPostalAddressEditorView, UIColor;

__attribute__((visibility("hidden")))
@interface CNPropertyPostalAddressEditingCell
{
    CNPostalAddressEditorView *_addressEditor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000975fb
@property(retain, nonatomic) CNPostalAddressEditorView *addressEditor; // @synthesize addressEditor=_addressEditor;
- (void)layoutMarginsDidChange;	// IMP=0x0000000000097572
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000000974e2
@property(copy, nonatomic) UIColor *editorSeparatorColor;
- (void)layoutChanged:(id)arg1;	// IMP=0x0000000000097379
- (void)valueChanged:(id)arg1;	// IMP=0x0000000000097267
- (void)updateWithPropertyItem:(id)arg1;	// IMP=0x00000000000970e2
- (void)setPresentingDelegate:(id)arg1;	// IMP=0x000000000009704e
- (id)valueView;	// IMP=0x0000000000096e3c
- (id)firstResponderItem;	// IMP=0x0000000000096e2a
- (id)constantConstraints;	// IMP=0x0000000000096c7f
- (double)rightContentMargin;	// IMP=0x0000000000096c76
- (double)leftValueMargin;	// IMP=0x0000000000096c6d

@end

