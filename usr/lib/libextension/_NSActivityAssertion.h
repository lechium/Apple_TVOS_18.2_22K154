//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NSObject, OS_os_transaction, OS_voucher;

__attribute__((visibility("hidden")))
@interface _NSActivityAssertion : NSObject
{
    unsigned long long _options;	// 8 = 0x8
    NSString *_reason;	// 16 = 0x10
    NSObject<OS_os_transaction> *_transaction;	// 24 = 0x18
    unsigned int _systemSleepAssertionID;	// 32 = 0x20
    NSObject<OS_voucher> *_voucher;	// 40 = 0x28
    NSObject<OS_voucher> *_previousVoucher;	// 48 = 0x30
    _Atomic unsigned long long _signpostID;	// 56 = 0x38
    id <NSObject> _xpcBoost;	// 64 = 0x40
    id _processAssertion;	// 72 = 0x48
    CDUnknownBlockType _expirationHandler;	// 80 = 0x50
    struct os_unfair_lock_s _lock;	// 88 = 0x58
    _Atomic _Bool _ended;	// 92 = 0x5c
    unsigned char _adoptPreviousVoucher;	// 93 = 0x5d
}

+ (void)_performExpiringActivityWithReason:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00600000007e18c7
+ (void)_performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00600000007e173c
+ (void)_expireAllActivies;	// IMP=0x00600000007e051f
+ (void)_dumpExpiringActivitives;	// IMP=0x00600000007e03af
+ (id)_expiringActivities;	// IMP=0x00600000007e0356
+ (id)_expirationHandlerExecutionQueue;	// IMP=0x00600000007e030a
+ (id)_expiringTaskExecutionQueue;	// IMP=0x00600000007e02be
+ (id)_expiringAssertionManagementQueue;	// IMP=0x00600000007e0277
- (_Bool)_isEnded;	// IMP=0x00000000007e1a60
- (void)_fireExpirationHandler;	// IMP=0x00000000007e1520
- (void)_reactivate;	// IMP=0x00000000007e14ec
- (void)_endFromDealloc:(_Bool)arg1;	// IMP=0x00000000007e1236
- (id)debugDescription;	// IMP=0x00000000007e11ab
- (void)dealloc;	// IMP=0x00000000007e1131
- (id)_initWithActivityOptions:(unsigned long long)arg1 reason:(id)arg2 expirationHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000007e0954

@end

