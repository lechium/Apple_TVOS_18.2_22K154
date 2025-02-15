//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSPointerArray;

@interface DMDEventStreamDispatcher : NSObject
{
    NSPointerArray *_alarmListeners;	// 8 = 0x8
    NSMutableDictionary *_distributedNotificationNameToListenersMap;	// 16 = 0x10
    NSMutableDictionary *_notifyMatchingNotificationToListenersMap;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000004b647
@property(readonly, nonatomic) NSMutableDictionary *notifyMatchingNotificationToListenersMap; // @synthesize notifyMatchingNotificationToListenersMap=_notifyMatchingNotificationToListenersMap;
@property(readonly, nonatomic) NSMutableDictionary *distributedNotificationNameToListenersMap; // @synthesize distributedNotificationNameToListenersMap=_distributedNotificationNameToListenersMap;
@property(readonly, nonatomic) NSPointerArray *alarmListeners; // @synthesize alarmListeners=_alarmListeners;
- (void)_dispatchToListenerForKey:(id)arg1 inMap:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000004b416
- (void)_registerListener:(id)arg1 forKeys:(id)arg2 inMap:(id)arg3;	// IMP=0x001000000004b18d
- (void)_registerEventStreamHandlers;	// IMP=0x001000000004a9ed
- (id)initWithListeners:(id)arg1;	// IMP=0x001000000004a664

@end

