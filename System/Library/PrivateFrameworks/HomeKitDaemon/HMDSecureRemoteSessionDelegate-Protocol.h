//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMFMessage, NSError;
@protocol HMDSecureRemoteSession;

@protocol HMDSecureRemoteSessionDelegate <NSObject>
- (void)secureRemoteSession:(id <HMDSecureRemoteSession>)arg1 receivedRequestToSendMessage:(HMFMessage *)arg2;

@optional
- (void)secureRemoteSession:(id <HMDSecureRemoteSession>)arg1 didCloseWithError:(NSError *)arg2;
@end

