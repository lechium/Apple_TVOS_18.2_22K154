//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreRecents/NSObject-Protocol.h>

@class CRSearchQuery, NSArray, NSString;

@protocol CRDRecentContactsLibraryProtocol <NSObject>
- (void)restorePreviouslyDeletedRecentContacts:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)removeAllRecentContactsWithCompletion:(void (^)(NSError *))arg1;
- (void)removeRecentContactsWithRecentIDs:(NSArray *)arg1 syncKeys:(NSArray *)arg2 domain:(NSString *)arg3;
- (void)recordContactEvents:(NSArray *)arg1 domain:(NSString *)arg2 sendingAddress:(NSString *)arg3 source:(NSString *)arg4 completion:(void (^)(NSError *))arg5;
- (void)searchRecentsUsingQuery:(CRSearchQuery *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
@end

