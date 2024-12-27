//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MLMultiplyBroadcastableBrick : NSObject
{
    _Bool _shapeInfoNeeded;	// 8 = 0x8
    NSArray *_inputRanks;	// 16 = 0x10
    NSArray *_outputRanks;	// 24 = 0x18
    NSArray *_inputShapes;	// 32 = 0x20
    NSArray *_outputShapes;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000163b96
@property(readonly, nonatomic) NSArray *outputShapes; // @synthesize outputShapes=_outputShapes;
@property(readonly, nonatomic) NSArray *inputShapes; // @synthesize inputShapes=_inputShapes;
@property(readonly, nonatomic) NSArray *outputRanks; // @synthesize outputRanks=_outputRanks;
@property(readonly, nonatomic) NSArray *inputRanks; // @synthesize inputRanks=_inputRanks;
@property(readonly, nonatomic) _Bool shapeInfoNeeded; // @synthesize shapeInfoNeeded=_shapeInfoNeeded;
- (void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2;	// IMP=0x0000000000163185
- (_Bool)hasGPUSupport;	// IMP=0x000000000016317d
- (id)initWithParameters:(id)arg1;	// IMP=0x0000000000162f34
- (id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;	// IMP=0x0000000000162c31

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

