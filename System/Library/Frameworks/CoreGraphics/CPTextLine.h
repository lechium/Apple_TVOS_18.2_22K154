//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPCharSequence, NSArray;

__attribute__((visibility("hidden")))
@interface CPTextLine
{
    CPCharSequence *charSequence;	// 128 = 0x80
    CDStruct_2e2afed4 *wordArray;	// 136 = 0x88
    unsigned int wordCount;	// 144 = 0x90
    struct CPInlineContainer *inlineList;	// 152 = 0x98
    int lineNumber;	// 160 = 0xa0
    int columnNumber;	// 164 = 0xa4
    double baseline;	// 168 = 0xa8
    _Bool baseLineIsNull;	// 176 = 0xb0
    struct CGRect normalizedBounds;	// 184 = 0xb8
    _Bool hasBeenSplit;	// 216 = 0xd8
    _Bool hasBeenProcessed;	// 217 = 0xd9
    _Bool maySplit;	// 218 = 0xda
    _Bool hasTabs;	// 219 = 0xdb
    NSArray *columnBreaks;	// 224 = 0xe0
    NSArray *xsegments;	// 232 = 0xe8
    int levels;	// 240 = 0xf0
    float maximumLetterGap;	// 244 = 0xf4
    float maximumWordGap;	// 248 = 0xf8
    int tabsBefore;	// 252 = 0xfc
    _Bool irregular;	// 256 = 0x100
    unsigned int leftSpacerIndex;	// 260 = 0x104
    unsigned int rightSpacerIndex;	// 264 = 0x108
    _Bool isListItem;	// 268 = 0x10c
    unsigned int listSpacerIndex;	// 272 = 0x110
    _Bool lineBreakAfter;	// 276 = 0x114
    struct CPPDFStyle *uniformStyle;	// 280 = 0x118
    unsigned short uniformStyleFlags;	// 288 = 0x120
    double monospaceWidth;	// 296 = 0x128
    unsigned int *spacesBefore;	// 304 = 0x130
    _Bool disposed;	// 312 = 0x138
}

