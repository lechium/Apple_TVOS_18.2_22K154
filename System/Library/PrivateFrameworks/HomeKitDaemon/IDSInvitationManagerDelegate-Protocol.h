//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class IDSInvitationManager, IDSReceivedInvitation, IDSSentInvitation;

@protocol IDSInvitationManagerDelegate <IDSServiceDelegate>
- (void)manager:(IDSInvitationManager *)arg1 receiverDidDeclineInvitation:(IDSSentInvitation *)arg2;
- (void)manager:(IDSInvitationManager *)arg1 receiverDidAcceptInvitation:(IDSSentInvitation *)arg2;
- (void)manager:(IDSInvitationManager *)arg1 senderDidCancelInvitation:(IDSReceivedInvitation *)arg2;
- (void)manager:(IDSInvitationManager *)arg1 incomingInvitation:(IDSReceivedInvitation *)arg2;
@end

