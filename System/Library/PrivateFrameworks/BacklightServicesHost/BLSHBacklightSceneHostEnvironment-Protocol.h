//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServicesHost/NSObject-Protocol.h>

@class BLSAlwaysOnDateSpecifier, BLSBacklightChangeEvent, BLSBacklightSceneVisualState, NSDate, NSDateInterval, NSString, RBSProcessIdentity;
@protocol BLSHBacklightSceneHostEnvironmentObserver, NSObject;

@protocol BLSHBacklightSceneHostEnvironment <NSObject>
@property(getter=isDisplayBlanked) _Bool displayBlanked;
@property(getter=hasUnrestrictedFramerateUpdates) _Bool unrestrictedFramerateUpdates;
@property(getter=isLiveUpdating) _Bool liveUpdating;
@property(getter=isAlwaysOnEnabledForEnvironment) _Bool alwaysOnEnabledForEnvironment;
@property(readonly) _Bool clientSupportsAlwaysOn;
@property(readonly) NSDate *presentationDate;
@property(readonly) BLSBacklightSceneVisualState *visualState;
@property(readonly, getter=isClientActive) _Bool clientActive;
@property(readonly) _Bool clientHasDelegate;
@property(readonly) RBSProcessIdentity *budgetProcessIdentity;
@property(readonly, copy) NSString *identifier;
- (void)willEndRenderSession:(id <NSObject>)arg1;
- (void)willBeginRenderSession:(id <NSObject>)arg1;
- (void)invalidateContentForReason:(NSString *)arg1;
- (void)clientDidRequestInvalidationForReason:(NSString *)arg1;
- (void)deactivateClient;
- (void)clearPresentationDate;
- (void)updateToDateSpecifier:(BLSAlwaysOnDateSpecifier *)arg1 sceneContentsUpdated:(void (^)(void))arg2;
- (void)requestDateSpecifiersForDateInterval:(NSDateInterval *)arg1 previousPresentationDate:(NSDate *)arg2 shouldReset:(_Bool)arg3 completion:(void (^)(NSDateInterval *, NSArray *))arg4;
- (void)updateToVisualState:(BLSBacklightSceneVisualState *)arg1 presentationDateSpecifier:(BLSAlwaysOnDateSpecifier *)arg2 animated:(_Bool)arg3 triggerEvent:(BLSBacklightChangeEvent *)arg4 touchTargetable:(_Bool)arg5 sceneContentsUpdated:(void (^)(void))arg6 performBacklightRamp:(void (^)(double))arg7 animationComplete:(void (^)(void))arg8;
- (void)requestedFidelityForInactiveContentWithCompletion:(void (^)(long long))arg1;
- (void)removeObserver:(id <BLSHBacklightSceneHostEnvironmentObserver>)arg1;
- (void)addObserver:(id <BLSHBacklightSceneHostEnvironmentObserver>)arg1;

@optional
@property(getter=isHighLuminanceAlwaysOn) _Bool highLuminanceAlwaysOn;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,GisHighLuminanceAlwaysOn

@property _Bool cacheFlipbookOnDisplayWake;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?

@property(getter=is1HzFlipbook, setter=set1HzFlipbook:) _Bool oneHzFlipbook;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,Gis1HzFlipbook,Sset1HzFlipbook:

@property(readonly, getter=isLocal) _Bool local;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,GisLocal

@end

