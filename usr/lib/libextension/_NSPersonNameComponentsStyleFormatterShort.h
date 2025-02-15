//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _NSPersonNameComponentsStyleFormatter, _NSPersonNameComponentsStyleFormatterShortVariantGeneral;

__attribute__((visibility("hidden")))
@interface _NSPersonNameComponentsStyleFormatterShort
{
    long long _shortNameFormat;	// 80 = 0x50
    _NSPersonNameComponentsStyleFormatterShortVariantGeneral *_variantFormatter;	// 88 = 0x58
    _NSPersonNameComponentsStyleFormatter *_subFormatter;	// 96 = 0x60
    _Bool _forceShortNameEnabled;	// 104 = 0x68
}

- (void)dealloc;	// IMP=0x00000000009513a8
- (_Bool)isEnabled;	// IMP=0x0000000000951289
- (id)fallbackStyleFormatter;	// IMP=0x00000000009511e4
- (id)orderedKeysOfInterest;	// IMP=0x0000000000951138
- (id)keysOfInterest;	// IMP=0x00000000009510f5
- (id)abbreviatedKeys;	// IMP=0x00000000009510cb
- (id)_formattedStringFromOrderedKeys:(id)arg1 components:(id)arg2 attributesByRange:(id)arg3;	// IMP=0x0000000000950eeb
@property(retain) _NSPersonNameComponentsStyleFormatter *subFormatter;
@property(readonly) _NSPersonNameComponentsStyleFormatterShortVariantGeneral *variantFormatter;
@property long long shortNameFormat;
@property _Bool forceShortNameEnabled;
- (id)initWithMasterFormatter:(id)arg1;	// IMP=0x0000000000950cdb

@end

