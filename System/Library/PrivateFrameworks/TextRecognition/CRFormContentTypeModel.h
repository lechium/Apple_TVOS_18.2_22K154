//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface CRFormContentTypeModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (id)defaultURLOfModelInThisBundle;	// IMP=0x006000000012f13c
- (void).cxx_destruct;	// IMP=0x000000000012f863
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000012f674
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000012f5be
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012f548
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000000012f3c2
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012f2ec
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012f23a
- (id)init;	// IMP=0x000000000012f1dd

@end

