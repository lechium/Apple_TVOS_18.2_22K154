//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoard/FBSceneClientProviderInternal-Protocol.h>

@class FBSSceneSettings, FBSSceneSettingsDiff, FBSSceneTransitionContext, NSSet;
@protocol FBSceneHost;

@protocol FBSceneClient <FBSceneClientProviderInternal>
- (void)host:(id <FBSceneHost>)arg1 didReceiveActions:(NSSet *)arg2 forExtension:(Class)arg3;
- (void)host:(id <FBSceneHost>)arg1 didInvalidateWithTransitionContext:(FBSSceneTransitionContext *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)host:(id <FBSceneHost>)arg1 didUpdateSettings:(FBSSceneSettings *)arg2 withDiff:(FBSSceneSettingsDiff *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4 completion:(void (^)(_Bool, NSError *))arg5;
@end

