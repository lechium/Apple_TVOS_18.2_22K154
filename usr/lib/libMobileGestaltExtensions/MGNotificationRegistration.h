//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MGNotificationRegistration : NSObject
{
    NSMutableDictionary *_observers;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CDUnknownBlockType _block;	// 24 = 0x18
    _Bool _deliverNotifications;	// 32 = 0x20
    NSMutableDictionary *_requestedRegistrations;	// 40 = 0x28
}

- (void)cancel;	// IMP=0x0000000000003e94
- (_Bool)start;	// IMP=0x0000000000003a28
- (_Bool)registerForNotification:(int)arg1 argument:(const char *)arg2 question:(id)arg3;	// IMP=0x0000000000003906
- (id)initWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000000386b
- (void)dealloc;	// IMP=0x0000000000003813

@end

