//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAMediaTimingFunction, CASpringAnimation, NSString;

@protocol PKSpringAnimationFactory
@property(readonly, nonatomic) CAMediaTimingFunction *timing;
@property(readonly, nonatomic) double velocity;
@property(readonly, nonatomic) double damping;
@property(readonly, nonatomic) double stiffness;
@property(readonly, nonatomic) double mass;
@property(readonly, nonatomic) double speed;
@property(readonly, nonatomic) double duration;
- (CASpringAnimation *)highFrameRateSpringAnimationWithKeyPath:(NSString *)arg1 reason:(unsigned short)arg2;
- (CASpringAnimation *)springAnimationWithKeyPath:(NSString *)arg1;
@end

