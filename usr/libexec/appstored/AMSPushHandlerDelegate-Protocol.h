//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AMSBadgeRequest, AMSPushPayload;

@protocol AMSPushHandlerDelegate <NSObject>

@optional
- (void)pushPayload:(AMSPushPayload *)arg1 withBadgeRequest:(AMSBadgeRequest *)arg2;
@end

