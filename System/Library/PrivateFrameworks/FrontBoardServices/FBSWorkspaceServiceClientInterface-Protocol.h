//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FBSSceneClientSettingsDiff, FBSSceneIdentity, FBSSceneMessage, FBSSceneTransitionContext, FBSWorkspaceSceneRequestOptions, NSSet, NSString;
@protocol __BSAction__, __FBSWorkspaceSceneRemnant__;

@protocol FBSWorkspaceServiceClientInterface
- (oneway void)sceneID:(FBSSceneIdentity *)arg1 sendMessage:(FBSSceneMessage *)arg2 withResponse:(void (^)(FBSSceneMessage *, NSError *))arg3;
- (oneway void)sceneID:(FBSSceneIdentity *)arg1 didReceiveActions:(NSSet<__BSAction__> *)arg2 forExtension:(NSString *)arg3;
- (byref oneway void)sceneID:(FBSSceneIdentity *)arg1 didUpdateClientSettingsWithDiff:(FBSSceneClientSettingsDiff *)arg2 transitionContext:(FBSSceneTransitionContext *)arg3 completion:(void (^)(NSError *))arg4;
- (oneway void)requestSceneWithOptions:(FBSWorkspaceSceneRequestOptions *)arg1 completion:(void (^)(FBSSceneIdentity *, NSError *))arg2;
- (oneway void)createSceneWithOptions:(FBSWorkspaceSceneRequestOptions *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)workspaceID:(NSString *)arg1 sendActions:(NSSet<__BSAction__> *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)handshakeWithRemnants:(NSSet<__FBSWorkspaceSceneRemnant__> *)arg1;
@end

