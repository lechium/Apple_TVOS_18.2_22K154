//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _SNVGGishFeatureEmbeddingCustomModel : NSObject
{
    MISSING_TYPE *modelDescription;	// 8 = 0x8
    MISSING_TYPE *model;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007e396
- (id)init;	// IMP=0x000000000007e360
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007e281
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007e042

@end

