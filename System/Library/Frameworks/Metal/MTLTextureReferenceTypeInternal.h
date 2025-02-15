//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLTextureReferenceType.h"

__attribute__((visibility("hidden")))
@interface MTLTextureReferenceTypeInternal : MTLTextureReferenceType
{
    unsigned long long _dataType;	// 8 = 0x8
    unsigned long long _textureDataType;	// 16 = 0x10
    unsigned long long _textureType;	// 24 = 0x18
    unsigned long long _access;	// 32 = 0x20
    _Bool _isDepthTexture;	// 40 = 0x28
}

- (_Bool)isDepthTexture;	// IMP=0x000000000014fb0d
- (unsigned long long)access;	// IMP=0x000000000014fafc
- (unsigned long long)textureType;	// IMP=0x000000000014faeb
- (unsigned long long)textureDataType;	// IMP=0x000000000014fada
- (unsigned long long)dataType;	// IMP=0x000000000014fac9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014fa37
- (id)formattedDescription:(unsigned long long)arg1 withPrintedTypes:(id)arg2;	// IMP=0x000000000014f88e
- (void)dealloc;	// IMP=0x000000000014f85f
- (id)initWithDataType:(unsigned long long)arg1 textureType:(unsigned long long)arg2 access:(unsigned long long)arg3 isDepthTexture:(_Bool)arg4;	// IMP=0x000000000014f7dc

@end

