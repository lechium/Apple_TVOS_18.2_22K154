//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSDate, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCameraSignificantEventNotificationRecord : HMFObject
{
    NSUUID *_UUID;	// 8 = 0x8
    unsigned long long _notificationReasons;	// 16 = 0x10
    NSDate *_date;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000bd7685
@property(readonly, copy) NSDate *date; // @synthesize date=_date;
@property(readonly) unsigned long long notificationReasons; // @synthesize notificationReasons=_notificationReasons;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bd763d
- (unsigned long long)hash;	// IMP=0x0000000000bd75f9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bd748a
- (id)initWithUUID:(id)arg1 notificationReasons:(unsigned long long)arg2 date:(id)arg3;	// IMP=0x0000000000bd738c

@end

