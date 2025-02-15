//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VCPMADResource.h"

@class NSObject, VCPImageCaptionAnalyzer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCPMADImageCaptionResource : VCPMADResource
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    VCPImageCaptionAnalyzer *_imageCaptionAnalyzer;	// 16 = 0x10
    long long _modelType;	// 24 = 0x18
    long long _safetyType;	// 32 = 0x20
}

+ (id)sharedResourceForModelType:(long long)arg1 safetyType:(long long)arg2;	// IMP=0x00600000000c5ae3
- (void).cxx_destruct;	// IMP=0x00000000000c6094
- (void)purge;	// IMP=0x00000000000c6020
@property(readonly, nonatomic) VCPImageCaptionAnalyzer *imageCaptionAnalyzer;
- (long long)inactiveCost;	// IMP=0x00000000000c5cd9
- (long long)activeCost;	// IMP=0x00000000000c5cbe
- (id)initWithModelType:(long long)arg1 safetyType:(long long)arg2;	// IMP=0x00000000000c5a36

@end

