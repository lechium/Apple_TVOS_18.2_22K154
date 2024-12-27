//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLRenderPassColorAttachmentDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLRenderPassColorAttachmentDescriptorInternal : MTLRenderPassColorAttachmentDescriptor
{
    struct MTLRenderPassAttachmentDescriptorPrivate _private;	// 8 = 0x8
}

+ (id)attachmentDescriptor;	// IMP=0x0060000000143e1f
- (const struct MTLRenderPassAttachmentDescriptorPrivate *)_descriptorPrivate;	// IMP=0x000000000014479b
- (void)setStoreActionOptions:(unsigned long long)arg1;	// IMP=0x0000000000144789
- (unsigned long long)storeActionOptions;	// IMP=0x0000000000144777
- (void)setStoreAction:(unsigned long long)arg1;	// IMP=0x0000000000144765
- (unsigned long long)storeAction;	// IMP=0x0000000000144753
- (void)setLoadAction:(unsigned long long)arg1;	// IMP=0x0000000000144741
- (unsigned long long)loadAction;	// IMP=0x000000000014472f
- (_Bool)yInvert;	// IMP=0x000000000014471b
- (void)setYInvert:(_Bool)arg1;	// IMP=0x0000000000144707
- (unsigned long long)resolveDepthPlane;	// IMP=0x00000000001446f2
- (void)setResolveDepthPlane:(unsigned long long)arg1;	// IMP=0x00000000001446dd
- (unsigned long long)resolveSlice;	// IMP=0x00000000001446c8
- (void)setResolveSlice:(unsigned long long)arg1;	// IMP=0x00000000001446b3
- (unsigned long long)resolveLevel;	// IMP=0x00000000001446a1
- (void)setResolveLevel:(unsigned long long)arg1;	// IMP=0x000000000014468f
- (CDStruct_3ead2808)clearColor;	// IMP=0x000000000014466e
- (void)setClearColor:(CDStruct_3ead2808)arg1;	// IMP=0x000000000014464f
- (unsigned long long)depthPlane;	// IMP=0x000000000014463d
- (void)setDepthPlane:(unsigned long long)arg1;	// IMP=0x000000000014462b
- (unsigned long long)slice;	// IMP=0x0000000000144619
- (void)setSlice:(unsigned long long)arg1;	// IMP=0x0000000000144607
- (unsigned long long)level;	// IMP=0x00000000001445f5
- (void)setLevel:(unsigned long long)arg1;	// IMP=0x00000000001445e3
- (id)resolveTexture;	// IMP=0x00000000001445d1
- (void)setResolveTexture:(id)arg1;	// IMP=0x0000000000144547
- (id)texture;	// IMP=0x0000000000144536
- (void)setTexture:(id)arg1;	// IMP=0x00000000001444ae
- (id)description;	// IMP=0x000000000014449a
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000001440a5
- (unsigned long long)hash;	// IMP=0x000000000014408c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014402e
- (void)dealloc;	// IMP=0x0000000000143fd8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000143ebd
- (id)init;	// IMP=0x0000000000143e31

@end

