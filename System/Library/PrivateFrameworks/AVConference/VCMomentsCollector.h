//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VCMediaRecorder;

__attribute__((visibility("hidden")))
@interface VCMomentsCollector : NSObject
{
    long long _streamToken;	// 8 = 0x8
    VCMediaRecorder *_mediaRecorder;	// 16 = 0x10
}

- (void)cleanUpActiveRequests;	// IMP=0x0000000000172f93
- (void)stream:(id)arg1 addAudioSampleBuffer:(struct opaqueVCAudioBufferList *)arg2 timestamp:(unsigned int)arg3;	// IMP=0x0000000000172f7f
- (void)stream:(id)arg1 addVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 cameraStatusBits:(unsigned char)arg3 timestamp:(unsigned int)arg4;	// IMP=0x0000000000172f68
- (void)dealloc;	// IMP=0x0000000000172e5b
- (id)initWithStreamToken:(long long)arg1;	// IMP=0x0000000000172d8e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

