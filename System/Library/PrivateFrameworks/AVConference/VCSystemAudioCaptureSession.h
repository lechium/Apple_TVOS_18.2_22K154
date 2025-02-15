//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCAudioIO;

__attribute__((visibility("hidden")))
@interface VCSystemAudioCaptureSession : NSObject
{
    struct _opaque_pthread_mutex_t _stateLock;	// 8 = 0x8
    struct AudioStreamBasicDescription _audioBasicDescription;	// 72 = 0x48
    unsigned int _samplesPerFrame;	// 112 = 0x70
    struct opaqueCMSimpleQueue *_poolQueue;	// 120 = 0x78
    struct opaqueCMSimpleQueue *_outputQueue;	// 128 = 0x80
    VCAudioIO *_audioIO;	// 136 = 0x88
}

- (void)resetAudioBufferPool;	// IMP=0x000000000029171a
- (void)cleanupQueue:(struct opaqueCMSimpleQueue **)arg1;	// IMP=0x0000000000291699
- (_Bool)createAudioBufferPool;	// IMP=0x00000000002914e0
- (_Bool)stop;	// IMP=0x00000000002913cd
- (_Bool)start;	// IMP=0x00000000002912cb
- (_Bool)setupAudioIOWithConfig:(CDStruct_dea85fb6 *)arg1;	// IMP=0x0000000000290e50
- (void)dealloc;	// IMP=0x0000000000290d24
- (id)initWithConfiguration:(CDStruct_dea85fb6 *)arg1;	// IMP=0x00000000002908fb

@end

