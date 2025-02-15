//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLDepthStencilDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLDepthStencilDescriptorInternal : MTLDepthStencilDescriptor
{
    struct MTLDepthStencilDescriptorPrivate _private;	// 8 = 0x8
}

- (void)setLabel:(id)arg1;	// IMP=0x000000000016c3bc
- (id)label;	// IMP=0x000000000016c3aa
- (void)setBackFaceStencil:(id)arg1;	// IMP=0x000000000016c31d
- (id)backFaceStencil;	// IMP=0x000000000016c2ec
- (void)setFrontFaceStencil:(id)arg1;	// IMP=0x000000000016c262
- (id)frontFaceStencil;	// IMP=0x000000000016c233
- (void)setDepthWriteEnabled:(_Bool)arg1;	// IMP=0x000000000016c222
- (_Bool)isDepthWriteEnabled;	// IMP=0x000000000016c211
- (void)setDepthCompareFunction:(unsigned long long)arg1;	// IMP=0x000000000016c1ff
- (unsigned long long)depthCompareFunction;	// IMP=0x000000000016c1ed
- (id)description;	// IMP=0x000000000016c1d9
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x000000000016bf0d
@property(readonly) const struct MTLDepthStencilDescriptorPrivate *depthStencilPrivate;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016be3a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016bd15
- (unsigned long long)hash;	// IMP=0x000000000016bc8a
- (void)dealloc;	// IMP=0x000000000016bc2c
- (id)init;	// IMP=0x000000000016bbda

@end

