//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactStore.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNAggregateContactStore : CNContactStore
{
    CNContactStore *_mainStore;	// 8 = 0x8
    NSArray *_contactStores;	// 16 = 0x10
    CNContactStore *_contactStoreForMatchingDictionaryWork;	// 24 = 0x18
    NSArray *_postFetchDecoratorBlocks;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000017e53
@property(retain, nonatomic) NSArray *postFetchDecoratorBlocks; // @synthesize postFetchDecoratorBlocks=_postFetchDecoratorBlocks;
@property(retain, nonatomic) CNContactStore *contactStoreForMatchingDictionaryWork; // @synthesize contactStoreForMatchingDictionaryWork=_contactStoreForMatchingDictionaryWork;
@property(copy, nonatomic) NSArray *contactStores; // @synthesize contactStores=_contactStores;
- (id)getWatchLimitedAccessSyncDataStartingAtSequenceNumber:(long long)arg1;	// IMP=0x0000000000017d99
- (_Bool)analyzeDatabaseWithError:(id *)arg1;	// IMP=0x0000000000017d48
- (_Bool)shouldAnalyzeDatabaseWithError:(id *)arg1;	// IMP=0x0000000000017cf7
- (void)setLimitedAccessTableCurrentSequenceNumber:(id)arg1;	// IMP=0x0000000000017c8e
- (void)dropAllLimitedAccessRowsAndSyncNotify;	// IMP=0x0000000000017c51
- (void)dropAllLimitedAccessRows;	// IMP=0x0000000000017c14
- (void)applyLimitedAccessSyncEvents:(id)arg1;	// IMP=0x0000000000017bab
- (id)getLimitedAccessLastSyncSequenceNumber:(id *)arg1;	// IMP=0x0000000000017b4c
- (void)updateLimitedAccessTable:(id)arg1;	// IMP=0x0000000000017ae3
- (void)purgeLimitedAccessRecordsForBundle:(id)arg1;	// IMP=0x0000000000017a7a
- (id)populateSyncTableForLimitedAccessAboveSequenceNumber:(id)arg1;	// IMP=0x0000000000017a00
- (id)getLimitedAccessContactsCountForBundle:(id)arg1;	// IMP=0x0000000000017986
- (void)removeLimitedAccessForBundle:(id)arg1 contactIdentifiers:(id)arg2;	// IMP=0x00000000000178fb
- (void)removeLimitedAccessForBundle:(id)arg1 contactIdentifier:(id)arg2;	// IMP=0x0000000000017870
- (void)addLimitedAccessForBundle:(id)arg1 contactIdentifiers:(id)arg2;	// IMP=0x00000000000177e5
- (void)addLimitedAccessForBundle:(id)arg1 contactIdentifier:(id)arg2;	// IMP=0x000000000001775a
- (id)fetchLimitedAccessContactIdentifiersForBundle:(id)arg1;	// IMP=0x00000000000176e0
- (_Bool)verifyChangeHistoryForClientIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000017665
- (id)latestConsumedChangeHistoryAnchorForClientIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000175dc
- (id)individualContactCountWithError:(id *)arg1;	// IMP=0x000000000001757d
- (_Bool)setDefaultAccountIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000017502
- (_Bool)resetSortDataIfNeededWithError:(id *)arg1;	// IMP=0x00000000000174b1
- (_Bool)moveContacts:(id)arg1 fromContainer:(id)arg2 toContainer:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000017410
- (int)saveSequenceCount;	// IMP=0x00000000000173cc
- (id)identifierWithError:(id *)arg1;	// IMP=0x000000000001736d
- (_Bool)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000172cc
- (id)getBackgroundColorOnImageData:(id)arg1 bitmapFormat:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001709f
- (void)addPostFetchDecorator:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016fdb
- (id)applyPostFetchDecoratorsToContacts:(id)arg1 keysToFetch:(id)arg2 unifyContactsFromMainStore:(_Bool)arg3;	// IMP=0x0000000000016dd1
- (id)applyPostFetchDecoratorsToContact:(id)arg1 keysToFetch:(id)arg2 unifyContactsFromMainStore:(_Bool)arg3;	// IMP=0x0000000000016cd3
- (_Bool)executeChangeHistoryClearRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000016b63
- (_Bool)clearChangeHistoryForClientIdentifier:(id)arg1 toChangeAnchor:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000169d6
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001684c
- (_Bool)unregisterChangeHistoryClientIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000166dc
- (_Bool)registerChangeHistoryClientIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001656c
- (id)matchingDictionaryForContact:(id)arg1;	// IMP=0x00000000000164f2
- (id)contactIdentifierWithMatchingDictionary:(id)arg1;	// IMP=0x0000000000016478
- (id)descriptorForRequiredKeysForMatchingDictionary;	// IMP=0x0000000000016428
- (id)findContactStoreForMatchingDictionaryWork;	// IMP=0x000000000001629c
- (id)userActivityUserInfoForContact:(id)arg1;	// IMP=0x0000000000016079
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x0000000000015ede
- (id)currentHistoryAnchor;	// IMP=0x0000000000015e8e
- (id)currentHistoryToken;	// IMP=0x0000000000015e3e
- (id)enumeratorForChangeHistoryFetchRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000015c9f
- (id)enumeratorForContactFetchRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000155e8
- (id)executeFetchRequest:(id)arg1 progressiveResults:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000014fa8
- (_Bool)executeSaveRequest:(id)arg1 response:(id *)arg2 authorizationContext:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000014ccd
- (_Bool)executeSaveRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000014cb3
- (_Bool)supportsSaveRequest:(id)arg1;	// IMP=0x0000000000014bf8
- (id)accountsMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000014b2d
- (_Bool)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000148cf
- (_Bool)setMeContact:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000146af
- (id)usedLabelsForPropertyWithKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000145e4
- (id)policyWithDescription:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001445a
- (id)defaultContainerIdentifier;	// IMP=0x000000000001430c
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000014241
- (id)containersMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000014176
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000140ab
- (id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000013fbb
- (id)groupWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000013e31
- (id)groupsMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000013d66
- (_Bool)enumerateNonUnifiedContactsWithFetchRequest:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000136c8
- (_Bool)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000001299e
- (id)meContactIdentifiers:(id *)arg1;	// IMP=0x00000000000126fd
- (id)_unifiedMeContactWithKeysToFetch:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000123f5
- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000011f9d
- (id)contactCountForFetchRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000011dae
- (id)unifiedContactCountWithError:(id *)arg1;	// IMP=0x0000000000011bf1
- (id)sectionListOffsetsForSortOrder:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000000011b8d
- (id)_unifiedContactsFromContacts:(id)arg1 unifyContactsFromMainStore:(_Bool)arg2 keysToFetch:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000010d9b
- (void)didFetchContacts:(id)arg1 forPredicate:(id)arg2 fromStore:(id)arg3 unifiedFetch:(_Bool)arg4;	// IMP=0x0000000000010cad
- (void)_enumerateStoresUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010b62
- (id)_allStoreResultsWithError:(id *)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000001092c
- (id)requestAccessForEntityType:(long long)arg1;	// IMP=0x0000000000010821
- (id)mainContactStore;	// IMP=0x000000000001080f
@property(readonly, nonatomic) __weak CNContactStore *mainStore;
- (_Bool)hasGroups;	// IMP=0x0000000000010607
- (_Bool)hasMultipleGroupsOrAccounts;	// IMP=0x00000000000105a7
- (_Bool)store:(id)arg1 supportsSelector:(SEL)arg2;	// IMP=0x0000000000010555
- (id)initWithContactStores:(id)arg1 configuration:(id)arg2;	// IMP=0x00000000000103da
- (id)initWithContactStores:(id)arg1;	// IMP=0x00000000000103c6
- (id)iOSMapper;	// IMP=0x00000000000cf763
- (id)XPCDataMapperStore;	// IMP=0x000000000013926a
- (id)originForSuggestion:(id)arg1 error:(id *)arg2;	// IMP=0x000000000013ffb2

@end

