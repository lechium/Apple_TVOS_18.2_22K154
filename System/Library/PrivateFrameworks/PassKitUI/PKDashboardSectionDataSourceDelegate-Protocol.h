//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol PKDashboardSectionDataSource;

@protocol PKDashboardSectionDataSourceDelegate
- (void)updateSectionDataSource:(id <PKDashboardSectionDataSource>)arg1 withUpdates:(void (^)(void))arg2 diff:(PKCollectionViewItemsDiff * (^)(unsigned long long))arg3;
@end

