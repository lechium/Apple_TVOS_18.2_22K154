//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VFX/NSObject-Protocol.h>

@class NSURL;
@protocol MTLTexture;

@protocol VFXMaterialPropertyTextureProviderHelper <NSObject>
- (id <MTLTexture>)cachedTextureWithURL:(NSURL *)arg1 token:(id *)arg2 didFallbackToDefaultTexture:(_Bool *)arg3;
- (id <MTLTexture>)cachedTextureWithURL:(NSURL *)arg1 token:(id *)arg2;
@end

