//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPAVRoute, MPAVRoutingController, NSArray, NSError, NSString;

@protocol MPAVRoutingControllerDelegate <NSObject>

@optional
- (void)routingControllerDidPauseFromActiveRouteChange:(MPAVRoutingController *)arg1;
- (void)routingControllerExternalScreenTypeDidChange:(MPAVRoutingController *)arg1;
- (void)routingController:(MPAVRoutingController *)arg1 volumeControlAvailabilityDidChange:(_Bool)arg2;
- (void)routingController:(MPAVRoutingController *)arg1 shouldHijackRoute:(MPAVRoute *)arg2 alertStyle:(long long)arg3 busyRouteName:(NSString *)arg4 presentingAppName:(NSString *)arg5 completion:(void (^)(_Bool))arg6;
- (void)routingController:(MPAVRoutingController *)arg1 pickedRouteDidChange:(MPAVRoute *)arg2;
- (void)routingController:(MPAVRoutingController *)arg1 pickedRoutesDidChange:(NSArray *)arg2;
- (void)routingController:(MPAVRoutingController *)arg1 didFailToPickRouteWithError:(NSError *)arg2;
- (void)routingControllerAvailableRoutesDidChange:(MPAVRoutingController *)arg1;
@end

