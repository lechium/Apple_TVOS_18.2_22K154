//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSRBSKeepAlive, NSString;
@protocol OS_os_transaction;

__attribute__((visibility("hidden")))
@interface AMSKeepAlive : NSObject
{
    NSObject<OS_os_transaction> *_transaction;	// 8 = 0x8
    NSString *_logKey;	// 16 = 0x10
    AMSRBSKeepAlive *_rbsKeepAlive;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    long long _style;	// 40 = 0x28
}

+ (void)_handleAssertionExpiration;	// IMP=0x00600000003e255b
+ (void)_accessAssertionCache:(CDUnknownBlockType)arg1;	// IMP=0x00600000003e2240
+ (_Bool)_isRBSAssertionsEnabled;	// IMP=0x00600000003e2228
+ (void)rbs_keepAliveWithName:(id)arg1 style:(long long)arg2 qosOverrideIfRBManaged:(unsigned int)arg3 relativePriority:(long long)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x00600000003e1d2c
+ (void)rbs_keepAliveWithName:(id)arg1 style:(long long)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00600000003e1d13
+ (id)rbs_keepAliveWithName:(id)arg1 style:(long long)arg2;	// IMP=0x00600000003e1cb7
+ (id)rbs_keepAliveWithName:(id)arg1;	// IMP=0x00600000003e1c6a
+ (void)keepAliveWithName:(id)arg1 style:(long long)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00600000003e1be7
+ (id)keepAliveWithName:(id)arg1 style:(long long)arg2;	// IMP=0x00600000003e1b8b
+ (id)keepAliveWithName:(id)arg1;	// IMP=0x00600000003e1b3e
+ (id)keepAliveWithFormat:(id)arg1;	// IMP=0x00600000003e1a1f
- (void).cxx_destruct;	// IMP=0x00000000003e35fc
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_takeProcessAssertion;	// IMP=0x00000000003e3002
- (void)_takeOSTransaction;	// IMP=0x00000000003e2f99
- (void)_startLogTimer;	// IMP=0x00000000003e2bde
- (void)_removeProcessAssertion;	// IMP=0x00000000003e2942
- (void)_removeOSTransaction;	// IMP=0x00000000003e2749
- (id)_cacheKey;	// IMP=0x00000000003e24dd
- (id)_assertionName;	// IMP=0x00000000003e246b
- (void)rbs_invalidate;	// IMP=0x00000000003e2212
- (void)invalidate;	// IMP=0x00000000003e21bb
- (void)dealloc;	// IMP=0x00000000003e204b
- (id)initRBSWithName:(id)arg1 style:(long long)arg2;	// IMP=0x00000000003e1fbf
- (id)initRBSWithName:(id)arg1;	// IMP=0x00000000003e1fab
- (id)initWithName:(id)arg1 style:(long long)arg2;	// IMP=0x00000000003e1d59
- (id)initWithName:(id)arg1;	// IMP=0x00000000003e1d45

@end

