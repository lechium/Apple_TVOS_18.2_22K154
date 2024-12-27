//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, PHPhotoLibrary, VCPDatabaseWriter;

@interface VCPEffectsAssetProcessingTask : NSObject
{
    CDUnknownBlockType _progressHandler;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    NSArray *_assets;	// 24 = 0x18
    PHPhotoLibrary *_photoLibrary;	// 32 = 0x20
    VCPDatabaseWriter *_database;	// 40 = 0x28
    struct atomic<bool> _cancel;	// 48 = 0x30
    struct atomic<bool> _started;	// 49 = 0x31
}

+ (id)taskWithAssets:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00200000000d383e
- (void).cxx_destruct;	// IMP=0x00200000000d4a98
- (_Bool)autoCancellable;	// IMP=0x00100000000d4a90
- (void)cancel;	// IMP=0x00100000000d4a85
- (int)run;	// IMP=0x00100000000d48f5
- (int)main;	// IMP=0x00100000000d45ec
- (int)processAsset:(id)arg1;	// IMP=0x00100000000d4127
- (float)resourceRequirement;	// IMP=0x00000000000d4119
- (void)dealloc;	// IMP=0x00100000000d404e
- (int)persistResults:(id)arg1 forAsset:(id)arg2;	// IMP=0x00100000000d38f6
- (id)initWithAssets:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d3667

@end

