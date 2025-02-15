//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPCNNEspressoContext : NSObject
{
    void *_espressoContext;	// 8 = 0x8
}

+ (void *)sharedContextPreferred:(_Bool)arg1;	// IMP=0x0000000000080f32
+ (void *)sharedContextWithMPSGraph:(_Bool)arg1;	// IMP=0x0000000000080e3c
+ (void *)sharedContextWithForceCPU:(_Bool)arg1;	// IMP=0x0000000000080d46
+ (void *)createContextPreferred;	// IMP=0x0000000000080bae
+ (void *)createContextWithMPSGraph;	// IMP=0x0000000000080a97
+ (void *)createContextWithForceCPU;	// IMP=0x00000000000809b3
+ (_Bool)supportGPU;	// IMP=0x000000000008099d
@property(readonly, nonatomic) void *espressoContext; // @synthesize espressoContext=_espressoContext;
- (void)dealloc;	// IMP=0x00000000000811ad
- (id)initWithForceCPU:(_Bool)arg1 forceNNGraph:(_Bool)arg2 shared:(_Bool)arg3;	// IMP=0x0000000000081028

@end

