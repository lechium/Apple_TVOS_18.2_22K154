//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaAnalysis/VCPMABaseTask.h>

@class NSError, NSObject, PHPhotoLibrary;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;

@interface MADPhotosOnDemandStaticStickerScoreTask : VCPMABaseTask
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    unsigned long long _targetResultCount;	// 16 = 0x10
    NSObject<OS_dispatch_semaphore> *_publishSemaphore;	// 24 = 0x18
    NSObject<OS_dispatch_group> *_publishGroup;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_publishQueue;	// 40 = 0x28
    struct atomic<bool> _publishFailed;	// 48 = 0x30
    NSError *_publishError;	// 56 = 0x38
}

+ (id)taskWithPhotoLibrary:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x004000000012332b
- (void).cxx_destruct;	// IMP=0x00200000001250a6
- (_Bool)run:(id *)arg1;	// IMP=0x0010000000123aa1
- (void)publishResults:(id)arg1;	// IMP=0x00100000001233e3
- (id)initWithPhotoLibrary:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000012301c

@end

