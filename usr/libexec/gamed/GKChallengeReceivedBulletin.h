//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GKChallengeReceivedBulletin
{
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x004000000016e671
- (void)handleDeclineAction;	// IMP=0x004000000016f894
- (void)handleAction:(id)arg1;	// IMP=0x001000000016f6ec
- (unsigned long long)launchEventType;	// IMP=0x001000000016f6e4
- (void)assembleBulletin;	// IMP=0x001000000016f26b
- (void)notifyClient:(id)arg1;	// IMP=0x001000000016f1a5
- (id)init;	// IMP=0x001000000016e642

@end

