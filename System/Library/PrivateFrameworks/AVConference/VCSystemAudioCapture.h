//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, VCAudioHALPluginRemoteDeviceInfo;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCSystemAudioCapture
{
    struct _opaque_pthread_mutex_t _stateLock;	// 88 = 0x58
    struct {
        struct OpaqueAudioQueue *_field1;
        struct AudioStreamBasicDescription _field2;
        struct AudioQueueBuffer *_field3[10];
        unsigned int _field4;
        int _field5;
    } *_audioRecorderQueue;	// 152 = 0x98
    struct tagVCSystemAudioCaptureTapSettings _tapSettings;	// 160 = 0xa0
    struct AudioStreamBasicDescription _audioBasicDescriptionAudioQueue;	// 184 = 0xb8
    struct AudioStreamBasicDescription _audioBasicDescriptionAudioCapture;	// 224 = 0xe0
    unsigned int _samplesPerFrame;	// 264 = 0x108
    void *_sinkContext;	// 272 = 0x110
    CDUnknownFunctionPointerType _sinkProc;	// 280 = 0x118
    _Bool _firstAudioBufferReceived;	// 288 = 0x120
    struct opaqueVCAudioBufferList *_audioBufferAppendList;	// 296 = 0x128
    struct opaqueVCAudioBufferList *_audioBufferOutputList;	// 304 = 0x130
    double _conversionRatio;	// 312 = 0x138
    unsigned int _timestamp;	// 320 = 0x140
    double _hostTime;	// 328 = 0x148
    double _startHostTime;	// 336 = 0x150
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 344 = 0x158
    VCAudioHALPluginRemoteDeviceInfo *_remoteDeviceInfo;	// 352 = 0x160
}

+ (id)newAudioTapWithCaptureContext:(struct __CFString *)arg1 audioFormat:(id)arg2;	// IMP=0x006000000041e3e2
+ (id)newAudioTapWithSessionType:(unsigned int)arg1 audioFormat:(id)arg2;	// IMP=0x006000000041e262
+ (unsigned int)audioTapSessionTypeForInternalSessionType:(unsigned int)arg1;	// IMP=0x006000000041e255
+ (id)newAudioTapWithProcessID:(int)arg1 audioFormat:(id)arg2;	// IMP=0x006000000041e1ac
+ (_Bool)isValidConfiguration:(CDStruct_522513c5 *)arg1;	// IMP=0x006000000041ae27
- (_Bool)stopAudioHALPlugInSource:(unsigned int)arg1;	// IMP=0x000000000041e7d7
- (_Bool)startAudioHALPlugInSource:(unsigned int)arg1;	// IMP=0x000000000041e623
- (void)setupCannedAudioInjection;	// IMP=0x000000000041e61d
- (id)newAudioTapWithAudioStreamBasicDescription:(struct AudioStreamBasicDescription *)arg1;	// IMP=0x000000000041e472
- (int)getQueueState;	// IMP=0x000000000041e0cc
- (void)setQueueState:(int)arg1;	// IMP=0x000000000041e036
- (_Bool)stopAudioQueue;	// IMP=0x000000000041dd16
- (_Bool)stop;	// IMP=0x000000000041da96
- (_Bool)startAudioQueue;	// IMP=0x000000000041b393
- (_Bool)start;	// IMP=0x000000000041b0f4
- (void)dealloc;	// IMP=0x000000000041abc1
- (id)initWithConfiguration:(CDStruct_522513c5 *)arg1;	// IMP=0x000000000041a340

@end

