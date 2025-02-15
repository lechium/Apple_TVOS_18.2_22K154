//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNTextureSource.h"

@class AVPlayer;

__attribute__((visibility("hidden")))
@interface SCNAVPlayerSource : SCNTextureSource
{
    AVPlayer *_player;	// 8 = 0x8
    CDStruct_1e850d63 _data;	// 16 = 0x10
    struct __CVMetalTextureCache *_textureCache;	// 64 = 0x40
    unsigned long long _width;	// 72 = 0x48
    unsigned long long _height;	// 80 = 0x50
}

- (id)metalTextureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3 status:(CDStruct_3d581f42 *)arg4;	// IMP=0x0000000000305630
- (void)cleanup:(struct __C3DRendererContext *)arg1;	// IMP=0x000000000030562a
- (void)connectToProxy:(struct __C3DImageProxy *)arg1;	// IMP=0x0000000000305522
@property(retain, nonatomic) AVPlayer *player;
- (void)dealloc;	// IMP=0x000000000030543f
- (void)unregisterPlayer:(id)arg1;	// IMP=0x0000000000305403
- (void)registerPlayerIfNeeded:(id)arg1;	// IMP=0x0000000000305181
- (id)init;	// IMP=0x0000000000305152

@end

