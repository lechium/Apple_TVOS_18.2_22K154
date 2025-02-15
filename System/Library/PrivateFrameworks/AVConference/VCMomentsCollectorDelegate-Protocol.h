//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/NSObject-Protocol.h>

@class VCMediaStream;

@protocol VCMomentsCollectorDelegate <NSObject>
- (void)cleanUpActiveRequests;
- (void)stream:(VCMediaStream *)arg1 addAudioSampleBuffer:(struct opaqueVCAudioBufferList *)arg2 timestamp:(unsigned int)arg3;
- (void)stream:(VCMediaStream *)arg1 addVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 cameraStatusBits:(unsigned char)arg3 timestamp:(unsigned int)arg4;
@end

