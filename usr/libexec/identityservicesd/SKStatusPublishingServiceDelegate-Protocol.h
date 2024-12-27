//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSError, SKStatusPublishRequest, SKStatusPublishingService;

@protocol SKStatusPublishingServiceDelegate <NSObject>

@optional
- (void)publishingServiceDaemonDisconnected:(SKStatusPublishingService *)arg1;
- (void)invitedHandlesChanged;
- (void)statusPublishRequestCompleted:(SKStatusPublishRequest *)arg1 successfully:(_Bool)arg2 error:(NSError *)arg3;
@end

