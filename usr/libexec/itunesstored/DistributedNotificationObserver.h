//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, SSXPCConnection;

@interface DistributedNotificationObserver : NSObject
{
    SSXPCConnection *_connection;	// 8 = 0x8
    NSMutableSet *_notificationNames;	// 16 = 0x10
}

- (void)removeObservedNotificationName:(id)arg1;	// IMP=0x0020000000124e28
- (void)postNotificationName:(id)arg1 message:(id)arg2;	// IMP=0x0010000000124de9
@property(readonly, nonatomic) NSArray *observedNotificationNames;
- (void)addObservedNotificationNames:(id)arg1;	// IMP=0x0010000000124dbd
- (void)addObservedNotificationName:(id)arg1;	// IMP=0x0010000000124da7
- (void)dealloc;	// IMP=0x0010000000124d5d
- (id)initWithServiceName:(id)arg1;	// IMP=0x0010000000124ce7

@end

