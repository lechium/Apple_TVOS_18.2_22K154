//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MLMultiArray, NSArray, NSNumber;

@interface SNKShotSegmentationResult : NSObject
{
    MISSING_TYPE *impl;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001b6a6
@property(nonatomic, retain) NSNumber *exemplarIndex;
@property(nonatomic, copy) NSArray *segments;
@property(nonatomic, retain) MLMultiArray *exemplarEmbedding;
- (id)init;	// IMP=0x000000000001af9b

@end

