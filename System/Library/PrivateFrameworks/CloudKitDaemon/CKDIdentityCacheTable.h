//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKSQLiteCacheTable.h>

@interface CKDIdentityCacheTable : CKSQLiteCacheTable
{
}

+ (Class)entryClass;	// IMP=0x0080000000084ac6
+ (id)dbProperties;	// IMP=0x0080000000084ab9
- (id)cachedIdentityForLookupInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000084f8a
- (id)insertUserIdentity:(id)arg1 forLookupInfo:(id)arg2 container:(id)arg3;	// IMP=0x0000000000084db2
- (void)deleteUserIdentityForLookupInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000084d12
- (id)predicateForMatchingLookupInfoInContainer;	// IMP=0x0000000000084cf0
- (id)valuesDictionaryForLookupInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000084b9a
- (id)objectClassesForProperty:(id)arg1;	// IMP=0x0000000000084ad7

@end

