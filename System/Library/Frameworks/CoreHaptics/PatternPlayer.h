//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVHapticPlayerChannel, NSString;

__attribute__((visibility("hidden")))
@interface PatternPlayer
{
    AVHapticPlayerChannel *_channel;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000444e
@property _Bool isMuted;
- (_Bool)startAtTime:(double)arg1 withImmediateParameters:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000003e05
- (_Bool)scheduleParameterCurve:(id)arg1 atTime:(double)arg2 error:(id *)arg3;	// IMP=0x0000000000003932
- (_Bool)cancelAndReturnError:(id *)arg1;	// IMP=0x0000000000003595
- (_Bool)sendParameters:(id)arg1 atTime:(double)arg2 error:(id *)arg3;	// IMP=0x00000000000031d7
- (_Bool)stopAtTime:(double)arg1 error:(id *)arg2;	// IMP=0x0000000000002dd8
- (_Bool)startAtTime:(double)arg1 error:(id *)arg2;	// IMP=0x00000000000026a4
- (void)clearExternalResources:(id)arg1;	// IMP=0x0000000000002431
- (void)doSetMute:(_Bool)arg1;	// IMP=0x00000000000022cf
- (void)dealloc;	// IMP=0x000000000000210b
- (id)initWithPlayable:(id)arg1 engine:(id)arg2 privileged:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000000016f7
- (id)processImmediateParameters:(id)arg1;	// IMP=0x000000000000127b
- (void)releaseExternalResources:(id)arg1 events:(id)arg2;	// IMP=0x0000000000000fce
- (id)init;	// IMP=0x0000000000000fc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

