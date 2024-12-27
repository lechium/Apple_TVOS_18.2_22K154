//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCVideoCaptureConverter : NSObject
{
    unsigned int _destinationFramerate;	// 8 = 0x8
    unsigned int _sourceFramerate;	// 12 = 0xc
    double _throttleRate;	// 16 = 0x10
    unsigned int _sourceFrameCount;	// 24 = 0x18
    unsigned int _lastDestinationFrameCount;	// 28 = 0x1c
    _Bool _isThrottling;	// 32 = 0x20
    id _convertedFrameHandlerContext;	// 40 = 0x28
    CDUnknownFunctionPointerType _convertedFrameHandler;	// 48 = 0x30
}

@property(nonatomic) unsigned int destinationFramerate; // @synthesize destinationFramerate=_destinationFramerate;
@property(nonatomic) unsigned int sourceFramerate; // @synthesize sourceFramerate=_sourceFramerate;
- (void)reactionDidStart:(id)arg1;	// IMP=0x0000000000351694
- (void)cameraAvailabilityDidChange:(_Bool)arg1;	// IMP=0x000000000035168e
- (void)thermalLevelDidChange:(int)arg1;	// IMP=0x0000000000351688
- (id)clientCaptureRule;	// IMP=0x0000000000351680
- (void)avConferencePreviewError:(id)arg1;	// IMP=0x000000000035161f
- (void)sourceFrameRateDidChange:(unsigned int)arg1;	// IMP=0x000000000035160d
- (_Bool)onVideoFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 attribute:(CDStruct_51555cf6)arg3;	// IMP=0x0000000000351605
- (void)updateThrottleRate;	// IMP=0x00000000003514cf
- (_Bool)processFrame:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x000000000035149c
- (void)dealloc;	// IMP=0x00000000003511a1
- (id)initWithConvertedFrameHandler:(CDUnknownFunctionPointerType)arg1 context:(id)arg2;	// IMP=0x0000000000350dd3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

