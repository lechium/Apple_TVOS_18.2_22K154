//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HMDHomeAwayStateDetector
{
    unsigned long long _state;	// 8 = 0x8
}

+ (unsigned long long)contributorType;	// IMP=0x0060000000b5e836
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)handleLocationAuthorizationChanged:(id)arg1;	// IMP=0x0000000000b5e743
- (void)handleHomeLocationChanged:(id)arg1;	// IMP=0x0000000000b5e6a8
- (void)updateLatestReportWithReason:(unsigned long long)arg1;	// IMP=0x0000000000b5e4e4
- (void)determineStateWithReason:(unsigned long long)arg1;	// IMP=0x0000000000b5e323
- (void)updateState:(unsigned long long)arg1 withReason:(unsigned long long)arg2;	// IMP=0x0000000000b5e248
- (void)_registerForNotifications;	// IMP=0x0000000000b5e0c8
- (void)configureWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000b5dffc
- (id)initWithDataSource:(id)arg1;	// IMP=0x0000000000b5dfb9

@end

