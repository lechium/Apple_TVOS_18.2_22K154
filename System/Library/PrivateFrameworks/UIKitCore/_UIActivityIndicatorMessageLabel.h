//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UILabel.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _UIActivityIndicatorMessageLabel : UILabel
{
    NSDictionary *_regularTextAttributes;	// 160 = 0xa0
    NSDictionary *_effectiveTextAttributes;	// 168 = 0xa8
}

+ (id)defaultRegularContentSizeTextAttributes;	// IMP=0x006000000107f72a
- (void).cxx_destruct;	// IMP=0x000000000107ff26
@property(readonly, copy, nonatomic) NSDictionary *effectiveTextAttributes; // @synthesize effectiveTextAttributes=_effectiveTextAttributes;
@property(copy, nonatomic) NSDictionary *regularTextAttributes; // @synthesize regularTextAttributes=_regularTextAttributes;
- (void)_ensureCapableOfCalculatingBaselineOffsets;	// IMP=0x000000000107fe6b
- (id)_validatedAttributedString:(id)arg1;	// IMP=0x000000000107fd95
- (double)_effectiveVerticalSpacingToSpinner;	// IMP=0x000000000107fd18
- (id)_effectiveAttributesDerivedFromRegularTextAttributes:(id)arg1;	// IMP=0x000000000107fb92
- (void)setEffectiveTextAttributes:(id)arg1;	// IMP=0x000000000107fac4
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000107fa48
- (void)setAttributedText:(id)arg1;	// IMP=0x000000000107f978
- (void)setText:(id)arg1;	// IMP=0x000000000107f8ff
@property(readonly, nonatomic) double verticalSpacingToSpinner;
- (id)initWithRegularTextAttributes:(id)arg1;	// IMP=0x000000000107f7f7

@end

