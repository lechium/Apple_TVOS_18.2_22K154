//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MADVIMachineReadableCodeDetectionRequest, NSString, VCPMADServiceImageAsset, VNImageBasedRequest;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCPMADVIMachineReadableCodeDetectionTask : NSObject
{
    MADVIMachineReadableCodeDetectionRequest *_request;	// 8 = 0x8
    VCPMADServiceImageAsset *_imageAsset;	// 16 = 0x10
    NSString *_signpostPayload;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_cancelQueue;	// 32 = 0x20
    struct atomic<bool> _canceled;	// 40 = 0x28
    VNImageBasedRequest *_weakRequest;	// 48 = 0x30
}

+ (id)dependencies;	// IMP=0x0010000000171a79
+ (id)taskWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;	// IMP=0x0010000000171861
- (void).cxx_destruct;	// IMP=0x0000000000172af4
- (int)run;	// IMP=0x0000000000171c5a
- (_Bool)canReuseResultsForRequest;	// IMP=0x0000000000171b40
- (void)cancel;	// IMP=0x0000000000171a9c
- (_Bool)autoCancellable;	// IMP=0x0000000000171a94
- (float)resourceRequirement;	// IMP=0x0000000000171a86
- (id)initWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;	// IMP=0x0000000000171767

@end

