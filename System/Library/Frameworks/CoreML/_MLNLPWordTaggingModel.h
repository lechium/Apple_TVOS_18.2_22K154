//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModelDescription;

__attribute__((visibility("hidden")))
@interface _MLNLPWordTaggingModel : NSObject
{
    void *_wordTaggingModel;	// 8 = 0x8
    MLModelDescription *_modelDescription;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001b9b28
@property(retain) MLModelDescription *modelDescription; // @synthesize modelDescription=_modelDescription;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001b9227
- (void)dealloc;	// IMP=0x00000000001b91e8
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001b8a68

@end

