//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKMediaEntityCollection.h"

@class TVHKDAAPBrowseMediaEntityCollectionIdentifier, TVHKMediaEntityType;

__attribute__((visibility("hidden")))
@interface TVHKDAAPBrowseMediaEntityCollection : TVHKMediaEntityCollection
{
    TVHKMediaEntityType *_type;	// 8 = 0x8
    TVHKDAAPBrowseMediaEntityCollectionIdentifier *_browseMediaEntityCollectionIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000046336
@property(copy, nonatomic) TVHKDAAPBrowseMediaEntityCollectionIdentifier *browseMediaEntityCollectionIdentifier; // @synthesize browseMediaEntityCollectionIdentifier=_browseMediaEntityCollectionIdentifier;
- (id)type;	// IMP=0x0000000000046303
- (unsigned long long)imageNonPersistentID;	// IMP=0x00000000000462fb
- (unsigned long long)persistentID;	// IMP=0x00000000000462f3
- (unsigned long long)nonPersistentID;	// IMP=0x00000000000462eb
- (unsigned long long)protocol;	// IMP=0x00000000000462e3
- (id)identifier;	// IMP=0x00000000000462d1
- (id)initWithMediaCategoryType:(unsigned long long)arg1 mediaEntityCollectionType:(unsigned long long)arg2 mediaServerIdentifier:(id)arg3 requestedProperties:(id)arg4 entity:(id)arg5;	// IMP=0x000000000004612f
- (id)initWithMediaServerIdentifier:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 kind:(id)arg4;	// IMP=0x00000000000460c0

@end

