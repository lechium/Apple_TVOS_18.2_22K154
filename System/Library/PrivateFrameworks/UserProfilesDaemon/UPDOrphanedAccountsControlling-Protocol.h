//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSSet;

@protocol UPDOrphanedAccountsControlling
- (void)removeOrphanedAccountsWithCurrentAccounts:(NSArray *)arg1 currentGuestPersonaUniqueStrings:(NSSet *)arg2 inUseUserContexts:(NSSet *)arg3 completion:(void (^)(void))arg4;
- (void)fetchAccountsAndGuestPersonasWithCompletion:(void (^)(NSArray *, NSSet *, NSError *))arg1;
@end

