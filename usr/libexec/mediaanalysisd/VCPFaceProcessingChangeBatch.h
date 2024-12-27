//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, PHPhotoLibrary, VCPFaceClusterer, VCPPhotosFaceProcessingContext;
@protocol OS_dispatch_queue;

@interface VCPFaceProcessingChangeBatch : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    NSMutableArray *_pendingChanges;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_publishQueue;	// 24 = 0x18
    VCPFaceClusterer *_clusterer;	// 32 = 0x20
    VCPPhotosFaceProcessingContext *_context;	// 40 = 0x28
}

+ (id)batchForPhotoLibrary:(id)arg1 faceClusterer:(id)arg2 andContext:(id)arg3;	// IMP=0x00400000000d7abb
- (void).cxx_destruct;	// IMP=0x00200000000d82b5
- (_Bool)publishWithError:(id *)arg1;	// IMP=0x00100000000d7f59
- (void)_publishPendingChanges;	// IMP=0x00100000000d7cdf
- (int)updateAsset:(id)arg1 withAnalysis:(id)arg2;	// IMP=0x00100000000d7b73
- (id)initWithPhotoLibrary:(id)arg1 faceClusterer:(id)arg2 andContext:(id)arg3;	// IMP=0x00100000000d7959

@end

