//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC16ReplicatorEngine21ConcreteIDSDependency : NSObject
{
    MISSING_TYPE *_accountsChanged;	// 8 = 0x8
    MISSING_TYPE *$__lazy_storage_$_accountsChanged;	// 16 = 0x10
    MISSING_TYPE *_devicesChanged;	// 24 = 0x18
    MISSING_TYPE *$__lazy_storage_$_devicesChanged;	// 32 = 0x20
    MISSING_TYPE *serviceName;	// 40 = 0x28
    MISSING_TYPE *service;	// 56 = 0x38
    MISSING_TYPE *lock;	// 64 = 0x40
    MISSING_TYPE *lock_identityBlob;	// 72 = 0x48
    MISSING_TYPE *calloutQueue;	// 88 = 0x58
    MISSING_TYPE *identityFetchQueue;	// 96 = 0x60
    MISSING_TYPE *lock_localDeviceID;	// 104 = 0x68
    MISSING_TYPE *lock_fetchingLocalDeviceID;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000000d35d0
- (id)init;	// IMP=0x00000000000d3570
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x00000000000d3820
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x00000000000d37d0

@end

