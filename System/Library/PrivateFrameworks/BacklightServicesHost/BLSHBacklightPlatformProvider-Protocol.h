//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServicesHost/NSObject-Protocol.h>

@class BLSHFlipbookSpecification;
@protocol BLSHBacklightEnvironmentSessionProviding, BLSHBacklightPlatformProviderObserver, BLSHFlipbookTelemetry;

@protocol BLSHBacklightPlatformProvider <NSObject>
@property(readonly, nonatomic, getter=isShowingBlankingWindow) _Bool showingBlankingWindow;
@property(readonly, nonatomic) id <BLSHBacklightEnvironmentSessionProviding> sessionProvider;
@property(readonly, nonatomic) double backlightFadeOutDuration;
@property(readonly, nonatomic) double backlightFadeInDuration;
- (void)removeObserver:(id <BLSHBacklightPlatformProviderObserver>)arg1;
- (void)addObserver:(id <BLSHBacklightPlatformProviderObserver>)arg1;
- (void)showBlankingWindow:(_Bool)arg1 withFadeDuration:(double)arg2;

@optional
@property(readonly, nonatomic) _Bool suppressionSupported;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) double backlightDimmingDuration;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,R,N

@property(readonly, nonatomic) float backlightDimmedFactor;
// Preceding property had unknown attributes: ?
// Original attribute string: Tf,?,R,N

@property(readonly, nonatomic, getter=isUsingAlwaysOnBrightnessCurve) _Bool useAlwaysOnBrightnessCurve;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,GisUsingAlwaysOnBrightnessCurve

@property(readonly, nonatomic) id <BLSHFlipbookTelemetry> flipbookTelemetryDelegate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<BLSHFlipbookTelemetry>",?,R,N

@property(readonly, nonatomic) BLSHFlipbookSpecification *flipbookSpecification;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"BLSHFlipbookSpecification",?,R,N

@property(readonly, nonatomic, getter=isAlwaysOnEnabled) _Bool alwaysOnEnabled;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,GisAlwaysOnEnabled

- (void)useAlwaysOnBrightnessCurve:(_Bool)arg1 withRampDuration:(double)arg2;
@end

