//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCVideoCapture;

__attribute__((visibility("hidden")))
@interface VCStreamInputVideo
{
    VCVideoCapture *_videoCapture;	// 104 = 0x68
}

- (unsigned int)removeSink:(id)arg1;	// IMP=0x00000000001a6217
- (unsigned int)addSink:(id)arg1;	// IMP=0x00000000001a6115
- (void)invalidate;	// IMP=0x00000000001a60c3
- (void)dealloc;	// IMP=0x00000000001a605e
- (id)initWithStreamInputID:(id)arg1 format:(struct opaqueCMFormatDescription *)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 remoteQueue:(id)arg5;	// IMP=0x00000000001a5da3

@end

