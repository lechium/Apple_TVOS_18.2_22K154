//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPVideoSyncFrameDecoder : NSObject
{
    struct CF<OpaqueVTDecompressionSession *> _decompressionSession;	// 8 = 0x8
    _Bool _requiresRotation;	// 16 = 0x10
    struct Rotator *_rotator;	// 24 = 0x18
}

+ (_Bool)isSyncFrameForCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x0060000000174a1e
+ (_Bool)readBigEndianInt:(int *)arg1 fromBlockBuffer:(struct OpaqueCMBlockBuffer *)arg2 forNumBytes:(int)arg3 atOffset:(unsigned long long)arg4;	// IMP=0x0060000000174778
- (id).cxx_construct;	// IMP=0x0000000000176386
- (void).cxx_destruct;	// IMP=0x0000000000176378
- (_Bool)decodeCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 toCMSampleBuffer:(struct opaqueCMSampleBuffer **)arg2 error:(id *)arg3;	// IMP=0x0000000000175547
- (void)dealloc;	// IMP=0x000000000017472a
- (id)initWithDecoderSettings:(id)arg1 formatDescription:(struct opaqueCMFormatDescription *)arg2 rotationAngle:(int)arg3;	// IMP=0x0000000000173fdc

@end

