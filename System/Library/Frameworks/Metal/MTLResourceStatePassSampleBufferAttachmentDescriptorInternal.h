//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLResourceStatePassSampleBufferAttachmentDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLResourceStatePassSampleBufferAttachmentDescriptorInternal : MTLResourceStatePassSampleBufferAttachmentDescriptor
{
    struct MTLResourceStatePassSampleBufferAttachmentDescriptorPrivate _private;	// 8 = 0x8
}

- (unsigned long long)hash;	// IMP=0x000000000014dacc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014da52
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014da07
- (unsigned long long)endOfEncoderSampleIndex;	// IMP=0x000000000014d9f5
- (void)setEndOfEncoderSampleIndex:(unsigned long long)arg1;	// IMP=0x000000000014d9e3
- (unsigned long long)startOfEncoderSampleIndex;	// IMP=0x000000000014d9d1
- (void)setStartOfEncoderSampleIndex:(unsigned long long)arg1;	// IMP=0x000000000014d9bf
- (id)sampleBuffer;	// IMP=0x000000000014d9ae
- (void)setSampleBuffer:(id)arg1;	// IMP=0x000000000014d970
- (const struct MTLResourceStatePassSampleBufferAttachmentDescriptorPrivate *)_descriptorPrivate;	// IMP=0x000000000014d960
- (void)dealloc;	// IMP=0x000000000014d91e
- (id)init;	// IMP=0x000000000014d8de

@end

