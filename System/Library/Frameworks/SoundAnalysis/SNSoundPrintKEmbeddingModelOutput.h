//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSSet;

@interface SNSoundPrintKEmbeddingModelOutput : NSObject
{
    MLMultiArray *_fixedLengthEmbedding;	// 8 = 0x8
    MLMultiArray *_framewiseEmbedding;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000022088f
@property(retain, nonatomic) MLMultiArray *framewiseEmbedding; // @synthesize framewiseEmbedding=_framewiseEmbedding;
@property(retain, nonatomic) MLMultiArray *fixedLengthEmbedding; // @synthesize fixedLengthEmbedding=_fixedLengthEmbedding;
- (id)featureValueForName:(id)arg1;	// IMP=0x0000000000220792
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithFixedLengthEmbedding:(id)arg1 framewiseEmbedding:(id)arg2;	// IMP=0x00000000002206d9

@end

