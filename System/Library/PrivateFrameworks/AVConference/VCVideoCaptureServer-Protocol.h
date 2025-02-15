//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/VCVideoSink-Protocol.h>

@class NSString;
@protocol VCVideoSink;

@protocol VCVideoCaptureServer <VCVideoSink>
- (int)getCaptureFrameRateForSource:(int)arg1;
- (void)setCFAvailabilityChange:(_Bool)arg1;
- (void)setCaptureFrameRate:(int)arg1;
- (void)setCameraZoomAvailable:(_Bool)arg1 currentZoomFactor:(double)arg2 maxZoomFactor:(double)arg3;
- (void)handleCaptureEvent:(NSString *)arg1 subType:(NSString *)arg2;
- (void)handleCaptureEvent:(NSString *)arg1;
- (void)onCaptureScreenFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 orientation:(int)arg3;

@optional
@property(readonly, nonatomic) _Bool is1080pCameraAvailable;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) int bestCameraCaptureFrameRate;
// Preceding property had unknown attributes: ?
// Original attribute string: Ti,?,R,N

@property(nonatomic) _Bool followSystemCamera;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

- (void)didStopReacting;
- (void)reactionDidStart:(NSString *)arg1;
- (void)captureSourceVideoFeatureStatusDidChange:(struct tagVCVideoCaptureFeatureStatus)arg1;
- (void)portraitBlurEnabledDidChange:(_Bool)arg1;
- (void)centerStageEnabledDidChange:(_Bool)arg1;
- (void)handleCaptureSourcePositionDidChange:(_Bool)arg1;
- (struct opaqueCMFormatDescription *)newFormatDescriptionForCaptureSource:(int)arg1;
- (void)unregisterVideoSink:(id <VCVideoSink>)arg1 withCaptureSource:(int)arg2;
- (void)registerVideoSink:(id <VCVideoSink>)arg1 withCaptureSource:(int)arg2;
@end

