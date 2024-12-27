//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _EAREndpointer : NSObject
{
    struct unique_ptr<quasar::HybridEndpointer, std::default_delete<quasar::HybridEndpointer>> _endpointer;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x00600000000c6cdd
- (id).cxx_construct;	// IMP=0x00000000000c80a4
- (void).cxx_destruct;	// IMP=0x00000000000c8094
- (_Bool)acceptEagerResultWithFeatures:(id)arg1 featuresToLog:(id *)arg2;	// IMP=0x00000000000c7b5d
- (id)defaultServerEndpointFeatures;	// IMP=0x00000000000c78b8
- (_Bool)didEndpointWithFeatures:(id)arg1 audioTimestamp:(double)arg2 featuresToLog:(id *)arg3 endpointPosterior:(float *)arg4 extraDelayMs:(int *)arg5;	// IMP=0x00000000000c720a
- (void)updateEndpointerDelayedTriggerSwitch:(_Bool)arg1;	// IMP=0x00000000000c71fa
- (void)updateEndpointerThresholdWithValue:(float)arg1;	// IMP=0x00000000000c71ec
- (_Bool)requestSupportedWithSamplingRate:(unsigned long long)arg1;	// IMP=0x00000000000c71dc
- (id)initWithConfiguration:(id)arg1 delaysTrigger:(_Bool)arg2 modelVersion:(id *)arg3;	// IMP=0x00000000000c6f6e
- (id)initWithConfiguration:(id)arg1 modelVersion:(id *)arg2;	// IMP=0x00000000000c6d19
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000000c6d05

@end

