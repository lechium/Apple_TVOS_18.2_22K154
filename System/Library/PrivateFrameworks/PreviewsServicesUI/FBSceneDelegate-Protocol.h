//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PreviewsServicesUI/FBSceneObserver-Protocol.h>

@class FBSMutableSceneSettings, FBSSceneTransitionContext, FBSSceneUpdate, FBScene, NSError, NSSet;

@protocol FBSceneDelegate <FBSceneObserver>

@optional
- (void)scene:(FBScene *)arg1 willUpdateSettings:(FBSMutableSceneSettings *)arg2 withTransitionContext:(FBSSceneTransitionContext *)arg3;
- (void)sceneDidDeactivate:(FBScene *)arg1 withError:(NSError *)arg2;
- (void)sceneDidDeactivate:(FBScene *)arg1 withContext:(FBSSceneTransitionContext *)arg2;
- (void)scene:(FBScene *)arg1 didReceiveActions:(NSSet *)arg2;
- (void)scene:(FBScene *)arg1 willUpdateSettings:(FBSSceneUpdate *)arg2;
@end

