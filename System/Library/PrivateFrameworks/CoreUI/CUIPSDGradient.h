//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUIPSDGradientEvaluator;

@interface CUIPSDGradient : NSObject
{
    CUIPSDGradientEvaluator *evaluator;	// 8 = 0x8
    double drawingAngle;	// 16 = 0x10
    unsigned int gradientStyle;	// 24 = 0x18
}

+ (id)cuiPSDGradientWithColors:(id)arg1 locations:(id)arg2 midpointLocations:(id)arg3 angle:(double)arg4 style:(unsigned int)arg5;	// IMP=0x0060000000023745
+ (id)cuiPSDGradientWithColors:(id)arg1 locations:(id)arg2 midpointLocations:(id)arg3 angle:(double)arg4 isRadial:(_Bool)arg5;	// IMP=0x006000000002371e
+ (id)getMidpointLocationFromArray:(id)arg1 atIndex:(long long)arg2 withPolicy:(int)arg3;	// IMP=0x00600000000236de
@property unsigned int gradientStyle; // @synthesize gradientStyle;
@property double drawingAngle; // @synthesize drawingAngle;
@property(retain) CUIPSDGradientEvaluator *evaluator; // @synthesize evaluator;
- (void)dealloc;	// IMP=0x0000000000023b8a
- (id)initWithEvaluator:(id)arg1 drawingAngle:(double)arg2 gradientStyle:(unsigned int)arg3;	// IMP=0x0000000000023b20

@end

