//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UNUserNotificationCenter;

@interface UserNotificationManager : NSObject
{
    UNUserNotificationCenter *_center;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000020dbe8
- (void)userNotificationCenter:(id)arg1 didChangeSettings:(id)arg2;	// IMP=0x001000000020d948
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000020d795
- (id)init;	// IMP=0x001000000020d2f7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

