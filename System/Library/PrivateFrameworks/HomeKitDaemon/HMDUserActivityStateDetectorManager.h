//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSArray;
@protocol HMDHomeActivityStateManagerDataSource, HMDUserActivityReportCoordinator;

__attribute__((visibility("hidden")))
@interface HMDUserActivityStateDetectorManager : HMFObject
{
    id <HMDHomeActivityStateManagerDataSource> _dataSource;	// 8 = 0x8
    id <HMDUserActivityReportCoordinator> _userActivityReportCoordinator;	// 16 = 0x10
    NSArray *_detectors;	// 24 = 0x18
}

+ (_Bool)shouldRunManagerForHome:(id)arg1;	// IMP=0x0060000000ed08e1
- (void).cxx_destruct;	// IMP=0x0000000000ed0625
@property(readonly, nonatomic) NSArray *detectors; // @synthesize detectors=_detectors;
@property(readonly, nonatomic) id <HMDUserActivityReportCoordinator> userActivityReportCoordinator; // @synthesize userActivityReportCoordinator=_userActivityReportCoordinator;
@property(readonly, nonatomic) id <HMDHomeActivityStateManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)handlePrimaryResidentDidChangeNotification:(id)arg1;	// IMP=0x0000000000ed05b0
- (void)registerForNotifications;	// IMP=0x0000000000ed0531
- (void)configure;	// IMP=0x0000000000ed0496
- (id)initWithDataSource:(id)arg1 userActivityReportCoordinator:(id)arg2 detectors:(id)arg3;	// IMP=0x0000000000ed03cc
- (id)initWithHome:(id)arg1;	// IMP=0x0000000000ed023f

@end

