//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPBoundingBox : NSObject
{
    float _minX;	// 8 = 0x8
    float _maxX;	// 12 = 0xc
    float _minY;	// 16 = 0x10
    float _maxY;	// 20 = 0x14
    float _confidence;	// 24 = 0x18
    float _flag;	// 28 = 0x1c
    int _classIndex;	// 32 = 0x20
    int _trackID;	// 36 = 0x24
    int _groupID;	// 40 = 0x28
}

@property int groupID; // @synthesize groupID=_groupID;
@property int trackID; // @synthesize trackID=_trackID;
@property int classIndex; // @synthesize classIndex=_classIndex;
@property float flag; // @synthesize flag=_flag;
@property float confidence; // @synthesize confidence=_confidence;
@property float maxY; // @synthesize maxY=_maxY;
@property float minY; // @synthesize minY=_minY;
@property float maxX; // @synthesize maxX=_maxX;
@property float minX; // @synthesize minX=_minX;
- (int)extendBoxBy:(float)arg1 scaleX:(float)arg2 scaleY:(float)arg3;	// IMP=0x000000000025169e
- (struct CGRect)getCGRectWithClipWidth:(float)arg1 height:(float)arg2;	// IMP=0x00000000002515e1
- (float)computeIntersectionOverUnion:(id)arg1;	// IMP=0x00000000002514da
- (id)union:(id)arg1;	// IMP=0x0000000000251389
- (id)intersect:(id)arg1;	// IMP=0x000000000025120d
- (float)area;	// IMP=0x0000000000251195
- (id)initWithCenterAndSize:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4 confidence:(float)arg5;	// IMP=0x0000000000250ff3
- (id)initWithXYAndSize:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4 confidence:(float)arg5;	// IMP=0x0000000000250ebb

@end

