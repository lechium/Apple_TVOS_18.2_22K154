//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VCTextJitterBuffer : NSObject
{
    struct tagVCTextJitterBufferConfiguration _configuration;	// 8 = 0x8
    _Bool _resetRequested;	// 24 = 0x18
    id _delegate;	// 32 = 0x20
    struct JitterPreloadQueue_t *_preloadQueue;	// 40 = 0x28
    struct JitterQueue_t *_jitterQueue;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_heartbeat;	// 56 = 0x38
    unsigned int _lastSequenceNumber;	// 64 = 0x40
    _Bool _firstFrameReceived;	// 68 = 0x44
}

- (void)heartbeat;	// IMP=0x0000000000386f00
- (void)stopHeartbeat;	// IMP=0x0000000000386ed1
- (_Bool)startHeartbeat;	// IMP=0x0000000000386b08
- (void)jitterQueuePushPacket:(struct tagAudioPacket *)arg1;	// IMP=0x0000000000386a89
- (void)enqueuePacket:(struct tagAudioPacket *)arg1;	// IMP=0x0000000000386a78
- (void)stop;	// IMP=0x00000000003868b6
- (_Bool)start;	// IMP=0x00000000003866f0
- (void)releaseTextFrame:(struct tagAudioFrame *)arg1;	// IMP=0x00000000003866df
- (struct tagAudioFrame *)allocTextFrame;	// IMP=0x00000000003866d1
- (void)releaseTextPacket:(struct tagAudioPacket *)arg1;	// IMP=0x000000000038667f
- (struct tagAudioPacket *)allocTextPacket;	// IMP=0x0000000000386671
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000386660
- (id)delegate;	// IMP=0x0000000000386652
- (void)dealloc;	// IMP=0x000000000038645b
- (id)initWithConfiguration:(struct tagVCTextJitterBufferConfiguration *)arg1;	// IMP=0x000000000038621f

@end

