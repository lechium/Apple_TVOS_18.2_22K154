//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@interface CALayer (MKDoubleLayer)
- (struct CGRect)convertDoubleRect:(struct CGRect)arg1 toLayer:(id)arg2;	// IMP=0x00300000001ba077
- (struct CGRect)convertDoubleRect:(struct CGRect)arg1 fromLayer:(id)arg2;	// IMP=0x00300000001ba044
- (struct CGPoint)convertDoublePoint:(struct CGPoint)arg1 toLayer:(id)arg2;	// IMP=0x00300000001ba032
- (struct CGPoint)convertDoublePoint:(struct CGPoint)arg1 fromLayer:(id)arg2;	// IMP=0x00300000001ba020
- (void)setDoubleBounds:(struct CGRect)arg1;	// IMP=0x00300000001ba00e
- (struct CGRect)doubleBounds;	// IMP=0x00300000001b9fef
- (void)setDoublePosition:(struct CGPoint)arg1;	// IMP=0x00300000001b9fdd
- (struct CGPoint)doublePosition;	// IMP=0x00300000001b9fcb
- (void)_mapkit_setActionsToRemoveDefaultImplicitActions;	// IMP=0x00300000001ba65d
- (void)_mapkit_addAnimation:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00300000001ba5bb
- (void)_mapkit_removeAnimationImmediatelyForKey:(id)arg1;	// IMP=0x00300000001ba483
@property(readonly, retain, nonatomic) CALayer *_mapKit_mapLayer;
- (_Bool)getPresentationValue:(id *)arg1 forValueKey:(id)arg2 animationKey:(id)arg3 removeAnimation:(_Bool)arg4;	// IMP=0x00300000001ba1b5
- (_Bool)getPresentationValue:(id *)arg1 forKey:(id)arg2 removeAnimation:(_Bool)arg3;	// IMP=0x00300000001ba19d
@property(readonly, retain, nonatomic) CALayer *currentLayer;
@end

