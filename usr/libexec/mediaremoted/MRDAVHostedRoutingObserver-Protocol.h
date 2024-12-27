//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MRDHostedRoutingController, NSArray, NSString;

@protocol MRDAVHostedRoutingObserver <NSObject>
@property(nonatomic) unsigned int discoveryMode;
@property(readonly, nonatomic) NSString *clientIdentifier;
- (void)hostedRoutingController:(MRDHostedRoutingController *)arg1 outputDevicesDidChange:(NSArray *)arg2 forFeature:(unsigned int)arg3;
- (void)hostedRoutingController:(MRDHostedRoutingController *)arg1 endpointsDidChange:(NSArray *)arg2;

@optional
- (void)hostedRoutingController:(MRDHostedRoutingController *)arg1 availableEndpointsDidChange:(NSArray *)arg2;
@end

