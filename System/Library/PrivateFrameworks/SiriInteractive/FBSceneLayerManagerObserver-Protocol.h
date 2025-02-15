//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriInteractive/NSObject-Protocol.h>

@class FBSceneLayerManager;

@protocol FBSceneLayerManagerObserver <NSObject>

@optional
- (void)sceneLayerManagerDidUpdateLayers:(FBSceneLayerManager *)arg1;
- (void)sceneLayerManagerDidStopTrackingLayers:(FBSceneLayerManager *)arg1;
- (void)sceneLayerManagerDidStartTrackingLayers:(FBSceneLayerManager *)arg1;
@end

