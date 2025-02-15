//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSArray;

@interface SoftwareLibraryLookupOperation : ISOperation
{
    NSArray *_bundleIDs;	// 96 = 0x60
    NSArray *_itemIDs;	// 104 = 0x68
    NSArray *_softwareLibraryItems;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x002000000018e348
- (id)_newSoftwareLibraryItemWithContainerPath:(id)arg1;	// IMP=0x001000000018e2a4
- (id)_newSoftwareLibraryItemWithApplicationRecord:(id)arg1;	// IMP=0x001000000018dfe9
- (void)_loadFromItemIdentifiers;	// IMP=0x001000000018dab1
- (void)_loadFromBundleIdentifiers;	// IMP=0x001000000018cd6e
- (void)run;	// IMP=0x001000000018cd21
@property(readonly) NSArray *softwareLibraryItems;
@property(readonly) NSArray *itemIdentifiers;
@property(readonly) NSArray *bundleIdentifiers;
- (id)initWithItemIdentifiers:(id)arg1;	// IMP=0x001000000018ca88
- (id)initWithBundleIdentifiers:(id)arg1;	// IMP=0x001000000018c86a

@end

