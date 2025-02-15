//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel, NSString;

@interface VCPMAMLModel : NSObject
{
    unsigned int _inputPixelFormat;	// 8 = 0x8
    MLModel *_model;	// 16 = 0x10
    long long _inputSize;	// 24 = 0x18
    NSString *_inputFeatureName;	// 32 = 0x20
    NSString *_outputFeatureName;	// 40 = 0x28
}

+ (id)vcp_sharedModelWithModelName:(id)arg1;	// IMP=0x00600000002c985b
- (void).cxx_destruct;	// IMP=0x00000000002c99c2
@property(readonly, nonatomic) NSString *outputFeatureName; // @synthesize outputFeatureName=_outputFeatureName;
@property(readonly, nonatomic) NSString *inputFeatureName; // @synthesize inputFeatureName=_inputFeatureName;
@property(readonly, nonatomic) unsigned int inputPixelFormat; // @synthesize inputPixelFormat=_inputPixelFormat;
@property(readonly, nonatomic) long long inputSize; // @synthesize inputSize=_inputSize;
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)initWithModelName:(id)arg1;	// IMP=0x00000000002c8e10
- (id)init;	// IMP=0x00000000002c8e02

@end

