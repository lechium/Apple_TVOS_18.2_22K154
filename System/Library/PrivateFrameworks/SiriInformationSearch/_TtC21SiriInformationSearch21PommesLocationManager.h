//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC21SiriInformationSearch21PommesLocationManager : NSObject
{
    MISSING_TYPE *$__lazy_storage_$_locationShifter;	// 8 = 0x8
    MISSING_TYPE *$__lazy_storage_$_locationShiftQueue;	// 16 = 0x10
    MISSING_TYPE *statusQueue;	// 24 = 0x18
    MISSING_TYPE *_status;	// 0 = 0x0
    MISSING_TYPE *statusPassthrough;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_statusPublisher;	// 0 = 0x0
    MISSING_TYPE *locationRequestDebounceWait;	// 1828368 = 0x1be610
    MISSING_TYPE *$__lazy_storage_$_manager;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000176040
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000175fa0
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x0000000000175f00
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x0000000000175680
- (id)init;	// IMP=0x0000000000171460

@end

