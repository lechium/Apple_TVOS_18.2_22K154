//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString, PBSceneLayoutViewController, UIViewController;
@protocol PBSceneLayoutElement;

@protocol PBSceneLayoutViewControllerDisplayPublisherDelegate <NSObject>
- (void)sceneLayoutViewController:(PBSceneLayoutViewController *)arg1 didEndTransitionForTransitionElement:(UIViewController<PBSceneLayoutElement> *)arg2 forReason:(NSString *)arg3;
- (void)sceneLayoutViewController:(PBSceneLayoutViewController *)arg1 didStartTransitionForTransitionElement:(UIViewController<PBSceneLayoutElement> *)arg2 forReason:(NSString *)arg3;

@optional
- (void)sceneLayoutViewControllerWillUpdateFocus:(PBSceneLayoutViewController *)arg1 toTransitionElement:(UIViewController<PBSceneLayoutElement> *)arg2 fromTransitionElement:(UIViewController<PBSceneLayoutElement> *)arg3 forReason:(NSString *)arg4;
- (void)sceneLayoutViewController:(PBSceneLayoutViewController *)arg1 didRemoveTransitionElement:(UIViewController<PBSceneLayoutElement> *)arg2;
- (void)sceneLayoutViewController:(PBSceneLayoutViewController *)arg1 didAddTransitionElement:(UIViewController<PBSceneLayoutElement> *)arg2;
@end

