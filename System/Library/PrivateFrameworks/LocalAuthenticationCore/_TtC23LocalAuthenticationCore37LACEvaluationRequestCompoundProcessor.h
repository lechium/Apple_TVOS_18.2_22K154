//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC23LocalAuthenticationCore37LACEvaluationRequestCompoundProcessor : NSObject
{
    MISSING_TYPE *processors;	// 8 = 0x8
    MISSING_TYPE *nextProcessor;	// 16 = 0x10
    MISSING_TYPE *currentProcessorIndex;	// 24 = 0x18
    MISSING_TYPE *involvedProcessorIndices;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000006d0a0
- (id)init;	// IMP=0x000000000006d040
- (void)postProcessRequest:(id)arg1 result:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006cea0
- (void)processRequest:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006c940
- (_Bool)canProcessRequest:(id)arg1;	// IMP=0x000000000006c0d0

@end

