//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterBoardUIServices/NSObject-Protocol.h>

@class FBSSceneClientSettings, FBSSceneClientSettingsDiff, FBSSceneTransitionContext, FBSSceneUpdate, FBScene, FBSceneClientHandle, FBSceneUpdateContext, NSError, NSSet;

@protocol FBSceneObserver <NSObject>

@optional
- (NSSet *)scene:(FBScene *)arg1 handleActions:(NSSet *)arg2;
- (void)scene:(FBScene *)arg1 didUpdateClientSettingsWithDiff:(FBSSceneClientSettingsDiff *)arg2 oldClientSettings:(FBSSceneClientSettings *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4;
- (void)scene:(FBScene *)arg1 didUpdateClientSettings:(FBSSceneUpdate *)arg2;
- (void)scene:(FBScene *)arg1 didCompleteUpdateWithContext:(FBSceneUpdateContext *)arg2 error:(NSError *)arg3;
- (void)scene:(FBScene *)arg1 didApplyUpdateWithContext:(FBSceneUpdateContext *)arg2;
- (void)scene:(FBScene *)arg1 didPrepareUpdateWithContext:(FBSceneUpdateContext *)arg2;
- (void)scene:(FBScene *)arg1 didUpdateSettings:(FBSSceneUpdate *)arg2;
- (void)scene:(FBScene *)arg1 clientDidConnect:(FBSceneClientHandle *)arg2;
- (void)sceneDidInvalidate:(FBScene *)arg1;
- (void)sceneDidInvalidate:(FBScene *)arg1 withContext:(FBSSceneTransitionContext *)arg2;
- (void)sceneWillDeactivate:(FBScene *)arg1 withError:(NSError *)arg2;
- (void)sceneWillDeactivate:(FBScene *)arg1 withContext:(FBSSceneTransitionContext *)arg2;
- (void)sceneDidActivate:(FBScene *)arg1;
- (void)sceneWillActivate:(FBScene *)arg1;
- (void)sceneContentStateDidChange:(FBScene *)arg1;
@end

