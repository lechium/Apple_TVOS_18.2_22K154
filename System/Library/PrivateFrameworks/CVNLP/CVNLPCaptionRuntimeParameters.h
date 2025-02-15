//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface CVNLPCaptionRuntimeParameters : NSObject
{
    int _excludeGenderStrategy;	// 8 = 0x8
    int _genderOption;	// 12 = 0xc
    double _captionModelMinimumConfidence;	// 16 = 0x10
    double _captionModelLengthNormalizationFactor;	// 24 = 0x18
    NSDictionary *_classifierRevisions;	// 32 = 0x20
    NSDictionary *_sensitiveImageParameters;	// 40 = 0x28
    NSArray *_replacements;	// 48 = 0x30
    NSArray *_genderedTokens;	// 56 = 0x38
    NSArray *_blackListRules;	// 64 = 0x40
    NSArray *_excludeGenderReplacements;	// 72 = 0x48
    NSArray *_excludeGenderTriggers;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000005ae90
@property(nonatomic) int genderOption; // @synthesize genderOption=_genderOption;
@property(retain, nonatomic) NSArray *excludeGenderTriggers; // @synthesize excludeGenderTriggers=_excludeGenderTriggers;
@property(retain, nonatomic) NSArray *excludeGenderReplacements; // @synthesize excludeGenderReplacements=_excludeGenderReplacements;
@property(retain, nonatomic) NSArray *blackListRules; // @synthesize blackListRules=_blackListRules;
@property(retain, nonatomic) NSArray *genderedTokens; // @synthesize genderedTokens=_genderedTokens;
@property(retain, nonatomic) NSArray *replacements; // @synthesize replacements=_replacements;
@property(retain, nonatomic) NSDictionary *sensitiveImageParameters; // @synthesize sensitiveImageParameters=_sensitiveImageParameters;
@property(retain, nonatomic) NSDictionary *classifierRevisions; // @synthesize classifierRevisions=_classifierRevisions;
@property(nonatomic) int excludeGenderStrategy; // @synthesize excludeGenderStrategy=_excludeGenderStrategy;
@property(nonatomic) double captionModelLengthNormalizationFactor; // @synthesize captionModelLengthNormalizationFactor=_captionModelLengthNormalizationFactor;
@property(nonatomic) double captionModelMinimumConfidence; // @synthesize captionModelMinimumConfidence=_captionModelMinimumConfidence;
- (id)initWithOptions:(id)arg1;	// IMP=0x000000000005ad75

@end

