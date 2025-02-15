//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VCPMADResource.h"

@class CSUTextEncoder, MADTextEmbeddingSafety, MADTextEmbeddingThreshold, NSObject, VUWGallery;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MADTextEmbeddingResource : VCPMADResource
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    CSUTextEncoder *_textEncoder;	// 16 = 0x10
    VUWGallery *_entityGallery;	// 24 = 0x18
    MADTextEmbeddingThreshold *_calibration;	// 32 = 0x20
    MADTextEmbeddingSafety *_safety;	// 40 = 0x28
}

+ (long long)revision;	// IMP=0x0060000000003dca
+ (id)sharedResource:(unsigned long long)arg1;	// IMP=0x0060000000003c52
- (void).cxx_destruct;	// IMP=0x0000000000004ed2
- (void)purge;	// IMP=0x0000000000004df3
@property(readonly, nonatomic) MADTextEmbeddingSafety *safety;
@property(readonly, nonatomic) long long tokenEmbeddingType;
@property(readonly, nonatomic) unsigned long long calibrationVersion;
@property(readonly, nonatomic) MADTextEmbeddingThreshold *calibration;
@property(readonly, nonatomic) VUWGallery *entityGallery;
@property(readonly, nonatomic) CSUTextEncoder *textEncoder;
@property(readonly, nonatomic) unsigned long long version;
- (long long)inactiveCost;	// IMP=0x0000000000003da5
- (long long)activeCost;	// IMP=0x0000000000003d88
- (id)init;	// IMP=0x0000000000003bc9

@end

