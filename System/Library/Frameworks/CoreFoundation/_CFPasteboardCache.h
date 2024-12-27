//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _CFPasteboardCache : NSObject
{
    struct __CFArray *orderedEntries;	// 8 = 0x8
    struct __CFDictionary *entriesByItemIdentifier;	// 16 = 0x10
    struct __CFDictionary *indexesByItemIdentifier;	// 24 = 0x18
    struct __CFArray *itemArray;	// 32 = 0x20
    int generation;	// 40 = 0x28
    int changeCount;	// 44 = 0x2c
}

@property(readonly) struct __CFArray *orderedEntries; // @synthesize orderedEntries;
@property int changeCount; // @synthesize changeCount;
@property(readonly) int generation; // @synthesize generation;
- (void)bumpChangeCount;	// IMP=0x00000000000750d9
- (int)indexForItem:(int)arg1;	// IMP=0x00000000000750a4
- (CDStruct_6ea78fe2)copyFlavorsForItemIdentifier:(long long)arg1;	// IMP=0x0000000000074ed8
- (CDStruct_b6748e3c)flavorCountForItemIdentifier:(long long)arg1;	// IMP=0x0000000000074d5e
- (CDStruct_b6748e3c)itemAtIndex:(long long)arg1;	// IMP=0x0000000000074ceb
- (CDStruct_b6748e3c)itemCount;	// IMP=0x0000000000074cad
- (CDStruct_9e943ef1)copyItemsAndFlavors;	// IMP=0x0000000000074a9d
- (id)entryForGeneration:(int)arg1 itemIdentifier:(int)arg2 flavor:(struct __CFString *)arg3 errorCode:(int *)arg4;	// IMP=0x0000000000074915
- (void)clearForGeneration:(int)arg1;	// IMP=0x00000000000748dc
- (id)updateEntry:(id)arg1;	// IMP=0x0000000000074667
- (void)addEntry:(id)arg1;	// IMP=0x000000000007457b
- (void)dealloc;	// IMP=0x00000000000744ef
- (id)init;	// IMP=0x0000000000074404
- (void)prepareDataForItemIdentifier:(long long)arg1 flavor:(struct __CFString *)arg2;	// IMP=0x000000000010dbee
- (void)prepareMetadata;	// IMP=0x000000000010dbed

@end

