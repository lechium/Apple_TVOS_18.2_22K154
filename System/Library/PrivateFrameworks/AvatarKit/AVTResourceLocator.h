//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface AVTResourceLocator : NSObject
{
    NSMutableDictionary *_imageCache;	// 8 = 0x8
    NSURL *_resourcesURL;	// 16 = 0x10
    NSURL *_environmentResourcesURL;	// 24 = 0x18
    NSURL *_animojiResourcesURL;	// 32 = 0x20
    NSURL *_memojiResourcesURL;	// 40 = 0x28
    NSURL *_stickerResourcesURL;	// 48 = 0x30
    NSURL *_poseResourcesURL;	// 56 = 0x38
    NSURL *_memojiAssetsURL;	// 64 = 0x40
    NSURL *_rootCacheURL;	// 72 = 0x48
    NSURL *_subdivDataCacheURL;	// 80 = 0x50
}

+ (id)_resourcePathInDirectoryURL:(id)arg1 subDirectory:(id)arg2 name:(id)arg3 ofType:(id)arg4 isDirectory:(_Bool)arg5;	// IMP=0x006000000001f31a
- (void).cxx_destruct;	// IMP=0x0000000000020871
- (void)deleteLegacyCache;	// IMP=0x000000000002033e
- (void)deleteObsoleteVersionsInCache:(id)arg1 currentVersion:(unsigned long long)arg2;	// IMP=0x000000000001fc18
- (void)initCaches;	// IMP=0x000000000001f6b1
- (id)_init;	// IMP=0x000000000001ecc1

@end

