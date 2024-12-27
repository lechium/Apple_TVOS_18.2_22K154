//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAAsset, MADownloadOptions;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _HKMobileAssetDownloadOperation : NSObject
{
    MAAsset *_asset;	// 8 = 0x8
    MADownloadOptions *_downloadOptions;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    CDUnknownBlockType _completion;	// 32 = 0x20
    long long _retryCount;	// 40 = 0x28
    long long _maxNumberOfRetriesAllowed;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000001d49c
- (void)_queue_downloadAsset;	// IMP=0x0000000000256b59
- (void)_queue_transitionToState:(long long)arg1;	// IMP=0x000000000001d0da
- (void)_queue_transitionToCompleted;	// IMP=0x000000000001d378
- (void)_queue_transitionToFailureWithDownloadResult:(long long)arg1;	// IMP=0x00000000002569eb
- (void)_queue_transitionToDownloadingAsset;	// IMP=0x000000000001d2d1
- (void)_queue_transitionToInitialized;	// IMP=0x000000000001d0c6
- (void)_queue_callCompletionWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x000000000001d439
- (void)_queue_run;	// IMP=0x000000000001d1ed
- (void)run;	// IMP=0x000000000001d18c
- (id)description;	// IMP=0x0000000000256962
- (id)initWithAsset:(id)arg1 queue:(id)arg2 downloadOptions:(id)arg3 maxNumberOfRetriesAllowed:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000256759

@end

