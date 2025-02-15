//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, VCPMAMLModel, VCPObjectPool, VCPPoolBasedPixelBufferCreator, VCPPreAnalysisImageLoader, VNSession;

@interface VCPMADSceneLibraryProcessingTask
{
    VCPPoolBasedPixelBufferCreator *_monochromeBufferCreator;	// 8 = 0x8
    VCPPreAnalysisImageLoader *_imageLoader;	// 16 = 0x10
    VNSession *_session;	// 24 = 0x18
    VCPObjectPool *_ivsPool;	// 32 = 0x20
    VCPMAMLModel *_rotationModel;	// 40 = 0x28
    VCPPoolBasedPixelBufferCreator *_rotationBufferCreator;	// 48 = 0x30
    VCPPoolBasedPixelBufferCreator *_embeddingBufferCreator;	// 56 = 0x38
}

+ (unsigned long long)taskID;	// IMP=0x00200000000f7315
+ (id)name;	// IMP=0x00100000000f7308
+ (id)taskWithPhotoLibraries:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000f7188
- (void).cxx_destruct;	// IMP=0x00200000000f99f1
- (_Bool)run:(id *)arg1;	// IMP=0x00100000000f983f
- (int)processAllAssetsInPhotoLibrary:(id)arg1 withAnalysisDatabase:(id)arg2 andProgress:(id)arg3;	// IMP=0x00100000000f8a98
- (int)_dataMigrationIfNeededForPhotoLibrary:(id)arg1 withAnalysisDatabase:(id)arg2 andProgress:(id)arg3;	// IMP=0x00100000000f7a65
- (int)_dataMigrationWithAssets:(id)arg1;	// IMP=0x00100000000f73d4
- (id)assetPriorities;	// IMP=0x00100000000f73c7
- (id)batchWithAnalysisDatabase:(id)arg1 allowDownload:(_Bool)arg2 cancelBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f7335
- (MISSING_TYPE *)shouldProcessAsset: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000f7320
- (void)dealloc;	// IMP=0x00100000000f7253
- (id)initWithPhotoLibraries:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000f6932

@end

