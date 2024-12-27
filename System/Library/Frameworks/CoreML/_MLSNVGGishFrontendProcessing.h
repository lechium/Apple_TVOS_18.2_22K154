//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModelDescription;
@protocol MLCustomModel;

__attribute__((visibility("hidden")))
@interface _MLSNVGGishFrontendProcessing : NSObject
{
    id <MLCustomModel> _frontendProcessingModel;	// 8 = 0x8
    MLModelDescription *_modelDescription;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001f88ab
@property(readonly, nonatomic) MLModelDescription *modelDescription; // @synthesize modelDescription=_modelDescription;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001f888b
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001f8583

@end

