//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, AISSignOutController;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface UPDAccountsController : NSObject
{
    ACAccountStore *_accountStore;	// 8 = 0x8
    AISSignOutController *_signOutController;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003f372
- (void)_removeOrphanAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003f121
- (id)_orphanedAccountsWithCurrentAccounts:(id)arg1 inUseUserContexts:(id)arg2;	// IMP=0x000000000003eb3f
- (void)_removeOrphanedAccountsWithCurrentAccounts:(id)arg1 inUseUserContexts:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003e6e6
- (void)_fetchAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003e08b
- (void)removeOrphanedAccountsWithCurrentAccounts:(id)arg1 currentGuestPersonaUniqueStrings:(id)arg2 inUseUserContexts:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003dbf5
- (void)fetchAccountsAndGuestPersonasWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003d55b
- (void)signOutUsersWithContexts:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003cad3
- (id)initWithAccountStore:(id)arg1 calloutQueue:(id)arg2;	// IMP=0x000000000003c872
- (id)initWithCalloutQueue:(id)arg1;	// IMP=0x000000000003c7f1

@end

