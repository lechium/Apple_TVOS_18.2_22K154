//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GKTurnBasedMultiplayerInviteBulletin
{
}

+ (_Bool)shouldExpirePlayerList;	// IMP=0x004000000015d2e0
+ (_Bool)shouldLoadCacheList;	// IMP=0x001000000015d2d8
+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000015c916
- (void)loadDataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x004000000015db54
- (void)handleDeclineAction;	// IMP=0x001000000015dac8
- (void)handleAcceptAction;	// IMP=0x001000000015d9e2
- (void)handleAction:(id)arg1;	// IMP=0x001000000015d7dd
- (void)assembleBulletin;	// IMP=0x001000000015d2e8

@end

