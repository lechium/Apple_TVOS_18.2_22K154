//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDDevice, HMDUser, NSString;

__attribute__((visibility("hidden")))
@interface HMDUserActivityHomeAwayReport
{
    unsigned long long _state;	// 8 = 0x8
    HMDDevice *_sourceDevice;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000569cc9
@property(retain, nonatomic) HMDDevice *sourceDevice; // @synthesize sourceDevice=_sourceDevice;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic, getter=isNotAtHome) _Bool notAtHome;
@property(readonly, nonatomic, getter=isAtHome) _Bool atHome;
- (id)copyReportWithLastUpdateTimestamp:(id)arg1 reason:(unsigned long long)arg2;	// IMP=0x0000000000569b69
- (id)copyReportWithChangedTimestamp:(id)arg1;	// IMP=0x0000000000569a66
- (id)serializedRemoteMessagePayload;	// IMP=0x000000000056998d
- (unsigned long long)contributorType;	// IMP=0x0000000000569982
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005698b7
- (id)initFromMessagePayload:(id)arg1 withUser:(id)arg2 sourceDevice:(id)arg3;	// IMP=0x00000000005697a0
- (id)initWithUser:(id)arg1 state:(unsigned long long)arg2 fromDevice:(id)arg3 reason:(unsigned long long)arg4 changedTimestamp:(id)arg5 lastUpdatedTimeStamp:(id)arg6;	// IMP=0x0000000000569703
- (id)initWithUser:(id)arg1 state:(unsigned long long)arg2 fromDevice:(id)arg3 reason:(unsigned long long)arg4;	// IMP=0x00000000005696e1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) HMDUser *user;

@end

