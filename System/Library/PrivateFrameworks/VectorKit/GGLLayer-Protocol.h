//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol GGLLayerDelegate;

@protocol GGLLayer
@property(readonly) int backingFormat;
@property(readonly, nonatomic) struct CGSize backingSize;
@property __weak id <GGLLayerDelegate> renderDelegate;
- (void)didEnterBackground;
- (void)onTimerFired:(double)arg1 presentAtTime:(double)arg2;
- (void)onTimerFired:(double)arg1;
@end

