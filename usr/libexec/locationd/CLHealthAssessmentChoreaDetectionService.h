//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CLHealthAssessmentResultDelegate;

@interface CLHealthAssessmentChoreaDetectionService
{
    id <CLHealthAssessmentResultDelegate> _delegate;	// 8 = 0x8
}

- (void)setDelegate:(id)arg1;	// IMP=0x002000000066f10d
- (id)delegate;	// IMP=0x001000000066f0fc
- (void)onResultAvailable:(struct ChoreaScore)arg1;	// IMP=0x001000000066efb4
- (void)feedTremor:(id)arg1;	// IMP=0x001000000066eece
- (void)feedGyro:(id)arg1;	// IMP=0x001000000066eec8
- (void)feedAccelSample:(CDStruct_869f9c67)arg1 time:(double)arg2;	// IMP=0x001000000066ee9f
- (void)dealloc;	// IMP=0x001000000066ee0b
- (id)init;	// IMP=0x001000000066eccc

@end

