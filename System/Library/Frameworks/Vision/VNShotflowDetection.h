//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNShotflowDetection : NSObject
{
    float _area;	// 8 = 0x8
    _Bool _hasLabel;	// 12 = 0xc
    float _confidence;	// 16 = 0x10
    int _mergesCount;	// 20 = 0x14
    int _scale;	// 24 = 0x18
    float _rotationAngle;	// 28 = 0x1c
    float _yawAngle;	// 32 = 0x20
    float _pitchAngle;	// 36 = 0x24
    int _label;	// 40 = 0x28
    float _petFaceScore;	// 44 = 0x2c
    float _associatedX;	// 48 = 0x30
    float _associatedY;	// 52 = 0x34
    int _groupId;	// 56 = 0x38
    struct CGRect _box;	// 64 = 0x40
    struct CGRect _defaultBox;	// 96 = 0x60
}

@property(nonatomic) int groupId; // @synthesize groupId=_groupId;
@property(nonatomic) float associatedY; // @synthesize associatedY=_associatedY;
@property(nonatomic) float associatedX; // @synthesize associatedX=_associatedX;
@property(nonatomic) float petFaceScore; // @synthesize petFaceScore=_petFaceScore;
@property(nonatomic) int label; // @synthesize label=_label;
@property(nonatomic) _Bool hasLabel; // @synthesize hasLabel=_hasLabel;
@property(nonatomic) float pitchAngle; // @synthesize pitchAngle=_pitchAngle;
@property(nonatomic) float yawAngle; // @synthesize yawAngle=_yawAngle;
@property(nonatomic) float rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property(nonatomic) int scale; // @synthesize scale=_scale;
@property(nonatomic) int mergesCount; // @synthesize mergesCount=_mergesCount;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(nonatomic) struct CGRect defaultBox; // @synthesize defaultBox=_defaultBox;
@property(nonatomic) struct CGRect box; // @synthesize box=_box;
- (id)description;	// IMP=0x00000000003cc1c5
- (_Bool)isOverlappingLowMergeDet:(id)arg1 withOverlapThreshold:(float)arg2 withMergeCountDelta:(int)arg3;	// IMP=0x00000000003cc093
- (_Bool)isOverlappingSmallFace:(id)arg1 withOverlapThreshold:(float)arg2 withSizeRatio:(float)arg3;	// IMP=0x00000000003cbf7f
- (float)intersectionOverMinArea:(id)arg1;	// IMP=0x00000000003cbe76
- (float)intersectionOverArea:(id)arg1;	// IMP=0x00000000003cbd86
- (float)overlap:(id)arg1;	// IMP=0x00000000003cbc8c
@property(readonly, nonatomic) float smartDistance;
@property(readonly, nonatomic) float distanceToDefaultBox;
@property(readonly, nonatomic) struct CGPoint boxCenter;
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 pitchAngle:(float)arg7 mergesCount:(int)arg8 hasLabel:(_Bool)arg9 label:(int)arg10 petFaceScore:(float)arg11 associatedX:(float)arg12 associatedY:(float)arg13 groupId:(int)arg14;	// IMP=0x00000000003cba53
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 pitchAngle:(float)arg7 hasLabel:(_Bool)arg8 label:(int)arg9 petFaceScore:(float)arg10 associatedX:(float)arg11 associatedY:(float)arg12;	// IMP=0x00000000003cb9fe
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 pitchAngle:(float)arg7 mergesCount:(int)arg8 hasLabel:(_Bool)arg9 label:(int)arg10;	// IMP=0x00000000003cb9af
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 mergesCount:(int)arg7 hasLabel:(_Bool)arg8 label:(int)arg9;	// IMP=0x00000000003cb992
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 pitchAngle:(float)arg7 hasLabel:(_Bool)arg8 label:(int)arg9;	// IMP=0x00000000003cb972
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 hasLabel:(_Bool)arg7 label:(int)arg8;	// IMP=0x00000000003cb94f
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 mergesCount:(int)arg7;	// IMP=0x00000000003cb92e
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6;	// IMP=0x00000000003cb914

@end

