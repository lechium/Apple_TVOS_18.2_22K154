//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableSet, VCPProgressReporter;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;

@interface MADTaskCoordinator : NSObject
{
    NSArray *_photoLibraries;	// 8 = 0x8
    NSMutableArray *_taskProviders;	// 16 = 0x10
    NSMutableSet *_taskTypes;	// 24 = 0x18
    NSDictionary *_options;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_schedulingQueue;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_schedulingGroup;	// 48 = 0x30
    NSObject<OS_dispatch_group> *_taskGroup;	// 56 = 0x38
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;	// 64 = 0x40
    NSObject<OS_dispatch_semaphore> *_assetTaskPrepareSemaphore;	// 72 = 0x48
    NSObject<OS_dispatch_semaphore> *_assetTaskProcessSemaphore;	// 80 = 0x50
    NSObject<OS_dispatch_semaphore> *_assetTaskPublishSemaphore;	// 88 = 0x58
    unsigned long long _assetTaskProviderIdx;	// 96 = 0x60
    unsigned long long _assetTaskCounter;	// 104 = 0x68
    NSObject<OS_dispatch_semaphore> *_downloadTaskSemaphore;	// 112 = 0x70
    NSObject<OS_dispatch_semaphore> *_downloadCompleteSemaphore;	// 120 = 0x78
    unsigned long long _downloadTaskProviderIdx;	// 128 = 0x80
    unsigned long long _downloadTaskCounter;	// 136 = 0x88
    NSObject<OS_dispatch_semaphore> *_clusterTaskSemaphore;	// 144 = 0x90
    unsigned long long _clusterTaskProviderIdx;	// 152 = 0x98
    unsigned long long _clusterTaskCounter;	// 160 = 0xa0
    CDUnknownBlockType _cancelBlock;	// 168 = 0xa8
    VCPProgressReporter *_progressReporter;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0020000000148d75
- (int)run;	// IMP=0x0010000000148c68
- (void)evaluateScheduling;	// IMP=0x00100000001488e8
- (_Bool)scheduleNextClusterProcessingTask;	// IMP=0x001000000014867f
- (void)executeClusterProcessingTask:(id)arg1 fromTaskProvider:(id)arg2;	// IMP=0x00100000001482ca
- (_Bool)scheduleNextDownloadAssetProcessingTask;	// IMP=0x0010000000148061
- (void)executeDownloadAssetProcessingTask:(id)arg1 fromTaskProvider:(id)arg2;	// IMP=0x0010000000147686
- (_Bool)scheduleNextAssetProcessingTask;	// IMP=0x0010000000147371
- (void)executeAssetProcessingTask:(id)arg1 fromTaskProvider:(id)arg2;	// IMP=0x0010000000146b91
- (id)initWithPhotoLibraries:(id)arg1 taskProviderTypes:(id)arg2 options:(id)arg3 cancelBlock:(CDUnknownBlockType)arg4 progressReporter:(id)arg5;	// IMP=0x0010000000146879
- (int)createTaskProvidersWithPhotoLibraries:(id)arg1 taskProviderTypes:(id)arg2;	// IMP=0x0010000000145ce0
- (unsigned long long)taskIDForProviderType:(long long)arg1;	// IMP=0x0010000000145c11
- (void)dealloc;	// IMP=0x0010000000145ad6

@end

