//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, CNContactDataSourceSafeDelegate, CNContactFilter, CNContactFormatter, CNContactStore, CNContactStoreFilter, CNManualObservable, NSArray, NSDictionary, NSMutableArray, NSString;
@protocol CNCancelable, CNContactDataSourceDelegate, CNSchedulerProvider;

__attribute__((visibility("hidden")))
@interface CNContactAsyncDataSource : NSObject
{
    CNContactDataSourceSafeDelegate *_delegate;	// 8 = 0x8
    CNContactFormatter *_contactFormatter;	// 16 = 0x10
    CNContactStore *_store;	// 24 = 0x18
    CNContactStoreFilter *_filter;	// 32 = 0x20
    NSArray *_allKeysToFetchForTransientContacts;	// 40 = 0x28
    id <CNCancelable> _searchCancelationToken;	// 48 = 0x30
    id <CNSchedulerProvider> _reloadSchedulerProvider;	// 56 = 0x38
    CNManualObservable *_reloadStream;	// 64 = 0x40
    NSMutableArray *_resultingContacts;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000ca0f6
@property(retain, nonatomic) NSMutableArray *resultingContacts; // @synthesize resultingContacts=_resultingContacts;
@property(retain, nonatomic) CNManualObservable *reloadStream; // @synthesize reloadStream=_reloadStream;
@property(retain, nonatomic) id <CNSchedulerProvider> reloadSchedulerProvider; // @synthesize reloadSchedulerProvider=_reloadSchedulerProvider;
@property(retain, nonatomic) id <CNCancelable> searchCancelationToken; // @synthesize searchCancelationToken=_searchCancelationToken;
@property(retain, nonatomic) NSArray *allKeysToFetchForTransientContacts; // @synthesize allKeysToFetchForTransientContacts=_allKeysToFetchForTransientContacts;
@property(copy, nonatomic) CNContactStoreFilter *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) CNContactStore *store; // @synthesize store=_store;
@property(retain, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"CNContactFormatter",?,&,N,V_contactFormatter

- (void)invalidate;	// IMP=0x00000000000c9ff2
- (void)invalidateSearch;	// IMP=0x00000000000c9f75
- (void)invalidateResults;	// IMP=0x00000000000c9eef
- (void)reloadWithRequest:(id)arg1;	// IMP=0x00000000000c9980
- (void)reload;	// IMP=0x00000000000c97e9
@property(readonly, nonatomic) CNContactFilter *effectiveFilter;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"CNContactFilter",?,R,N

- (id)indexPathForContact:(id)arg1;	// IMP=0x00000000000c9672
- (id)completeContactFromContact:(id)arg1 fromMainStoreOnly:(_Bool)arg2 keysToFetch:(id)arg3;	// IMP=0x00000000000c94db
@property(readonly, nonatomic) NSString *displayName;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@property(readonly, nonatomic) _Bool canReload;
@property(readonly, nonatomic) NSArray *indexSections;
@property(readonly, nonatomic) NSArray *sections;
@property(readonly, nonatomic) NSDictionary *contactMatchInfos;
@property(readonly, nonatomic) NSString *meContactIdentifier;
@property(readonly, nonatomic) NSArray *contacts;
@property(nonatomic) __weak id <CNContactDataSourceDelegate> delegate;
@property(readonly, nonatomic) _Bool shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (void)dealloc;	// IMP=0x00000000000c9313
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c91d0
- (id)initWithStore:(id)arg1;	// IMP=0x00000000000c8fe5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CNContact *meContact;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"CNContact",?,R,N

@property(readonly) Class superclass;

@end

