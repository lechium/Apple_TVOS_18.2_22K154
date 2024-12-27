//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VFX/NSObject-Protocol.h>

@class AVCaptureDevice;

@protocol VFXCaptureDeviceOutputConsumer <NSObject>
@property(nonatomic, getter=isVideoMirrored) _Bool videoMirrored;
@property(nonatomic) _Bool automaticallyAdjustsVideoMirroring;
- (void)setPixelBuffer:(struct __CVBuffer *)arg1 fromDevice:(AVCaptureDevice *)arg2;
- (void)setSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromDevice:(AVCaptureDevice *)arg2;
- (void)setPixelBuffer:(struct __CVBuffer *)arg1;
- (void)setSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
@end

