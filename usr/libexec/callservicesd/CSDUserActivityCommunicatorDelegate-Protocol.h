//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSSet, NSString;

@protocol CSDUserActivityCommunicatorDelegate <NSObject>
- (void)receivedUpdatedActivities:(NSSet *)arg1;
- (void)stoppedReceivingActivityType:(unsigned int)arg1 dynamicIdentifier:(NSString *)arg2;
- (void)receivedBroadcastedActivityType:(unsigned int)arg1 dynamicIdentifier:(NSString *)arg2 originatingDeviceType:(NSString *)arg3;
@end

