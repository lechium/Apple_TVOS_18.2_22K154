//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSArray, NSString, PKDiscoveryItem, PKDiscoveryService;

@protocol PKDiscoveryObserver <NSObject>

@optional
- (void)discoveryServiceDidReceiveUpdatedDiscoveryEngagementMessages:(PKDiscoveryService *)arg1;
- (void)discoveryService:(PKDiscoveryService *)arg1 dialogRequestsChangedForPlacement:(NSString *)arg2;
- (void)discoveryService:(PKDiscoveryService *)arg1 completedCTAForItem:(PKDiscoveryItem *)arg2;
- (void)discoveryService:(PKDiscoveryService *)arg1 receivedUpdatedDiscoveryArticleLayouts:(NSArray *)arg2;
@end