@property(nonatomic) _Bool lineBreakAfter; // @synthesize lineBreakAfter;
@property(nonatomic) unsigned int listSpacerIndex; // @synthesize listSpacerIndex;
@property(nonatomic) _Bool isListItem; // @synthesize isListItem;
@property(nonatomic) unsigned int rightSpacerIndex; // @synthesize rightSpacerIndex;
@property(nonatomic) unsigned int leftSpacerIndex; // @synthesize leftSpacerIndex;
- (struct CGRect)normalizedBounds;	// IMP=0x00000000004a4ea8
- (double)rotationAngle;	// IMP=0x00000000004a4e8b
- (double)medianFontSize;	// IMP=0x00000000004a4ca6
- (_Bool)hasDropCap;	// IMP=0x00000000004a4be1
- (long long)topIsAbove:(id)arg1;	// IMP=0x00000000004a4a46
- (id)attributes;	// IMP=0x00000000004a4a39
- (void)setIrregular:(_Bool)arg1;	// IMP=0x00000000004a4a29
- (_Bool)irregular;	// IMP=0x00000000004a4a19
- (void)setMaximumWordGap:(float)arg1;	// IMP=0x00000000004a4a07
- (float)maximumWordGap;	// IMP=0x00000000004a49f5
- (void)setMaximumLetterGap:(float)arg1;	// IMP=0x00000000004a49e3
- (float)maximumLetterGap;	// IMP=0x00000000004a49d1
- (void)recomputeLevels;	// IMP=0x00000000004a4969
- (void)setLevels:(int)arg1;	// IMP=0x00000000004a4959
- (int)levels;	// IMP=0x00000000004a4949
- (void)setSpaces:(unsigned int)arg1 beforeWordAtIndex:(unsigned int)arg2;	// IMP=0x00000000004a488f
- (unsigned int)spacesBeforeWordAtIndex:(unsigned int)arg1;	// IMP=0x00000000004a485d
- (double)monospaceWidth;	// IMP=0x00000000004a470f
- (_Bool)isMonospaced;	// IMP=0x00000000004a46eb
- (_Bool)styleIsUniform:(struct CPPDFStyle **)arg1 styleFlags:(unsigned short)arg2;	// IMP=0x00000000004a45e7
- (void)recomputeBaseline;	// IMP=0x00000000004a4497
- (void)translateObjectYBy:(double)arg1;	// IMP=0x00000000004a444b
- (_Bool)isIndivisible;	// IMP=0x00000000004a4443
- (void)setBaselineToNull;	// IMP=0x00000000004a4432
- (void)setBaseline:(double)arg1;	// IMP=0x00000000004a4415
- (double)baseline;	// IMP=0x00000000004a433b
- (_Bool)hyphenated;	// IMP=0x00000000004a4333
- (struct CGPoint)anchor;	// IMP=0x00000000004a42d8
- (_Bool)overlapsHorizontally:(struct CGRect)arg1;	// IMP=0x00000000004a4122
- (_Bool)overlapsWith:(id)arg1;	// IMP=0x00000000004a40c6
- (long long)baseLineDescendingApprox:(id)arg1;	// IMP=0x00000000004a3f04
- (long long)baseLineDescending:(id)arg1;	// IMP=0x00000000004a3ea9
- (long long)baseLineAscending:(id)arg1;	// IMP=0x00000000004a3e4e
- (struct CGRect)bounds;	// IMP=0x00000000004a3c8c
- (void)fitBoundsToChildren;	// IMP=0x00000000004a3c86
- (int)tabsBefore;	// IMP=0x00000000004a3c76
- (void)setTabsBefore:(int)arg1;	// IMP=0x00000000004a3c66
- (_Bool)hasTabs;	// IMP=0x00000000004a3c56
- (void)setHasTabs:(_Bool)arg1;	// IMP=0x00000000004a3c46
- (void)accept:(id)arg1;	// IMP=0x00000000004a3c2b
- (void)setColumnBreaks:(id)arg1;	// IMP=0x00000000004a3bed
- (id)columnBreaks;	// IMP=0x00000000004a3bdc
- (_Bool)hasBeenProcessed;	// IMP=0x00000000004a3bcc
- (void)setHasBeenProcessed:(_Bool)arg1;	// IMP=0x00000000004a3bbc
- (_Bool)hasBeenSplit;	// IMP=0x00000000004a3bac
- (void)setHasBeenSplit:(_Bool)arg1;	// IMP=0x00000000004a3b9c
- (id)properties;	// IMP=0x00000000004a3b8f
- (_Bool)mapToWordPairsWithIndex:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;	// IMP=0x00000000004a3b06
- (_Bool)mapToWordPairs:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;	// IMP=0x00000000004a3a8a
- (_Bool)mapToWordsWithIndex:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;	// IMP=0x00000000004a3a16
- (_Bool)mapToWords:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;	// IMP=0x00000000004a39a6
- (_Bool)removeTextLines:(id)arg1 whereTrue:(CDUnknownFunctionPointerType)arg2 passing:(void *)arg3;	// IMP=0x00000000004a378b
- (id)newTextLineFromWordAt:(unsigned int)arg1 lengthInWords:(unsigned int)arg2;	// IMP=0x00000000004a35ec
- (_Bool)changesFontAt:(id)arg1;	// IMP=0x00000000004a3516
- (_Bool)hasJustifiedAlignment;	// IMP=0x00000000004a34f7
- (int)align;	// IMP=0x00000000004a349a
- (long long)zOrder;	// IMP=0x00000000004a345b
- (void)anchorChunk:(id)arg1 atWordIndex:(unsigned int)arg2;	// IMP=0x00000000004a3318
- (struct CPInlineContainer *)inlineList;	// IMP=0x00000000004a3307
- (unsigned int)inlineCount;	// IMP=0x00000000004a32e7
- (CDStruct_2e2afed4 *)lastWord;	// IMP=0x00000000004a32ba
- (CDStruct_2e2afed4 *)firstWord;	// IMP=0x00000000004a3298
- (CDStruct_2e2afed4 *)wordAtIndex:(unsigned int)arg1;	// IMP=0x00000000004a3252
- (struct CGRect)boundsOfWordAtIndex:(unsigned int)arg1;	// IMP=0x00000000004a31f8
- (unsigned int)wordCount;	// IMP=0x00000000004a31e8
- (CDStruct_2e2afed4 *)wordArrayOfSize:(unsigned int)arg1;	// IMP=0x00000000004a3177
- (CDStruct_2e2afed4 *)wordArray;	// IMP=0x00000000004a3166
- (id)charSequence;	// IMP=0x00000000004a3155
- (void)setCharSequence:(id)arg1;	// IMP=0x00000000004a3117
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004a3038
- (void)dealloc;	// IMP=0x00000000004a2fd3
- (void)finalize;	// IMP=0x00000000004a2f95
- (void)dispose;	// IMP=0x00000000004a2f0e
- (id)init;	// IMP=0x00000000004a2e42

@end

