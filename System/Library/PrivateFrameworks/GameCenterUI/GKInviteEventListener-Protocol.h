//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKInvite, GKPlayer, NSArray;

@protocol GKInviteEventListener

@optional
- (void)player:(GKPlayer *)arg1 didRequestMatchWithPlayers:(NSArray *)arg2;
- (void)player:(GKPlayer *)arg1 didRequestMatchWithRecipients:(NSArray *)arg2;
- (void)player:(GKPlayer *)arg1 didAcceptInvite:(GKInvite *)arg2;
@end

