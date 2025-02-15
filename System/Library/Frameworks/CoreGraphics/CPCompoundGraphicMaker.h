//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPChunk, CPCluster;

__attribute__((visibility("hidden")))
@interface CPCompoundGraphicMaker : NSObject
{
    CPChunk *parentChunk;	// 8 = 0x8
    _Bool shapesAreVectorGraphics;	// 16 = 0x10
    unsigned int shapeCount;	// 20 = 0x14
    id *shapes;	// 24 = 0x18
    double pageSpread;	// 32 = 0x20
    CPCluster *cluster;	// 40 = 0x28
    unsigned int groupInfoCount;	// 48 = 0x30
    struct {
        unsigned int _field1;
        struct CGRect _field2;
    } *groupInfoArray;	// 56 = 0x38
    _Bool disposed;	// 64 = 0x40
}

+ (_Bool)makeCompoundGraphicsInZonesOf:(id)arg1;	// IMP=0x00100000004de0ef
- (_Bool)makeCompoundGraphics;	// IMP=0x00000000004dda4b
- (_Bool)groupOverlappingGraphics;	// IMP=0x00000000004dd57c
- (_Bool)makeCompoundGraphicsFromShapeGroups;	// IMP=0x00000000004dd4c5
- (void)coalesceShapeGroups;	// IMP=0x00000000004dd259
- (void)makeCompoundGraphicFromShapesAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;	// IMP=0x00000000004dd15c
- (void)addGroupInfoWithIndex:(unsigned int)arg1 bounds:(struct CGRect)arg2;	// IMP=0x00000000004dd12c
- (_Bool)findClusterLevel;	// IMP=0x00000000004dcef2
- (void)dealloc;	// IMP=0x00000000004dceaa
- (void)finalize;	// IMP=0x00000000004dce6c
- (void)dispose;	// IMP=0x00000000004dce2f
- (id)initWithGraphicsIn:(id)arg1 ofClass:(Class)arg2;	// IMP=0x00000000004dccf3

@end

