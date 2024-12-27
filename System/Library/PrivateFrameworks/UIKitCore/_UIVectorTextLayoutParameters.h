//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, UITraitCollection;

__attribute__((visibility("hidden")))
@interface _UIVectorTextLayoutParameters : NSObject
{
    NSAttributedString *_attributedText;	// 8 = 0x8
    unsigned long long _numberOfLines;	// 16 = 0x10
    UITraitCollection *_traitCollection;	// 24 = 0x18
    long long _lineBreakMode;	// 32 = 0x20
    struct CGSize _withinSize;	// 40 = 0x28
}

+ (id)parametersSuitableForView:(id)arg1;	// IMP=0x001000000161703d
- (void).cxx_destruct;	// IMP=0x000000000161744b
@property(nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(nonatomic) struct CGSize withinSize; // @synthesize withinSize=_withinSize;
@property(nonatomic) unsigned long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (_Bool)isEqualToParameters:(id)arg1;	// IMP=0x0000000001617294
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001617265
- (void)_copyFromParameters:(id)arg1;	// IMP=0x000000000161716e
- (id)initWithParameters:(id)arg1;	// IMP=0x0000000001617106

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

