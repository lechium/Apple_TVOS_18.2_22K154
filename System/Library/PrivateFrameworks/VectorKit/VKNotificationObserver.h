//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source, VKNotificationObserverDelegate;

__attribute__((visibility("hidden")))
@interface VKNotificationObserver : NSObject
{
    id <VKNotificationObserverDelegate> _target;	// 8 = 0x8
    SEL _selector;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000685b10
- (void)_receivedPowerStateDidChangeNotification;	// IMP=0x0000000000685ab0
- (void)_receivedThermalStateDidChangeNotification;	// IMP=0x0000000000685a50
- (void)_receivedLocalChangedNotification;	// IMP=0x0000000000685920
- (void)_receivedFlushTileCachesNotification;	// IMP=0x00000000006857f0
- (void)_receivedMemoryNotification;	// IMP=0x00000000006856c0
- (void)dealloc;	// IMP=0x00000000006854b0
- (id)initWithTarget:(id)arg1 taskContext:(const void *)arg2;	// IMP=0x0000000000685130

@end

