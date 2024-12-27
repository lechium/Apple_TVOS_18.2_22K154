//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMDaemonCore/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol IMDaemonListenerAVProtocol <NSObject>
- (void)account:(NSString *)arg1 relay:(NSString *)arg2 handleCancel:(NSDictionary *)arg3 fromPerson:(NSDictionary *)arg4;
- (void)account:(NSString *)arg1 relay:(NSString *)arg2 handleUpdate:(NSDictionary *)arg3 fromPerson:(NSDictionary *)arg4;
- (void)account:(NSString *)arg1 relay:(NSString *)arg2 handleInitate:(NSDictionary *)arg3 fromPerson:(NSDictionary *)arg4;
- (void)account:(NSString *)arg1 avAction:(unsigned int)arg2 withArguments:(NSDictionary *)arg3 toAVChat:(NSString *)arg4 isVideo:(_Bool)arg5;
- (void)account:(NSString *)arg1 conference:(NSString *)arg2 invitationSentSuccessfully:(_Bool)arg3;
- (void)account:(NSString *)arg1 conference:(NSString *)arg2 peerID:(NSString *)arg3 propertiesUpdated:(NSDictionary *)arg4;
- (void)account:(NSString *)arg1 conference:(NSString *)arg2 peerIDChangedFromID:(NSString *)arg3 toID:(NSString *)arg4;
- (void)account:(NSString *)arg1 conference:(NSString *)arg2 changedToNewConferenceID:(NSString *)arg3;
- (void)account:(NSString *)arg1 conference:(NSString *)arg2 receivedAVMessage:(unsigned int)arg3 from:(NSDictionary *)arg4 sessionID:(unsigned int)arg5 userInfo:(NSDictionary *)arg6;
- (void)account:(NSString *)arg1 conference:(NSString *)arg2 receivedUpdateFrom:(NSDictionary *)arg3 data:(NSData *)arg4;
- (void)account:(NSString *)arg1 conference:(NSString *)arg2 receivedCounterProposalFrom:(NSDictionary *)arg3 properties:(NSDictionary *)arg4;
- (void)account:(NSString *)arg1 conference:(NSString *)arg2 receivedCancelInvitationFrom:(NSDictionary *)arg3 properties:(NSDictionary *)arg4;
- (void)account:(NSString *)arg1 conference:(NSString *)arg2 receivedResponseToInvitationFrom:(NSDictionary *)arg3 properties:(NSDictionary *)arg4;
- (void)account:(NSString *)arg1 conference:(NSString *)arg2 receivedInvitationFrom:(NSDictionary *)arg3 properties:(NSDictionary *)arg4;
@end

