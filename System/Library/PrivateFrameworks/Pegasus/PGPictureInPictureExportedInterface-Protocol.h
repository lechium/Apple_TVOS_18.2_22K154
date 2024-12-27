//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Pegasus/NSObject-Protocol.h>

@class BKSAnimationFenceHandle, NSDictionary;

@protocol PGPictureInPictureExportedInterface <NSObject>
- (oneway void)handleCommand:(NSDictionary *)arg1;
- (oneway void)setResourcesUsageReductionReasons:(unsigned long long)arg1;
- (oneway void)setStashedOrUnderLock:(_Bool)arg1;
- (oneway void)actionButtonTapped;
- (oneway void)hostedWindowSizeChangeEnded;
- (oneway void)hostedWindowSizeChangeBegan;
- (oneway void)updateHostedWindowSize:(struct CGSize)arg1 animationType:(long long)arg2 initialSpringVelocity:(double)arg3 synchronizationFence:(BKSAnimationFenceHandle *)arg4;
- (oneway void)pagingSkipByNumberOfPages:(long long)arg1;
- (oneway void)pictureInPictureInvalidated;
- (oneway void)updatePictureInPicturePossible:(_Bool)arg1;
- (oneway void)pictureInPictureCancelRequestedAnimated:(_Bool)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
- (oneway void)endTwoStagePictureInPictureStopWithCompletionBlock:(void (^)(_Bool, NSError *))arg1;
- (oneway void)beginTwoStagePictureInPictureStopByRestoringUserInterfaceWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (oneway void)pictureInPictureStopRequestedAnimated:(_Bool)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
- (oneway void)pictureInPictureStartRequestedAnimated:(_Bool)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
@end

