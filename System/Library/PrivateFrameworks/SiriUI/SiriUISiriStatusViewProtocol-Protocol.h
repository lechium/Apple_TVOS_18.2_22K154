//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUI/NSObject-Protocol.h>

@class UIView;
@protocol SiriUISiriStatusViewDelegate;

@protocol SiriUISiriStatusViewProtocol <NSObject>
@property(readonly, nonatomic) double statusViewHeight;
@property(nonatomic) _Bool paused;
@property(nonatomic, getter=isInUITrackingMode) _Bool inUITrackingMode;
@property(nonatomic) _Bool flamesViewDeferred;
@property(readonly, nonatomic) UIView *flamesContainerView;
@property(nonatomic) __weak id <SiriUISiriStatusViewDelegate> delegate;
@property(nonatomic) double disabledMicOpacity;
@property(nonatomic) double flamesViewWidth;
@property(nonatomic) long long mode;
- (void)forceMicVisible:(_Bool)arg1;
- (void)fadeOutCurrentAura;
- (void)setupOrbIfNeeded;
@end

