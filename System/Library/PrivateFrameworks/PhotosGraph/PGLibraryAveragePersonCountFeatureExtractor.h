//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PGFeatureExtractor.h"

@class NSArray, NSString;

@interface PGLibraryAveragePersonCountFeatureExtractor : PGFeatureExtractor
{
}

- (id)init;	// IMP=0x00000000000ca5a0
@property(nonatomic, readonly) long long featureLength;
@property(nonatomic, readonly) NSArray *featureNames;
@property(nonatomic, readonly) NSString *name;
- (id)floatVectorWithEntity:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ca350

@end

