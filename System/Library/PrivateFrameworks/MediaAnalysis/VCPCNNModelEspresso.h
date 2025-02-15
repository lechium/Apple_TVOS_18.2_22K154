//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL, VCPCNNEspressoContext;

__attribute__((visibility("hidden")))
@interface VCPCNNModelEspresso : NSObject
{
    CDStruct_2bc666a5 _net;	// 8 = 0x8
    void *_plan;	// 24 = 0x18
    NSURL *_netFileUrl;	// 32 = 0x20
    NSArray *_inputNames;	// 40 = 0x28
    NSArray *_outputNames;	// 48 = 0x30
    VCPCNNEspressoContext *_context;	// 56 = 0x38
    NSString *_resConfig;	// 64 = 0x40
    vector_39061748 _inputBlobs;	// 72 = 0x48
    vector_39061748 _outputBlobs;	// 96 = 0x60
    CDStruct_0a65202a _inputBlob;	// 120 = 0x78
    CDStruct_0a65202a _outputBlob;	// 288 = 0x120
}

- (id).cxx_construct;	// IMP=0x00000000000a62e8
- (void).cxx_destruct;	// IMP=0x00000000000a627b
@property(readonly, nonatomic) NSString *resConfig; // @synthesize resConfig=_resConfig;
@property(nonatomic) CDStruct_0a65202a outputBlob; // @synthesize outputBlob=_outputBlob;
@property(nonatomic) CDStruct_0a65202a inputBlob; // @synthesize inputBlob=_inputBlob;
@property(nonatomic) vector_39061748 outputBlobs; // @synthesize outputBlobs=_outputBlobs;
@property(nonatomic) vector_39061748 inputBlobs; // @synthesize inputBlobs=_inputBlobs;
- (void)dealloc;	// IMP=0x00000000000a608d
- (int)getPlanPhase;	// IMP=0x00000000000a607f
- (void *)getEspressoContext;	// IMP=0x00000000000a6069
- (int)softmax;	// IMP=0x00000000000a5fab
- (void)normalization:(float *)arg1;	// IMP=0x00000000000a5d91
- (int)espressoForwardInputs:(vector_aebc2d99)arg1;	// IMP=0x00000000000a5cf5
- (int)espressoForward:(float *)arg1;	// IMP=0x00000000000a5cc5
- (int)prepareModelInputs:(vector_aebc2d99)arg1;	// IMP=0x00000000000a5c13
- (int)prepareModelInput:(float *)arg1;	// IMP=0x00000000000a5bbd
- (int)prepareModelWithConfig:(id)arg1;	// IMP=0x00000000000a5768
- (id)initWithParameters:(id)arg1 inputNames:(id)arg2 outputNames:(id)arg3 properties:(id)arg4;	// IMP=0x00000000000a51d4

@end

