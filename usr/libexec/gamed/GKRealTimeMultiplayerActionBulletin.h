//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKRealTimeMultiplayerActionBulletin
{
    NSString *_debugLine;	// 136 = 0x88
    NSString *_notificationName;	// 144 = 0x90
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0040000000164bdd
- (void).cxx_destruct;	// IMP=0x002000000016734a
@property(readonly) NSString *notificationName; // @synthesize notificationName=_notificationName;
@property(readonly) NSString *debugLine; // @synthesize debugLine=_debugLine;
- (_Bool)isAccept;	// IMP=0x00100000001672ef
- (id)getNotificationName;	// IMP=0x00100000001672c0
- (id)getDebugLine;	// IMP=0x0010000000167291
@property(readonly) NSString *aggregateDictionaryKey;
- (void)assembleBulletin;	// IMP=0x00100000001670e1
- (void)setInvitedPlayerRespondedWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000165af7
- (void)loadDataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000016542e

@end

