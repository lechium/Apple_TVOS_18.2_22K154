//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface MLFeatureProviderConformer : NSObject
{
    _Bool _usingRank5Mapping;	// 8 = 0x8
    _Bool _passthroughStateFeatures;	// 9 = 0x9
    NSArray *_featureDescriptions;	// 16 = 0x10
    NSDictionary *_defaultValues;	// 24 = 0x18
    NSDictionary *_optionalInputTypes;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000010b40c
@property(readonly, nonatomic) _Bool passthroughStateFeatures; // @synthesize passthroughStateFeatures=_passthroughStateFeatures;
@property(readonly, copy, nonatomic) NSDictionary *optionalInputTypes; // @synthesize optionalInputTypes=_optionalInputTypes;
@property(readonly, nonatomic) _Bool usingRank5Mapping; // @synthesize usingRank5Mapping=_usingRank5Mapping;
@property(readonly, copy, nonatomic) NSDictionary *defaultValues; // @synthesize defaultValues=_defaultValues;
@property(readonly, copy, nonatomic) NSArray *featureDescriptions; // @synthesize featureDescriptions=_featureDescriptions;
- (_Bool)_sequenceConcatConsumesOptionalInputNamed:(id)arg1;	// IMP=0x000000000010b311
- (id)_fabricateFeatureForDescription:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010a6bd
- (id)conformFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000109268
- (id)initWithFeatureDescriptions:(id)arg1 defaultValues:(id)arg2 usingRank5Mapping:(_Bool)arg3 optionalInputTypes:(id)arg4 passthroughStateFeatures:(_Bool)arg5;	// IMP=0x000000000010913d

@end

