//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface EventDispatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSMutableArray *_eventMonitors;	// 16 = 0x10
}

+ (void)observeXPCServer:(id)arg1;	// IMP=0x00400000001273e3
+ (void)connectEventMonitorWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000126fb5
+ (id)eventDispatcher;	// IMP=0x0010000000126c4d
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x002000000012764f
- (void)_addClient:(id)arg1;	// IMP=0x0010000000127639
- (void)_clientDisconnectNotification:(id)arg1;	// IMP=0x001000000012740b
- (void)postEventWithName:(id)arg1 userInfo:(id)arg2;	// IMP=0x0010000000126c92
- (void)dealloc;	// IMP=0x0010000000126bcb
- (id)init;	// IMP=0x0010000000126b2d

@end

