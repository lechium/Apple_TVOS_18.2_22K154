//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount;
@protocol OS_dispatch_queue;

@interface IMCoreAccountsMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ACAccount *_cachedPrimaryAppleAccount;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x004000000016b826
- (void).cxx_destruct;	// IMP=0x000000000016bcb9
- (void)accountStoreDidChange:(id)arg1;	// IMP=0x000000000016bb59
- (id)_cachedPrimaryAppleAccount;	// IMP=0x000000000016b8ae
@property(readonly, nonatomic) _Bool isSignedIntoiCloud;
- (id)init;	// IMP=0x000000000016b71e

@end

