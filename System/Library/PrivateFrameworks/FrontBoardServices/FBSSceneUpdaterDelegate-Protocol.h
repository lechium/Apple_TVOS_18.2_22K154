//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/NSObject-Protocol.h>

@class FBSSceneMessage, FBSSceneSettings, FBSSceneSettingsDiff, FBSSceneTransitionContext, NSSet;
@protocol FBSSceneUpdater;

@protocol FBSSceneUpdaterDelegate <NSObject>
- (void)updater:(id <FBSSceneUpdater>)arg1 didReceiveMessage:(FBSSceneMessage *)arg2 withResponse:(void (^)(FBSSceneMessage *))arg3;
- (void)updater:(id <FBSSceneUpdater>)arg1 didReceiveActions:(NSSet *)arg2 forExtension:(Class)arg3;
- (void)updater:(id <FBSSceneUpdater>)arg1 didUpdateSettings:(FBSSceneSettings *)arg2 withDiff:(FBSSceneSettingsDiff *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4 completion:(void (^)(FBSWorkspaceSceneUpdateResponse *))arg5;
@end

