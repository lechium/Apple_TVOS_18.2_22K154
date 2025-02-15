//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, VCMediaRecorderHistoryBuffer, VideoAttributes;
@protocol OS_dispatch_queue, VCMovieWriterProtocol;

__attribute__((visibility("hidden")))
@interface VCMediaRecorderHistory : NSObject
{
    NSObject<OS_dispatch_queue> *_recordingQueue;	// 8 = 0x8
    VCMediaRecorderHistoryBuffer *_localAudioBuffer;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 24 = 0x18
    NSMutableDictionary *_writers;	// 32 = 0x20
    id <VCMovieWriterProtocol> _writer;	// 40 = 0x28
    NSString *_masterTransactionID;	// 48 = 0x30
    NSMutableArray *_pendingRequests;	// 56 = 0x38
    VCMediaRecorderHistoryBuffer *_frameBuffer;	// 64 = 0x40
    VCMediaRecorderHistoryBuffer *_remoteAudioBuffer;	// 72 = 0x48
    NSMutableDictionary *_completionHandlers;	// 80 = 0x50
    NSMutableDictionary *_stillImageURLs;	// 88 = 0x58
    VideoAttributes *_targetScreenAttributes;	// 96 = 0x60
    struct __CVPixelBufferPool *_bufferPool;	// 104 = 0x68
    struct CGSize _bufferPoolResolution;	// 112 = 0x70
    struct __CVPixelBufferPool *_copyPool;	// 128 = 0x80
    struct OpaqueVTPixelTransferSession *_transferSession;	// 136 = 0x88
    struct OpaqueVTPixelTransferSession *_copyTransferSession;	// 144 = 0x90
    int _captureHeight;	// 152 = 0x98
    int _captureWidth;	// 156 = 0x9c
    _Bool _resize;	// 160 = 0xa0
    _Bool _isFirstFrame;	// 161 = 0xa1
    int _imageType;	// 164 = 0xa4
    struct __CFAllocator *_audioSampleBufferAllocator;	// 168 = 0xa8
    struct tagVCMediaRecorderHistoryAudioFormat _localFormat;	// 176 = 0xb0
    struct tagVCMediaRecorderHistoryAudioFormat _remoteFormat;	// 224 = 0xe0
    struct __CFAllocator *_frameAllocator;	// 272 = 0x110
    _Bool _retainPixelBufferEnabled;	// 280 = 0x118
    struct os_unfair_lock_s _targetScreenAttributesLock;	// 284 = 0x11c
    int _videoCodec;	// 288 = 0x120
}

