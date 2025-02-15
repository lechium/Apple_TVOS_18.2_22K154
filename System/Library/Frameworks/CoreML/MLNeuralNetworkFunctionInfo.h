//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MLNeuralNetworkFunctionInfo : NSObject
{
    _Bool _isClassifier;	// 8 = 0x8
    NSArray *_classLabels;	// 16 = 0x10
    NSString *_classScoreVectorName;	// 24 = 0x18
    NSArray *_outputNames;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001a9b08
@property(readonly, copy, nonatomic) NSArray *outputNames; // @synthesize outputNames=_outputNames;
@property(readonly, copy, nonatomic) NSString *classScoreVectorName; // @synthesize classScoreVectorName=_classScoreVectorName;
@property(readonly, copy, nonatomic) NSArray *classLabels; // @synthesize classLabels=_classLabels;
@property(readonly, nonatomic) _Bool isClassifier; // @synthesize isClassifier=_isClassifier;
- (id)description;	// IMP=0x00000000001a9935
- (id)initWithCompiledModelArchive:(void *)arg1 compilerVersionInfo:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001a94c2

@end

