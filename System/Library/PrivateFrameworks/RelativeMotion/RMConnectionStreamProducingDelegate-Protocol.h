//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelativeMotion/RMConnectionDataDelegate-Protocol.h>

@class NSData, NSString, RMConnectionEndpoint;

@protocol RMConnectionStreamProducingDelegate <RMConnectionDataDelegate>
- (void)endpointShouldStopStreamingData:(RMConnectionEndpoint *)arg1;
- (_Bool)endpoint:(RMConnectionEndpoint *)arg1 shouldStartStreamingDataToReceiver:(void (^)(NSData *))arg2;
- (void)endpoint:(RMConnectionEndpoint *)arg1 didReceiveStreamingRequest:(NSString *)arg2 withData:(NSData *)arg3;
@end

