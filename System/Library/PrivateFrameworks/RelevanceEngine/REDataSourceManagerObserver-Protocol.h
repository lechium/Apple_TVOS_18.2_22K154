//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/NSObject-Protocol.h>

@class REDataSourceManager, REElementDataSourceController;

@protocol REDataSourceManagerObserver <NSObject>
- (void)dataSourceManager:(REDataSourceManager *)arg1 willUnloadDataSourceController:(REElementDataSourceController *)arg2;
- (void)dataSourceManager:(REDataSourceManager *)arg1 didLoadDataSourceController:(REElementDataSourceController *)arg2;
@end

