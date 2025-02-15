//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRAVEndpoint, MRDRouteRecommendationDemotionController, MRDRouteRecommendationOutputContextLogic, MRDRouteRecommendationSuppressionController, NSLock, NSString;
@protocol OS_dispatch_queue;

@interface MRDRouteValidator : NSObject
{
    MRAVEndpoint *_activeSystemEndpoint;	// 8 = 0x8
    NSLock *_activeSystemEndpointLock;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    MRDRouteRecommendationOutputContextLogic *_outputContextLogic;	// 32 = 0x20
    MRDRouteRecommendationSuppressionController *_suppressionController;	// 40 = 0x28
    MRDRouteRecommendationDemotionController *_demotionController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000007e00a
@property(retain, nonatomic) MRDRouteRecommendationDemotionController *demotionController; // @synthesize demotionController=_demotionController;
@property(retain, nonatomic) MRDRouteRecommendationSuppressionController *suppressionController; // @synthesize suppressionController=_suppressionController;
@property(retain, nonatomic) MRDRouteRecommendationOutputContextLogic *outputContextLogic; // @synthesize outputContextLogic=_outputContextLogic;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSLock *activeSystemEndpointLock; // @synthesize activeSystemEndpointLock=_activeSystemEndpointLock;
@property(retain, nonatomic) MRAVEndpoint *activeSystemEndpoint; // @synthesize activeSystemEndpoint=_activeSystemEndpoint;
@property(readonly, nonatomic) MRAVEndpoint *localEndpoint;
- (void)_handleActiveSystemEndpointDidChangeNotification:(id)arg1;	// IMP=0x001000000007de25
- (void)evaluateRecommendations:(id)arg1 localOutputContextHasAirPlay:(_Bool)arg2 primaryBundleIdentifier:(id)arg3 activeSystemEndpoint:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000007ce85
- (void)_bestRecommendationIn:(id)arg1 primaryBundleIdentifier:(id)arg2 activeSystemEndpoint:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000007ce7f
- (void)_refreshActiveSystemEndpoint:(CDUnknownBlockType)arg1;	// IMP=0x001000000007ca92
- (void)_fetchActiveSystemEndpoint:(CDUnknownBlockType)arg1;	// IMP=0x001000000007ca17
- (void)bestRecommendationIn:(id)arg1 primaryBundleIdentifier:(id)arg2 eligibleToShowRecommendationsOutsideApp:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000007c57a
- (id)init;	// IMP=0x001000000007c42e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

