//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNDisallowedList;

__attribute__((visibility("hidden")))
@interface VNCoreSceneUnderstandingDetectorImageClassificationConfiguration
{
    float _minimumConfidence;	// 16 = 0x10
    VNDisallowedList *_disallowedList;	// 24 = 0x18
    unsigned long long _maximumLeafClassifications;	// 32 = 0x20
    unsigned long long _maximumHierarchicalClassifications;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000372616
@property unsigned long long maximumHierarchicalClassifications; // @synthesize maximumHierarchicalClassifications=_maximumHierarchicalClassifications;
@property unsigned long long maximumLeafClassifications; // @synthesize maximumLeafClassifications=_maximumLeafClassifications;
@property float minimumConfidence; // @synthesize minimumConfidence=_minimumConfidence;
@property(retain) VNDisallowedList *disallowedList; // @synthesize disallowedList=_disallowedList;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000372501
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000372327
- (id)initWithObservationsRecipient:(id)arg1;	// IMP=0x00000000003721b5

@end

