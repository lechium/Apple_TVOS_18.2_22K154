//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;

@interface SNKShotSegmentationRequest : NSObject
{
    MISSING_TYPE *impl;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001a5e1
@property(nonatomic) float similarityThreshold;
@property(nonatomic) CDStruct_198678f7 minSegmentDuration;
@property(nonatomic) CDStruct_198678f7 hangoverDuration;
@property(nonatomic) float foregroundEnergyPercentile;
@property(nonatomic) float backgroundEnergyPercentile;
@property(nonatomic, copy) NSArray *fileURLs;
- (id)init;	// IMP=0x0000000000019e07

@end

