//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class IDSSession, NSArray, NSData, NSError, NSString;

@protocol IDSSessionDelegate <NSObject>

@optional
- (void)session:(IDSSession *)arg1 didReceiveReport:(NSArray *)arg2;
- (void)session:(NSString *)arg1 didReceiveData:(NSData *)arg2;
- (void)sessionEnded:(IDSSession *)arg1 withReason:(unsigned int)arg2 error:(NSError *)arg3;
- (void)sessionEnded:(IDSSession *)arg1;
- (void)sessionStarted:(IDSSession *)arg1;
- (void)session:(IDSSession *)arg1 receivedInvitationCancelFromID:(NSString *)arg2;
- (void)session:(IDSSession *)arg1 receivedInvitationDeclineFromID:(NSString *)arg2;
- (void)session:(IDSSession *)arg1 receivedInvitationAcceptFromID:(NSString *)arg2;
@end

