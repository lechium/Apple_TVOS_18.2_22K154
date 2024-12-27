//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Pegasus/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString, PGHostedWindowHostingHandle;

@protocol PGPictureInPictureRemoteObjectInterface <NSObject>
- (void)pagingAccessorySetCurrentPage:(unsigned long long)arg1 numberOfPages:(unsigned long long)arg2;
- (oneway void)stopPictureInPictureAndRestoreUserInterface;
- (oneway void)setExemptAttributionOverride:(NSString *)arg1;
- (oneway void)setActivitySessionIdentifier:(NSString *)arg1;
- (oneway void)updateMenuItems:(NSArray *)arg1;
- (oneway void)updatePlaybackStateWithDiff:(NSDictionary *)arg1;
- (oneway void)setPictureInPictureShouldStartWhenEnteringBackground:(_Bool)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (oneway void)cleanupWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (oneway void)stopPictureInPictureAnimated:(_Bool)arg1 withFinalInterfaceOrientation:(long long)arg2 finalLayerFrame:(struct CGRect)arg3 completionHandler:(void (^)(_Bool, NSError *, BKSAnimationFenceHandle *))arg4;
- (oneway void)setupStopAnimated:(_Bool)arg1 needsApplicationActivation:(_Bool)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (oneway void)rotateContentContainer:(long long)arg1 withCompletionHandler:(void (^)(_Bool, NSError *, BKSAnimationFenceHandle *))arg2;
- (oneway void)checkActivePictureInPictureCancellationPolicyWithCompletion:(void (^)(_Bool, NSError *, _Bool, _Bool))arg1;
- (oneway void)updatePreferredContentSize:(struct CGSize)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
- (oneway void)updateSourceSceneSessionPersistentIdentifierForInteractiveTransitionAnimationUponBackgrounding:(NSString *)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
- (oneway void)updateInitialLayerFrameForInteractiveTransitionAnimationUponBackgrounding:(struct CGRect)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
- (oneway void)startPictureInPictureAnimated:(_Bool)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (oneway void)setupStartAnimated:(_Bool)arg1 hostedWindowHostingHandle:(PGHostedWindowHostingHandle *)arg2 sceneSessionPersistentIdentifier:(NSString *)arg3 preferredContentSize:(struct CGSize)arg4 initialInterfaceOrientation:(long long)arg5 initialLayerFrame:(struct CGRect)arg6 completionHandler:(void (^)(_Bool, NSError *))arg7;
- (oneway void)initializePictureInPictureWithControlsStyle:(long long)arg1 preferredContentSize:(struct CGSize)arg2 sceneIdentifier:(NSString *)arg3 affectsAppLifeCycle:(_Bool)arg4 completionHandler:(void (^)(_Bool, NSError *))arg5;
@end

