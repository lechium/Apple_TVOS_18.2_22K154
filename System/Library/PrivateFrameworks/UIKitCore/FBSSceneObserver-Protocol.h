//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class FBSScene, FBSSceneHostHandle, FBSSceneUpdate, NSSet;

@protocol FBSSceneObserver <NSObject>

@optional
- (void)sceneWillInvalidate:(FBSScene *)arg1;
- (NSSet *)scene:(FBSScene *)arg1 handleActions:(NSSet *)arg2;
- (void)scene:(FBSScene *)arg1 didUpdateClientSettings:(FBSSceneUpdate *)arg2;
- (void)scene:(FBSScene *)arg1 didUpdateSettings:(FBSSceneUpdate *)arg2;
- (void)scene:(FBSScene *)arg1 didUpdateHostHandle:(FBSSceneHostHandle *)arg2;
@end

