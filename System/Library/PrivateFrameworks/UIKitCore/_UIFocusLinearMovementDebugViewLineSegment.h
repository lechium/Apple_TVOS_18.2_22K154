//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIBezierPath;

__attribute__((visibility("hidden")))
@interface _UIFocusLinearMovementDebugViewLineSegment : NSObject
{
    _UIFocusLinearMovementDebugViewLineSegment *_previousSegment;	// 8 = 0x8
    UIBezierPath *_stemPath;	// 16 = 0x10
    UIBezierPath *_arrowHeadPath;	// 24 = 0x18
    struct CGRect _startRect;	// 32 = 0x20
    struct CGRect _endRect;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000bcdb26
@property(readonly, nonatomic) struct CGRect endRect; // @synthesize endRect=_endRect;
@property(readonly, nonatomic) struct CGRect startRect; // @synthesize startRect=_startRect;
- (void)_subdivideBezier:(id)arg1 startPoint:(struct CGPoint)arg2 controlPoint1:(struct CGPoint)arg3 controlPoint2:(struct CGPoint)arg4 endPoint:(struct CGPoint)arg5;	// IMP=0x0000000000bcd87c
- (id)_flattenedBezierPathFromBezierPath:(id)arg1;	// IMP=0x0000000000bcd5b0
- (id)_pathElementsFromPath:(id)arg1;	// IMP=0x0000000000bcd499
- (void)_calculatePaths;	// IMP=0x0000000000bccee4
- (id)_calculateArrowHeadPath;	// IMP=0x0000000000bcce40
- (id)_calculateStemPathFrom:(struct CGRect)arg1 to:(struct CGRect)arg2 startPoint:(struct CGPoint *)arg3 endPoint:(struct CGPoint *)arg4;	// IMP=0x0000000000bcc210
- (void)drawInRect:(struct CGRect)arg1;	// IMP=0x0000000000bcc1bd
@property(readonly, nonatomic) long long type;
- (id)initWithStartRect:(struct CGRect)arg1 endRect:(struct CGRect)arg2 previousSegment:(id)arg3;	// IMP=0x0000000000bcbf18

@end

