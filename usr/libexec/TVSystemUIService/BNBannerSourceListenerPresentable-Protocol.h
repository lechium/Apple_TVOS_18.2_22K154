//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BNPresentable-Protocol.h"
#import "BNPresentableObservable-Protocol.h"
#import "BNPresentableUniquelyIdentifying-Protocol.h"
#import "BSInvalidatable-Protocol.h"

@class FBScene, NSString;
@protocol BNBannerSourceListenerPresentableDelegate, BNPresentable, BNPresentableSpecifying;

@protocol BNBannerSourceListenerPresentable <BSInvalidatable, BNPresentable, BNPresentableUniquelyIdentifying, BNPresentableObservable>
@property(nonatomic) __weak id <BNBannerSourceListenerPresentableDelegate> delegate;
@property(readonly, nonatomic) int bannerAppearState;
@property(readonly, nonatomic, getter=isReady) _Bool ready;
@property(readonly, nonatomic) id <BNPresentable> presentable;
- (void)handleTemplateContentEvent:(long long)arg1;
- (void)makeReadyIfPossible;
- (id)initWithPresentable:(id <BNPresentable>)arg1;
- (id)initWithSpecification:(id <BNPresentableSpecifying>)arg1 serviceDomain:(NSString *)arg2 readyCompletion:(void (^)(id <BNBannerSourceListenerPresentable>, NSError *))arg3;

@optional
@property(readonly, nonatomic) FBScene *scene;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"FBScene",?,R,N

@property(readonly, nonatomic, getter=isContentHosted) _Bool contentHosted;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,GisContentHosted

- (id)initWithWithPresentable:(id <BNPresentable>)arg1;
- (id)initWithWithSpecification:(id <BNPresentableSpecifying>)arg1 serviceDomain:(NSString *)arg2 readyCompletion:(void (^)(id <BNBannerSourceListenerPresentable>, NSError *))arg3;
@end

