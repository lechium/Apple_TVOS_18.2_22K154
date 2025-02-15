//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VCPCNNModelEspressoV2 : NSObject
{
    NSURL *_netFileUrl;	// 8 = 0x8
    NSArray *_inputNames;	// 16 = 0x10
    NSArray *_outputNames;	// 24 = 0x18
    NSString *_functionName;	// 32 = 0x20
    NSMutableArray *_outputsSize;	// 40 = 0x28
    struct e5rt_execution_stream *_stream;	// 48 = 0x30
    NSMutableArray *_inputIOArray;	// 56 = 0x38
    NSMutableArray *_outputIOArray;	// 64 = 0x40
    vector_38b2178e _outputs;	// 72 = 0x48
}

- (id).cxx_construct;	// IMP=0x00000000000ff667
- (void).cxx_destruct;	// IMP=0x00000000000ff5f7
@property(readonly, nonatomic) vector_38b2178e outputs; // @synthesize outputs=_outputs;
- (void)dealloc;	// IMP=0x00000000000ff54d
- (id)inputsType;	// IMP=0x00000000000ff352
- (id)outputsType;	// IMP=0x00000000000ff157
- (id)inputsSize;	// IMP=0x00000000000fef5c
- (id)outputsSize;	// IMP=0x00000000000fef4e
- (int)getOutputs;	// IMP=0x00000000000fedb2
- (int)espressoForwardInputs:(vector_c187b055)arg1;	// IMP=0x00000000000fec07
- (int)espressoForward:(void *)arg1;	// IMP=0x00000000000fea27
- (struct e5rt_execution_stream_operation *)createPrecompiledOp:(id)arg1 isPrecompiled:(_Bool)arg2 functionName:(id)arg3;	// IMP=0x00000000000fdd7f
- (id)initWithParameters:(id)arg1 outputNames:(id)arg2 inputNames:(id)arg3 functionName:(id)arg4;	// IMP=0x00000000000fd49e

@end

