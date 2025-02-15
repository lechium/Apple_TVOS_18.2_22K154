//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol VOTNameSearcherDelegate, VOTNameSearcherEntry, VOTNameSearcherFilter, VOTNameSearcherItemSource;

@interface VOTNameSearcher : NSObject
{
    _Bool _searchPending;	// 8 = 0x8
    id <VOTNameSearcherDelegate> _delegate;	// 16 = 0x10
    id <VOTNameSearcherItemSource> _itemSource;	// 24 = 0x18
    id <VOTNameSearcherFilter> _filter;	// 32 = 0x20
    NSArray *_allEntries;	// 40 = 0x28
    NSArray *_filteredEntries;	// 48 = 0x30
    id <VOTNameSearcherEntry> _focusedEntry;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000fa9c5
@property(nonatomic) _Bool searchPending; // @synthesize searchPending=_searchPending;
@property(retain, nonatomic) id <VOTNameSearcherEntry> focusedEntry; // @synthesize focusedEntry=_focusedEntry;
@property(retain, nonatomic) NSArray *filteredEntries; // @synthesize filteredEntries=_filteredEntries;
@property(retain, nonatomic) NSArray *allEntries; // @synthesize allEntries=_allEntries;
@property(nonatomic) __weak id <VOTNameSearcherFilter> filter; // @synthesize filter=_filter;
@property(retain, nonatomic) id <VOTNameSearcherItemSource> itemSource; // @synthesize itemSource=_itemSource;
@property(nonatomic) __weak id <VOTNameSearcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_focusOnItemAtIndexInFilteredItems:(long long)arg1;	// IMP=0x00100000000fa752
- (void)_updateFilteredItemsWithSearchText;	// IMP=0x00100000000fa42e
- (void)didRetrieveAllEntries:(id)arg1;	// IMP=0x00100000000fa39e
- (void)selectFocusedItem;	// IMP=0x00100000000fa267
- (void)focusOnLastMatchingItem;	// IMP=0x00100000000fa1ee
- (void)focusOnFirstMatchingItem;	// IMP=0x00100000000fa1b5
- (void)focusOnNextMatchingItem;	// IMP=0x00100000000fa0b2
- (void)focusOnPreviousMatchingItem;	// IMP=0x00100000000f9faa
- (void)updateMatchingItems;	// IMP=0x00100000000f9f5f
@property(readonly, nonatomic) _Bool itemsLoaded;
- (id)initWithDelegate:(id)arg1 itemSource:(id)arg2 filter:(id)arg3;	// IMP=0x00100000000f9da8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

