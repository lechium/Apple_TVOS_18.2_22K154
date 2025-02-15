//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIPopoverShapePathProviderIOS
{
}

- (void)_generateRightArrowShapeInPath:(id)arg1 bounds:(struct CGRect)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4 peakPoint:(struct CGPoint)arg5 pinnedArrowSide:(long long)arg6 cornerRadius:(double)arg7 arrowBase:(double)arg8;	// IMP=0x0000000000be4325
- (void)_generateLeftArrowShapeInPath:(id)arg1 bounds:(struct CGRect)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4 peakPoint:(struct CGPoint)arg5 pinnedArrowSide:(long long)arg6 cornerRadius:(double)arg7 arrowBase:(double)arg8;	// IMP=0x0000000000be3f7b
- (void)_generateBottomArrowShapeInPath:(id)arg1 bounds:(struct CGRect)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4 peakPoint:(struct CGPoint)arg5 pinnedArrowSide:(long long)arg6 cornerRadius:(double)arg7 arrowBase:(double)arg8;	// IMP=0x0000000000be3bd7
- (void)_generateTopArrowShapeInPath:(id)arg1 bounds:(struct CGRect)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4 peakPoint:(struct CGPoint)arg5 pinnedArrowSide:(long long)arg6 cornerRadius:(double)arg7 arrowBase:(double)arg8;	// IMP=0x0000000000be3860
- (struct CGPoint)_addArrowCurveToPath:(id)arg1 direction:(unsigned long long)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4 peakPoint:(struct CGPoint)arg5 pinnedArrowSide:(long long)arg6;	// IMP=0x0000000000be335f
- (double)_leftAndRightStartYLocationForBounds:(struct CGRect)arg1 pinnedArrowSide:(long long)arg2 arrowBase:(double)arg3 arrowOffset:(double)arg4;	// IMP=0x0000000000be3290
- (double)_upAndDownStartingXLocationForBounds:(struct CGRect)arg1 pinnedArrowSide:(long long)arg2 arrowBase:(double)arg3 arrowOffset:(double)arg4;	// IMP=0x0000000000be3128
- (struct CGPoint)_addLineWithSlightTrailingAndLeadingCurveToPath:(id)arg1 startPoint:(struct CGPoint)arg2 endPoint:(struct CGPoint)arg3 leadingEdge:(_Bool)arg4 isVertical:(_Bool)arg5;	// IMP=0x0000000000be2f6c
- (id)generatePopoverPathForParameters:(struct _UIPopoverShapePathParameters)arg1;	// IMP=0x0000000000be2b90

@end

