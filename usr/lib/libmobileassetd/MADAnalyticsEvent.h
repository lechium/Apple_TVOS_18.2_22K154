//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MADAnalyticsEvent : NSObject
{
    NSString *_eventName;	// 8 = 0x8
    NSString *_eventUUID;	// 16 = 0x10
    NSMutableDictionary *_mutableEventPayload;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_stateQueue;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000004224
+ (id)eventWithName:(id)arg1 payload:(id)arg2;	// IMP=0x0010000000003c14
- (void).cxx_destruct;	// IMP=0x00000000000048fd
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property(retain, nonatomic) NSMutableDictionary *mutableEventPayload; // @synthesize mutableEventPayload=_mutableEventPayload;
@property(retain, nonatomic) NSString *eventUUID; // @synthesize eventUUID=_eventUUID;
@property(readonly, retain, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (id)description;	// IMP=0x00000000000047f6
- (void)_queue_removeEventPayloadEntry:(id)arg1;	// IMP=0x00000000000047a8
- (void)_queue_setEventPayloadEntryToNull:(id)arg1;	// IMP=0x000000000000472c
- (void)_queue_setEventPayloadEntry:(id)arg1 value:(id)arg2;	// IMP=0x00000000000046b9
- (void)removeEventPayloadEntry:(id)arg1;	// IMP=0x00000000000045f7
- (void)setEventPayloadEntryToNull:(id)arg1;	// IMP=0x0000000000004535
- (void)setEventPayloadEntry:(id)arg1 value:(id)arg2;	// IMP=0x0000000000004389
@property(readonly, retain, nonatomic) NSDictionary *eventPayload;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000004141
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003f6a
- (id)initWithEventName:(id)arg1;	// IMP=0x0000000000003e55
- (id)init;	// IMP=0x0000000000003e47

@end

