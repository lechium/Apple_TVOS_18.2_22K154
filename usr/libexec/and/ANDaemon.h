//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ANNotificationController, NSString, NSXPCListener;

@interface ANDaemon : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    ANNotificationController *_notificationController;	// 16 = 0x10
}

+ (id)_nameForProcessWithPID:(int)arg1;	// IMP=0x0020000000004914
+ (id)sharedInstance;	// IMP=0x00100000000043a8
- (void).cxx_destruct;	// IMP=0x00200000000049a1
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000452b
- (void)start;	// IMP=0x00100000000044c4
- (void)dealloc;	// IMP=0x0010000000004453
- (id)init;	// IMP=0x00100000000043fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

