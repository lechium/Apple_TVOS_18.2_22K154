//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MADRemoveBackgroundMaskRequest, VCPMADServiceImageAsset;

__attribute__((visibility("hidden")))
@interface MADImageRemoveBackgroundMaskTask
{
    MADRemoveBackgroundMaskRequest *_request;	// 8 = 0x8
    VCPMADServiceImageAsset *_imageAsset;	// 16 = 0x10
}

+ (id)dependencies;	// IMP=0x00100000002fe26d
+ (id)taskWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;	// IMP=0x00100000002fe055
- (void).cxx_destruct;	// IMP=0x00000000003002cd
- (int)run;	// IMP=0x00000000002fe27a
- (id)initWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;	// IMP=0x00000000002fdf8e

@end

