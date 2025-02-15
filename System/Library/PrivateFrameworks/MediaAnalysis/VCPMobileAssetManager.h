//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface VCPMobileAssetManager : NSObject
{
    NSObject<OS_dispatch_queue> *_assetQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_retrieveAssetOnceQueue;	// 16 = 0x10
    NSMutableDictionary *_assetsURL;	// 24 = 0x18
    NSMutableSet *_assetsNotAvailable;	// 32 = 0x20
}

+ (id)assetVersion:(long long)arg1;	// IMP=0x006000000037340c
+ (long long)assetTypeForName:(id)arg1;	// IMP=0x0060000000373306
+ (id)assetName:(long long)arg1;	// IMP=0x00600000003732be
+ (id)sharedManager;	// IMP=0x0060000000373214
+ (_Bool)isOTAFailTestEnabled;	// IMP=0x006000000037320c
+ (_Bool)isCaptionOTAEnabled;	// IMP=0x0060000000373204
- (void).cxx_destruct;	// IMP=0x00000000003769af
- (int)purgeAllInstalledAssets;	// IMP=0x0000000000376374
- (id)retrieveAssetOnce:(long long)arg1 petWatchDog:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000375f15
- (id)retrieveAssetLocalURL:(long long)arg1;	// IMP=0x0000000000375efe
- (id)retrieveAssetLocalURL:(long long)arg1 petWatchDog:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000375e1a
- (id)retrieveAssetLocalURL:(id)arg1 assetVersion:(id)arg2 petWatchDog:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000003750f1
- (id)downloadMobileAssetIfNeeded:(id)arg1 petWatchDog:(CDUnknownBlockType)arg2;	// IMP=0x00000000003745ac
- (id)queryMobileAssets;	// IMP=0x00000000003740e3
- (id)cloneAsset:(id)arg1 to:(id)arg2;	// IMP=0x00000000003734e8
- (id)init;	// IMP=0x0000000000373134

@end

