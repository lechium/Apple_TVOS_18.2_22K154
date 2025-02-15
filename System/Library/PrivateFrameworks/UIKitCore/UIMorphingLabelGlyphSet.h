//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, NSMutableArray, UIMorphingLabel;

__attribute__((visibility("hidden")))
@interface UIMorphingLabelGlyphSet : NSObject
{
    UIMorphingLabel *_label;	// 8 = 0x8
    NSAttributedString *_attributedString;	// 16 = 0x10
    struct __CTLine *_line;	// 24 = 0x18
    NSMutableArray *_glyphViews;	// 32 = 0x20
    unsigned long long _glyphCount;	// 40 = 0x28
    unsigned short *_glyphs;	// 48 = 0x30
    struct CGRect *_glyphFrames;	// 56 = 0x38
    struct CGPoint *_glyphPositions;	// 64 = 0x40
    struct CGPoint _lineOrigin;	// 72 = 0x48
    double _lineWidth;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000f74bc5
@property(readonly, nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(readonly, nonatomic) struct CGPoint lineOrigin; // @synthesize lineOrigin=_lineOrigin;
@property(readonly, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(readonly, nonatomic) NSArray *glyphViews; // @synthesize glyphViews=_glyphViews;
@property(readonly, nonatomic) const struct CGPoint *glyphPositions; // @synthesize glyphPositions=_glyphPositions;
@property(readonly, nonatomic) const struct CGRect *glyphFrames; // @synthesize glyphFrames=_glyphFrames;
@property(readonly, nonatomic) const unsigned short *glyphs; // @synthesize glyphs=_glyphs;
@property(readonly, nonatomic) unsigned long long glyphCount; // @synthesize glyphCount=_glyphCount;
- (struct CGRect)boundingRectForGlyphsInRange:(struct _NSRange)arg1;	// IMP=0x0000000000f74aa5
- (void)placeGlyphs;	// IMP=0x0000000000f748d9
- (void)removeGlyphs;	// IMP=0x0000000000f7476f
- (void)buildGlyphViews;	// IMP=0x0000000000f735d3
- (void)dealloc;	// IMP=0x0000000000f7356a
- (id)initWithLabel:(id)arg1 attributedString:(id)arg2;	// IMP=0x0000000000f7336b

@end

