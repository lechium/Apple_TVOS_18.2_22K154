//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPCluster, CPZone, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPGuideFinder : NSObject
{
    CPZone *contentZone;	// 8 = 0x8
    unsigned int countOfWordsInZone;	// 16 = 0x10
    double *anchorArray;	// 24 = 0x18
    double *rightHandSideArray;	// 32 = 0x20
    CDStruct_8db92b66 *crossingWordArray;	// 40 = 0x28
    CPCluster *anchors;	// 48 = 0x30
    CPCluster *rightHandSides;	// 56 = 0x38
    double medianFontSizeOfFirstCharacter;	// 64 = 0x40
    double medianFontSizeOfLastCharacter;	// 72 = 0x48
    NSMutableArray *gutters;	// 80 = 0x50
    NSMutableArray *leftGuides;	// 88 = 0x58
    NSMutableArray *rightGuides;	// 96 = 0x60
}

+ (void)reclusterBetweenGuides:(id)arg1;	// IMP=0x001000000018031a
+ (void)reclusterPreservingAlignment:(id)arg1;	// IMP=0x00100000001801d5
+ (_Bool)gutterSeparates:(id)arg1 from:(id)arg2;	// IMP=0x001000000018017b
+ (_Bool)guideSeparates:(id)arg1 from:(id)arg2;	// IMP=0x0010000000180121
- (id)rightGuides;	// IMP=0x000000000017f75c
- (_Bool)hasRightGuides;	// IMP=0x000000000017f736
- (id)leftGuides;	// IMP=0x000000000017f72c
- (_Bool)hasLeftGuides;	// IMP=0x000000000017f706
- (id)gutters;	// IMP=0x000000000017f6fc
- (_Bool)hasGutters;	// IMP=0x000000000017f6d6
- (void)markTextLines;	// IMP=0x000000000017f51b
- (void)splitTextLines;	// IMP=0x000000000017f4ed
- (void)splitTextLinesBetweenBorderWords;	// IMP=0x000000000017f35f
- (void)splitTextLinesAtBorderWords;	// IMP=0x000000000017f1ff
- (void)func:(id)arg1 and:(id)arg2 and:(unsigned int)arg3 and:(unsigned int)arg4;	// IMP=0x000000000017f0cd
- (void)findGuides;	// IMP=0x000000000017f00c
- (void)findGutters;	// IMP=0x000000000017ee19
- (void)findWordEdgeClusters;	// IMP=0x000000000017ec93
- (void)subdivideRightGuideAt:(unsigned int)arg1;	// IMP=0x000000000017eb73
- (void)subdivideLeftGuideAt:(unsigned int)arg1;	// IMP=0x000000000017ea53
- (void)subdivideGutterFrom:(unsigned int)arg1 to:(unsigned int)arg2;	// IMP=0x000000000017e8ef
- (void)subdivideStripInto:(id)arg1 from:(double)arg2 to:(double)arg3 borderedBy:(CDStruct_8db92b66 *)arg4 ofCount:(unsigned int)arg5 crossedBy:(CDStruct_8db92b66 *)arg6 ofCount:(unsigned int)arg7;	// IMP=0x000000000017e21a
- (void)setAlignForWordWithExtent:(CDStruct_8db92b66 *)arg1 stripArray:(id)arg2 stripMax:(double)arg3;	// IMP=0x000000000017e1e0
- (_Bool)addStripTo:(id)arg1 bottom:(double)arg2 left:(double)arg3 top:(double)arg4 right:(double)arg5;	// IMP=0x000000000017e107
- (void)getWordEdges;	// IMP=0x000000000017dfff
- (double)medianFontSizeOfLastCharacter;	// IMP=0x000000000017dff4
- (double)medianFontSizeOfFirstCharacter;	// IMP=0x000000000017dfe9
- (void)dealloc;	// IMP=0x000000000017df7d
- (void)finalize;	// IMP=0x000000000017df3f
- (void)dispose;	// IMP=0x000000000017dedb
- (id)initWithContentZone:(id)arg1;	// IMP=0x000000000017de64

@end

