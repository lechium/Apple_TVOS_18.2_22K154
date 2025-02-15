//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface APSSystemUser : NSObject
{
    NSString *_userID;	// 8 = 0x8
    unsigned char _uuid[16];	// 16 = 0x10
    NSString *_status;	// 32 = 0x20
    _Bool _daemonUser;	// 40 = 0x28
    NSMutableDictionary *_guestUserCache;	// 48 = 0x30
}

+ (id)allSystemUsers;	// IMP=0x004000000009787f
+ (id)allDaemonUserIDs;	// IMP=0x001000000009769e
+ (id)allConsoleUserIDs;	// IMP=0x0010000000097685
+ (id)systemUserWithUID:(unsigned int)arg1;	// IMP=0x0010000000097153
+ (id)systemUserWithUserID:(id)arg1;	// IMP=0x0010000000097062
- (void).cxx_destruct;	// IMP=0x0020000000097909
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(readonly, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (id)debugDescription;	// IMP=0x0010000000097898
- (void)removeUser;	// IMP=0x001000000009748d
- (_Bool)isDifferentUser;	// IMP=0x0010000000097485
- (_Bool)isRootUser;	// IMP=0x0010000000097468
- (_Bool)isGuestUser;	// IMP=0x0010000000097460
- (_Bool)isDaemonUser;	// IMP=0x0010000000097457
- (_Bool)isLoggedOut;	// IMP=0x001000000009743a
- (_Bool)isLoggedIn;	// IMP=0x001000000009741d
@property(readonly, nonatomic) unsigned int uid;
- (id)initWithUserID:(id)arg1;	// IMP=0x00100000000971c4

@end

