//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVFigAssetWriterAudioTrack
{
    NSMutableArray *_pendingAudioSampleBuffers;	// 96 = 0x60
}

- (_Bool)markEndOfDataReturningError:(id *)arg1;	// IMP=0x00000000000c54bc
- (void)prepareToEndSession;	// IMP=0x00000000000c5477
- (_Bool)addSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id *)arg2;	// IMP=0x00000000000c5141
- (_Bool)_flushPendingSampleBuffersReturningError:(id *)arg1;	// IMP=0x00000000000c4efe
- (int)_attachToFigAssetWriterUsingFormatSpecification:(id)arg1 sourcePixelBufferAttributes:(id)arg2 multiPass:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000000c4d29
- (void)dealloc;	// IMP=0x00000000000c4ce7
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 multiPass:(_Bool)arg6 error:(id *)arg7;	// IMP=0x00000000000c4c77

@end

