//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSURL;

__attribute__((visibility("hidden")))
@interface FTMediaAssetManager : NSObject
{
    MISSING_TYPE *photoLibraryProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002909d
- (void)saveVideoWithURL:(NSURL *)arg1 completion:(void (^)(NSString *, NSError *))arg2;	// IMP=0x0000000000028e68
- (void)saveLivePhotoWithPhotoURL:(NSURL *)arg1 videoURL:(NSURL *)arg2 completion:(void (^)(NSString *, NSError *))arg3;	// IMP=0x00000000000283dd
- (id)init;	// IMP=0x0000000000027803

@end

