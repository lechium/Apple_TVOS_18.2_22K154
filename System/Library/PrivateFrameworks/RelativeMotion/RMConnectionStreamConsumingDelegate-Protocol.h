//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelativeMotion/RMConnectionDataDelegate-Protocol.h>

@class NSData, RMConnectionEndpoint;

@protocol RMConnectionStreamConsumingDelegate <RMConnectionDataDelegate>
- (void)endpoint:(RMConnectionEndpoint *)arg1 didReceiveStreamedData:(NSData *)arg2;
@end

