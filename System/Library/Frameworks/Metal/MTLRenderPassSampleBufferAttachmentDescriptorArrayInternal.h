//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLRenderPassSampleBufferAttachmentDescriptorArray.h"

@class MTLRenderPassSampleBufferAttachmentDescriptorInternal;

__attribute__((visibility("hidden")))
@interface MTLRenderPassSampleBufferAttachmentDescriptorArrayInternal : MTLRenderPassSampleBufferAttachmentDescriptorArray
{
    MTLRenderPassSampleBufferAttachmentDescriptorInternal *_sampleDescriptors[4];	// 8 = 0x8
}

- (id)_descriptorAtIndex:(unsigned long long)arg1;	// IMP=0x000000000014608b
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;	// IMP=0x000000000014600c
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x0000000000145f91
- (void)dealloc;	// IMP=0x0000000000145f30

@end

