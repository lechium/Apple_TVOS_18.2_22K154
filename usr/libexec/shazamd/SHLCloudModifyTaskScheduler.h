//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, SHLCloudModifyTaskTransformer;

@interface SHLCloudModifyTaskScheduler
{
    SHLCloudModifyTaskTransformer *_taskTransformer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000056dac
@property(retain, nonatomic) SHLCloudModifyTaskTransformer *taskTransformer; // @synthesize taskTransformer=_taskTransformer;
- (void)scheduleModifyTask:(id)arg1;	// IMP=0x001000000005661b
@property(readonly, nonatomic) NSArray *preconditions;
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00100000000563e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

