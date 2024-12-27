//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMEPendingEventsCollection, NSDate, NSUUID;

__attribute__((visibility("hidden")))
@interface HMEConnectionInfoItem : NSObject
{
    _Bool _hasPendingRequest;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
    HMEPendingEventsCollection *_pendingEventItems;	// 24 = 0x18
    HMEPendingEventsCollection *_pendingCachedEventItems;	// 32 = 0x20
    NSDate *_expiry;	// 40 = 0x28
    NSDate *_debounceStartTime;	// 48 = 0x30
    id _connection;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000150ad
@property(nonatomic) _Bool hasPendingRequest; // @synthesize hasPendingRequest=_hasPendingRequest;
@property(nonatomic) __weak id connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSDate *debounceStartTime; // @synthesize debounceStartTime=_debounceStartTime;
@property(retain, nonatomic) NSDate *expiry; // @synthesize expiry=_expiry;
@property(readonly, nonatomic) HMEPendingEventsCollection *pendingCachedEventItems; // @synthesize pendingCachedEventItems=_pendingCachedEventItems;
@property(readonly, nonatomic) HMEPendingEventsCollection *pendingEventItems; // @synthesize pendingEventItems=_pendingEventItems;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)initWithConnection:(id)arg1 expiry:(id)arg2;	// IMP=0x0000000000014f2e

@end

