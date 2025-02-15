//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Recap/RCPBaseEventStreamComposer-Protocol.h>

@class CAMediaTimingFunction, NSArray;

@protocol RCPTouchEventStreamComposer <RCPBaseEventStreamComposer>
@property(readonly, nonatomic) double defaultRadius;
@property(readonly, nonatomic) double defaultPressure;
@property(retain, nonatomic) CAMediaTimingFunction *touchCurveFunction;
@property(nonatomic) long long touchFrequency;
- (void)peekAndPop:(struct CGPoint)arg1 commit:(_Bool)arg2 duration:(double)arg3;
- (void)peekAndPop:(struct CGPoint)arg1 commit:(_Bool)arg2 duration:(double)arg3 radius:(double)arg4;
- (void)peekAndPop:(struct CGPoint)arg1 commit:(_Bool)arg2 duration:(double)arg3 pressure:(double)arg4;
- (void)peekAndPop:(struct CGPoint)arg1 commit:(_Bool)arg2 duration:(double)arg3 pressure:(double)arg4 radius:(double)arg5;
- (void)rotate:(struct CGPoint)arg1 withRadius:(double)arg2 rotation:(double)arg3 duration:(double)arg4 touchCount:(unsigned long long)arg5;
- (void)pinchOpenWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3;
- (void)pinchOpenWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3 radius:(double)arg4;
- (void)pinchOpenWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3 pressure:(double)arg4;
- (void)pinchOpenWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3 pressure:(double)arg4 radius:(double)arg5;
- (void)pinchCloseWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3;
- (void)pinchCloseWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3 radius:(double)arg4;
- (void)pinchCloseWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3 pressure:(double)arg4;
- (void)pinchCloseWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3 pressure:(double)arg4 radius:(double)arg5;
- (void)sendFlickWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3;
- (void)sendFlickWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3 radius:(double)arg4;
- (void)sendFlickWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3 pressure:(double)arg4;
- (void)sendFlickWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3 pressure:(double)arg4 radius:(double)arg5;
- (void)multifingerDragWithPointArray:(struct CGPoint *)arg1 numPoints:(unsigned long long)arg2 duration:(double)arg3 numFingers:(unsigned long long)arg4;
- (void)dragWithStartPoint:(struct CGPoint)arg1 mask:(unsigned long long)arg2 endPoint:(struct CGPoint)arg3 mask:(unsigned long long)arg4 duration:(double)arg5;
- (void)dragWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3;
- (void)dragWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3 radius:(double)arg4;
- (void)dragWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3 pressure:(double)arg4;
- (void)dragWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3 pressure:(double)arg4 radius:(double)arg5;
- (void)dragWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3 tapAndWait:(double)arg4 lift:(_Bool)arg5;
- (void)dragWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3 tapAndWait:(double)arg4 lift:(_Bool)arg5 radius:(double)arg6;
- (void)dragWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3 tapAndWait:(double)arg4 lift:(_Bool)arg5 pressure:(double)arg6;
- (void)dragWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3 tapAndWait:(double)arg4 lift:(_Bool)arg5 pressure:(double)arg6 radius:(double)arg7;
- (void)tapToWakeAtPoint:(struct CGPoint)arg1;
- (void)doubleFingerTap:(struct CGPoint)arg1;
- (void)doubleTap:(struct CGPoint)arg1;
- (void)tap:(struct CGPoint)arg1;
- (void)tap:(struct CGPoint)arg1 radius:(double)arg2;
- (void)tap:(struct CGPoint)arg1 pressure:(double)arg2;
- (void)tap:(struct CGPoint)arg1 pressure:(double)arg2 radius:(double)arg3;
- (void)moveToPoint:(struct CGPoint)arg1 duration:(double)arg2;
- (void)moveToPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2 duration:(double)arg3;
- (void)moveToPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2 pressure:(double)arg3 duration:(double)arg4;
- (void)moveToPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2 pressure:(double)arg3 duration:(double)arg4 radius:(double)arg5;
- (void)liftUp:(struct CGPoint)arg1;
- (void)liftUp:(struct CGPoint)arg1 touchCount:(unsigned long long)arg2;
- (void)liftUpAtPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2;
- (void)liftUpAtAllActivePointsWithEventType:(long long)arg1;
- (void)liftUpAtAllActivePoints;
- (void)liftUpActivePointsByIndex:(NSArray *)arg1;
- (void)edgeOrbSwipe:(struct CGPoint)arg1 withEndLocation:(struct CGPoint)arg2 withDuration:(double)arg3;
- (void)edgeOrb:(struct CGPoint)arg1;
- (void)touchTapDown:(struct CGPoint)arg1;
- (void)touchDown:(struct CGPoint)arg1;
- (void)touchDown:(struct CGPoint)arg1 touchCount:(unsigned long long)arg2;
- (void)touchDownAtPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2;
- (void)touchDownAtPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2 radius:(double)arg3;
- (void)touchDownAtPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2 pressure:(double)arg3;
- (void)touchDownAtPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2 pressure:(double)arg3 radius:(double)arg4;
@end

