//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSBundle.h>

@interface NSBundle (GKDaemonAdditions)
+ (id)_gkLocalizedMessageFromPushDictionary:(id)arg1 forBundleID:(id)arg2;	// IMP=0x00100000000d7ede
+ (id)_gkLocalizedMessageFromDictionary:(id)arg1 forBundleID:(id)arg2;	// IMP=0x00100000000d7cd0
+ (id)_gkBundleIdentifierFromConnection:(id)arg1;	// IMP=0x00100000000d7c0d
+ (id)_gkBundleIdentifierFromAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x00100000000d7a26
+ (id)_gkBundleIdentifierFromPID:(int)arg1;	// IMP=0x00100000000d78d8
+ (id)_gkBundleInfoWithPID:(int)arg1;	// IMP=0x00100000000d7883
+ (id)_gkBundleWithPID:(int)arg1;	// IMP=0x00100000000d77f1
+ (id)_gkBundleWithIdentifier:(id)arg1;	// IMP=0x00100000000d774c
+ (id)executableURLForPid:(int)arg1;	// IMP=0x00100000000d76e0
+ (id)executablePathForPid:(int)arg1;	// IMP=0x00100000000d7658
+ (id)_gkBundleIdentifierOrProcessNameForPID:(int)arg1;	// IMP=0x00100000000d72b0
- (_Bool)_gkIsBadgingEnabled;	// IMP=0x00200000000d810b
- (_Bool)_gkIsGameCenterEnabled;	// IMP=0x00100000000d806f
@end

