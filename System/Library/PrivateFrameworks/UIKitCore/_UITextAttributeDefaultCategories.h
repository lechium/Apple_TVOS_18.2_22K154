//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _UITextAttributeDefaults;
@protocol _UITextAttributeDefaults;

__attribute__((visibility("hidden")))
@interface _UITextAttributeDefaultCategories : NSObject
{
    _UITextAttributeDefaults *_generic;	// 8 = 0x8
    _UITextAttributeDefaults *_label;	// 16 = 0x10
    _UITextAttributeDefaults *_textField;	// 24 = 0x18
    _UITextAttributeDefaults *_textView;	// 32 = 0x20
    double _labelFontSize;	// 40 = 0x28
    double _buttonFontSize;	// 48 = 0x30
    double _systemFontSize;	// 56 = 0x38
    double _smallSystemFontSize;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000049ed15
@property(readonly, nonatomic) double _smallSystemFontSize; // @synthesize _smallSystemFontSize;
@property(readonly, nonatomic) double _systemFontSize; // @synthesize _systemFontSize;
@property(readonly, nonatomic) double _buttonFontSize; // @synthesize _buttonFontSize;
@property(readonly, nonatomic) double _labelFontSize; // @synthesize _labelFontSize;
@property(readonly, nonatomic) id <_UITextAttributeDefaults> _textView; // @synthesize _textView;
@property(readonly, nonatomic) id <_UITextAttributeDefaults> _textField; // @synthesize _textField;
@property(readonly, nonatomic) id <_UITextAttributeDefaults> _label; // @synthesize _label;
@property(readonly, nonatomic) id <_UITextAttributeDefaults> _generic; // @synthesize _generic;
@property(readonly, copy) NSString *description;
- (id)_textViewDefaults:(long long)arg1;	// IMP=0x000000000049e85b
- (id)_textFieldDefaults:(long long)arg1;	// IMP=0x000000000049e80f
- (id)_labelDefaults:(long long)arg1;	// IMP=0x000000000049e6f2
- (id)_genericDefaults:(long long)arg1;	// IMP=0x000000000049e569
- (id)initWithUserInterfaceIdiom:(long long)arg1;	// IMP=0x000000000049e34e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

