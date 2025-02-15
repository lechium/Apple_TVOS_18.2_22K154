//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString, VCCannedVideoCaptureSource;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CannedVideoCapture
{
    struct CannedVideoCapturePrivate *_pimpl;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_captureSessionQueue;	// 16 = 0x10
    VCCannedVideoCaptureSource *_captureSource;	// 24 = 0x18
}

+ (int)createPixelBufferPool:(struct __CVPixelBufferPool **)arg1 withWidth:(int)arg2 height:(int)arg3;	// IMP=0x00100000003ec47a
+ (int)cannedVideoTypeForPath:(id)arg1;	// IMP=0x00100000003ec3d2
- (int)frameCount:(_Bool)arg1;	// IMP=0x00000000003ec3ca
- (_Bool)isPortraitResolutionCaptureActive;	// IMP=0x00000000003ec3c2
- (int)frameBecameAvailableCount:(int *)arg1 figBufferQueueEmptyCount:(int *)arg2 figBufferQueueErrorCount:(int *)arg3;	// IMP=0x00000000003ec3b7
- (_Bool)cameraSupportsFormatWidth:(int)arg1 height:(int)arg2;	// IMP=0x00000000003ec3af
- (_Bool)isFrontCamera;	// IMP=0x00000000003ec3a7
- (int)stop:(_Bool)arg1;	// IMP=0x00000000003ec29e
- (int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;	// IMP=0x00000000003ec241
- (int)startPreview;	// IMP=0x00000000003ec127
- (int)getFrameRate;	// IMP=0x00000000003ec10a
- (int)setFrameRate:(int)arg1;	// IMP=0x00000000003ec102
- (_Bool)isPreviewRunning;	// IMP=0x00000000003ec0ee
- (int)configureCaptureWithToken:(struct _VCVideoSourceToken)arg1;	// IMP=0x00000000003ec0d8
- (int)copyColorInfo:(const struct __CFDictionary **)arg1;	// IMP=0x00000000003ec046
- (void)setOrientation:(int)arg1;	// IMP=0x00000000003ec040
- (int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;	// IMP=0x00000000003ebfdc
- (void)dealloc;	// IMP=0x00000000003ebf57
- (id)initWithCaptureServer:(id)arg1 protocolFunctions:(const struct tagVCVideoCaptureServerProtocolRealtimeInstanceVTable *)arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5 videoSourceToken:(struct _VCVideoSourceToken)arg6 video:(id)arg7 isCamera:(_Bool)arg8 error:(int *)arg9;	// IMP=0x00000000003eba8d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

