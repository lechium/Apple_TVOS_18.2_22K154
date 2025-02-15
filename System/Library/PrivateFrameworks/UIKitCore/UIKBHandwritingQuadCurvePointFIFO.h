//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingQuadCurvePointFIFO
{
    CDUnknownBlockType _emissionHandler;	// 16 = 0x10
    double _scale;	// 24 = 0x18
    NSMutableArray *_prevPoints;	// 32 = 0x20
    CDStruct_23d8ee2f _lastPoint;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000c8e56d
@property(nonatomic) CDStruct_19cde01f lastPoint; // @synthesize lastPoint=_lastPoint;
@property(retain, nonatomic) NSMutableArray *prevPoints; // @synthesize prevPoints=_prevPoints;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(copy) CDUnknownBlockType emissionHandler; // @synthesize emissionHandler=_emissionHandler;
- (void)clear;	// IMP=0x0000000000c8e454
- (void)flush;	// IMP=0x0000000000c8e170
- (void)addPoint:(struct)arg1;	// IMP=0x0000000000c8dbc8
- (id)initWithFIFO:(id)arg1 scale:(double)arg2;	// IMP=0x0000000000c8db32

@end

