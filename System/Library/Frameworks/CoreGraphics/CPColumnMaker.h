//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPZone, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPColumnMaker : NSObject
{
    NSMutableArray *columns;	// 8 = 0x8
    CPZone *currentZone;	// 16 = 0x10
    NSMutableArray *allParagraphs;	// 24 = 0x18
    NSMutableArray *thinHorizontalShapes;	// 32 = 0x20
    NSMutableArray *otherShapes;	// 40 = 0x28
    NSMutableArray *images;	// 48 = 0x30
    NSMutableArray *paragraphWrappers;	// 56 = 0x38
    struct CGRect pageBounds;	// 64 = 0x40
    double maxParagraphDistance;	// 96 = 0x60
}

@property struct CGRect pageBounds; // @synthesize pageBounds;
- (void)makeColumnsFrom:(id)arg1 zone:(id)arg2;	// IMP=0x000000000061e54a
- (void)anchorImages;	// IMP=0x000000000061e197
- (void)splitColumns:(id)arg1;	// IMP=0x000000000061dcf1
- (double)averageSpacing:(id)arg1;	// IMP=0x000000000061db95
- (_Bool)closeImagesBetween:(id)arg1 and:(id)arg2 bounds:(struct CGRect)arg3;	// IMP=0x000000000061d22f
- (void)callOuts;	// IMP=0x000000000061c7ce
- (void)intersectionCallout:(id)arg1;	// IMP=0x000000000061c32a
- (_Bool)canSafelyAdd:(id)arg1 to:(id)arg2;	// IMP=0x000000000061c322
- (_Bool)column:(id)arg1 isLinkedBelowTo:(id)arg2;	// IMP=0x000000000061c2ab
- (_Bool)paragraph:(id)arg1 isLinkedBelowTo:(id)arg2;	// IMP=0x000000000061c206
- (id)chunkAbove:(id)arg1 in:(id)arg2;	// IMP=0x000000000061bde4
- (id)paragraphAbove:(id)arg1 in:(id)arg2;	// IMP=0x000000000061babf
- (id)paragraphBelow:(id)arg1 in:(id)arg2;	// IMP=0x000000000061b78e
- (_Bool)paragraph:(id)arg1 isBelow:(id)arg2;	// IMP=0x000000000061b680
- (_Bool)paragraph:(id)arg1 isAbove:(id)arg2;	// IMP=0x000000000061b572
- (_Bool)paragraph:(id)arg1 notOnSameShapeAs:(id)arg2;	// IMP=0x000000000061b20d
- (_Bool)cuttingShapeBetween:(id)arg1 and:(id)arg2;	// IMP=0x000000000061ab51
- (void)partitionShapes:(id)arg1;	// IMP=0x000000000061a930
- (_Bool)intervalOverlapLeft:(double)arg1 right:(double)arg2 paragraphs:(id)arg3;	// IMP=0x000000000061a7a8
- (id)columns;	// IMP=0x000000000061a79e
- (void)dealloc;	// IMP=0x000000000061a73f
- (id)init;	// IMP=0x000000000061a6fc

@end

