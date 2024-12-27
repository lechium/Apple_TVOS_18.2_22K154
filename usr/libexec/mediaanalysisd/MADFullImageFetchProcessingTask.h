//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHPhotoLibrary;

@interface MADFullImageFetchProcessingTask
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
}

+ (unsigned long long)taskID;	// IMP=0x002000000009cec4
+ (id)name;	// IMP=0x001000000009ceb7
- (void).cxx_destruct;	// IMP=0x002000000009cfc3
- (id)batchWithAnalysisDatabase:(id)arg1 allowDownload:(_Bool)arg2 cancelBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000009cf3a
- (_Bool)shouldProcessAsset:(id)arg1;	// IMP=0x001000000009cecf
- (void)dealloc;	// IMP=0x001000000009ce3e
- (id)initWithFetchBlock:(CDUnknownBlockType)arg1 photoLibraryWithURL:(id)arg2 cancelBlock:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000009cd66

@end

