//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VectorKit/NSObject-Protocol.h>

@class VKAnimation, VKPuckAnimator;

@protocol VKPuckAnimatorDelegate <NSObject>
- (void)projectCoordinate:(CDStruct_2c43369c)arg1 toPoint:(struct CGPoint *)arg2;
- (struct optional<double>)puckAnimator:(VKPuckAnimator *)arg1 getElevationWithCoordinate:(const void *)arg2;
- (void)puckAnimatorDidStop:(VKPuckAnimator *)arg1;
- (void)puckAnimator:(VKPuckAnimator *)arg1 updatedPosition:(const void *)arg2 course:(const void *)arg3 polylineCoordinate:(struct PolylineCoordinate)arg4;
- (void)puckAnimator:(VKPuckAnimator *)arg1 runAnimation:(VKAnimation *)arg2;
@end

