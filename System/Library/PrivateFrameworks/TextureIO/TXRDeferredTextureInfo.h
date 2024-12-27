//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, TXRTextureInfo;

__attribute__((visibility("hidden")))
@interface TXRDeferredTextureInfo : NSObject
{
    TXRTextureInfo *_info;	// 8 = 0x8
    NSMutableArray *_mipmaps;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000409b
@property(readonly, nonatomic) NSMutableArray *mipmaps; // @synthesize mipmaps=_mipmaps;
@property(retain, nonatomic) TXRTextureInfo *info; // @synthesize info=_info;
- (id)initWithMipmapLevelCount:(unsigned long long)arg1 arrayLength:(unsigned long long)arg2 cubemap:(_Bool)arg3;	// IMP=0x0000000000003f73

@end

