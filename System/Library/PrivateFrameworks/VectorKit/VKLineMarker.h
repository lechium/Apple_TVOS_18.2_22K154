//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VKMarker.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VKLineMarker : VKMarker
{
    struct shared_ptr<md::LabelFeatureMarker> _labelFeatureMarker;	// 8 = 0x8
}

+ (id)markerWithLabelFeatureMarker:(const void *)arg1;	// IMP=0x00600000005317b0
- (id).cxx_construct;	// IMP=0x00000000005316f0
- (void).cxx_destruct;	// IMP=0x00000000005316a0
- (id)featureHandles;	// IMP=0x00000000005313a0
@property(readonly, nonatomic) NSString *localizedName;
- (const void *)labelFeatureMarkerImpl;	// IMP=0x00000000005312e0
- (id)initWithLabelFeatureMarkerPtr:(const void *)arg1;	// IMP=0x00000000005311e0

@end