+ (int)rewriteMovieMetadataWithURL:(id)arg1 transactionID:(id)arg2;	// IMP=0x00100000000705d0
+ (id)fileNameForMediaType:(unsigned char)arg1 dateString:(id)arg2;	// IMP=0x0010000000070563
+ (_Bool)isRecordingOnlyMediaType:(unsigned char)arg1;	// IMP=0x001000000006d56e
+ (unsigned char)writerModeFromMediaType:(unsigned char)arg1;	// IMP=0x001000000006d4f3
+ (unsigned char)mediaTypeFromWriterMode:(unsigned char)arg1;	// IMP=0x001000000006d479
- (void)cleanupTransferSession;	// IMP=0x0000000000072107
- (void)setCompletionHandler:(CDUnknownBlockType)arg1 forTransactionID:(id)arg2;	// IMP=0x00000000000720c3
- (void)registerDirectoryWithURL:(id)arg1;	// IMP=0x00000000000720bd
- (void)appendSampleWithWriter:(id)arg1 buffer:(id)arg2 sample:(struct opaqueCMSampleBuffer *)arg3 mediaType:(unsigned char)arg4;	// IMP=0x0000000000071ff2
- (unsigned char)_mediaTypeForBuffer:(id)arg1;	// IMP=0x0000000000071fcc
- (void)flushHistoryBuffers;	// IMP=0x0000000000071f48
- (void)handlePendingRequestsWithSourceURL:(id)arg1 error:(id)arg2;	// IMP=0x0000000000071ab0
- (void)handlePendingRequestSuccessWithSourceURL:(id)arg1;	// IMP=0x00000000000719a1
- (void)handlePendingRequestWithError:(id)arg1;	// IMP=0x00000000000717b2
- (void)handleSinglePendingRequestWithTransactionID:(id)arg1 sourceURL:(id)arg2;	// IMP=0x000000000007106a
- (id)handleCopyRequestWithTransactionID:(id)arg1 sourceURL:(id)arg2 errorCode:(int *)arg3;	// IMP=0x000000000007069f
- (id)fileURLWithDirectoryURL:(id)arg1 transactionID:(id)arg2 type:(unsigned char)arg3;	// IMP=0x00000000000705c8
- (id)fileExtensionForMediaType:(unsigned char)arg1;	// IMP=0x0000000000070513
- (void)setUpWriterWithContext:(id)arg1 fileURL:(id)arg2 stillImageTime:(CDStruct_1b6d18a9)arg3 visibleRect:(struct CGRect)arg4 cameraStatusBit:(unsigned char)arg5;	// IMP=0x00000000000702ec
- (void)setupResizingSessionsWithVisibleRect:(struct CGRect)arg1 cameraStatusBit:(unsigned char)arg2;	// IMP=0x00000000000700d5
- (CDStruct_1b6d18a9)setUpStillImageWithContext:(id)arg1 visibleRect:(struct CGRect *)arg2 cameraStatusBit:(char *)arg3 imageType:(int)arg4;	// IMP=0x000000000006fc98
- (id)writeToLivePhotoToFileWithFrame:(struct __CVBuffer *)arg1 transactionID:(id)arg2 directoryURL:(id)arg3 imageType:(int)arg4 cameraStatusBits:(unsigned char)arg5;	// IMP=0x000000000006fc87
- (id)writeToFileWithTimestamp:(unsigned int)arg1 transactionID:(id)arg2 directoryURL:(id)arg3 imageType:(int)arg4;	// IMP=0x000000000006fc76
@property(nonatomic) int videoCodec; // @synthesize videoCodec=_videoCodec;
@property(nonatomic) int imageType; // @synthesize imageType=_imageType;
- (void)cancelRequestWithTransactionID:(id)arg1;	// IMP=0x000000000006f48f
- (void)stopProcessingTransactionID:(id)arg1;	// IMP=0x000000000006f15e
- (void)dispatchedFinishWritingAllRequests;	// IMP=0x000000000006e6f5
- (void)historyBuffer:(id)arg1 didDequeueSample:(struct opaqueCMSampleBuffer *)arg2 timestamp:(unsigned int)arg3;	// IMP=0x000000000006dea6
- (id)_getActiveWriters;	// IMP=0x000000000006de3f
- (void)endRecording:(id)arg1 timestamp:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006db6c
- (void)startRecordingWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006db66
- (void)dispatchedStartRecordingWithContext:(id)arg1 fileURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006d7de
- (void)invokeStartCompletionHandler:(CDUnknownBlockType)arg1 withErrorCode:(int)arg2 ontoRecordingQueue:(_Bool)arg3;	// IMP=0x000000000006d689
- (void)setUpCaptureFormatForWriter:(id)arg1 atTimestamp:(unsigned int)arg2;	// IMP=0x000000000006d587
- (void)takeLivePhotoWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006d473
- (void)takePhotoWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006cd81
- (void)setFrameRate:(float)arg1;	// IMP=0x000000000006cbdb
- (void)dealloc;	// IMP=0x000000000006c350
- (id)initWithDelegateQueue:(id)arg1;	// IMP=0x000000000006c1b7
- (_Bool)setUpVideoBuffers;	// IMP=0x000000000006c04a
- (_Bool)setUpAudioBuffers;	// IMP=0x000000000006bec3
- (_Bool)setUpDelegateQueue:(id)arg1;	// IMP=0x000000000006be1d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

