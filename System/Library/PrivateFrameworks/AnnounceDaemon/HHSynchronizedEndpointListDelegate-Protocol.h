//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HHEndpoint, HHSynchronizedEndpointList;

@protocol HHSynchronizedEndpointListDelegate
- (void)synchronizedEndpointList:(HHSynchronizedEndpointList *)arg1 didDeleteEndpoint:(HHEndpoint *)arg2;
- (void)synchronizedEndpointList:(HHSynchronizedEndpointList *)arg1 didDeactivateEndpoint:(HHEndpoint *)arg2;
- (void)synchronizedEndpointList:(HHSynchronizedEndpointList *)arg1 didActivateEndpoint:(HHEndpoint *)arg2;
- (void)synchronizedEndpointList:(HHSynchronizedEndpointList *)arg1 didAddEndpoint:(HHEndpoint *)arg2;
@end

