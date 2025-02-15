//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL;

@protocol VCVideoSource <NSObject>
- (_Bool)isPortraitResolutionCaptureActive;
- (_Bool)cameraSupportsFormatWidth:(int)arg1 height:(int)arg2;
- (int)frameBecameAvailableCount:(int *)arg1 figBufferQueueEmptyCount:(int *)arg2 figBufferQueueErrorCount:(int *)arg3;
- (int)frameCount:(_Bool)arg1;
- (_Bool)isFrontCamera;
- (int)getFrameRate;
- (int)setFrameRate:(int)arg1;
- (int)configureCaptureWithToken:(struct _VCVideoSourceToken)arg1;
- (_Bool)isPreviewRunning;
- (int)copyColorInfo:(const struct __CFDictionary **)arg1;
- (int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)stop:(_Bool)arg1;
- (int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startPreview;

@optional
- (struct tagVCVideoCaptureFeatureStatus)currentVideoFeatureStatus;
- (_Bool)supportsPortraitResolution;
- (_Bool)isInternalCamera;
- (void)setBufferStatsBuffer:(struct tagVCVideoBufferStatistics *)arg1;
- (void)retrieveInitialReportingStats:(struct __CFDictionary *)arg1;
- (void)getReportingStats:(struct __CFDictionary *)arg1;
- (void)setViewPointCorrectionEnabled:(_Bool)arg1;
- (void)updateCenterStageEnabled:(_Bool)arg1 requestCaptureChange:(_Bool)arg2;
- (void)setOrientation:(int)arg1;
- (void)setCameraZoomFactor:(double)arg1 withRate:(double)arg2;
- (void)setCameraZoomFactor:(double)arg1;
- (void)addStickerWithURL:(NSURL *)arg1 atPosition:(struct CGPoint)arg2 identifier:(NSString *)arg3;
- (_Bool)setMemoji:(NSData *)arg1;
- (_Bool)setAnimoji:(NSString *)arg1;
- (int)updateScreenCapture:(NSDictionary *)arg1;
- (int)stopScreenCapture;
- (int)startScreenCapture;
- (int)frameDropsWithShouldReset:(_Bool)arg1;
@end

