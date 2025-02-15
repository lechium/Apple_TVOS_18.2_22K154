//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MADVIFaceRequest, NSString, VCPMADServiceImageAsset, VNImageBasedRequest;
@protocol MTLDevice, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCPMADVIFaceTask : NSObject
{
    MADVIFaceRequest *_request;	// 8 = 0x8
    VCPMADServiceImageAsset *_imageAsset;	// 16 = 0x10
    id <MTLDevice> _preferredMetalDevice;	// 24 = 0x18
    NSString *_signpostPayload;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_cancelQueue;	// 40 = 0x28
    struct atomic<bool> _canceled;	// 48 = 0x30
    VNImageBasedRequest *_weakFaceRectanglesRequest;	// 56 = 0x38
    VNImageBasedRequest *_weakFaceprintRequest;	// 64 = 0x40
    VNImageBasedRequest *_weakFaceAttributesRequest;	// 72 = 0x48
    VNImageBasedRequest *_weakFaceExpressionsRequest;	// 80 = 0x50
    VNImageBasedRequest *_weakFaceLandmarksRequest;	// 88 = 0x58
}

+ (id)dependencies;	// IMP=0x001000000024b7df
+ (id)taskWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;	// IMP=0x001000000024b5c7
- (void).cxx_destruct;	// IMP=0x000000000024de30
- (int)run;	// IMP=0x000000000024b97e
- (void)cancel;	// IMP=0x000000000024b813
- (_Bool)autoCancellable;	// IMP=0x000000000024b80b
- (float)resourceRequirement;	// IMP=0x000000000024b7fd
- (void)setPreferredMetalDevice:(id)arg1;	// IMP=0x000000000024b7ec
- (id)initWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;	// IMP=0x000000000024b4cd

@end

