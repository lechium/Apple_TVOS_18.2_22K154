//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNiOSABContactsUserDefaultsABWrapper : NSObject
{
}

- (void)setLastIgnoredNewDuplicatesCount:(long long)arg1;	// IMP=0x00000000000632dc
- (long long)lastIgnoredNewDuplicatesCount;	// IMP=0x00000000000632c1
- (void)setDisplayedContactsFilterRepresentationPref:(id)arg1;	// IMP=0x000000000006327c
- (id)displayedContactsFilterRepresentationPref;	// IMP=0x000000000006325b
- (id)abDefaultCountryCode;	// IMP=0x0000000000063242
- (_Bool)ABPersonGetShortNamePreferNicknames;	// IMP=0x0000000000063238
- (void)ABPersonSetShortNamePreferNicknames:(_Bool)arg1;	// IMP=0x000000000006322c
- (_Bool)ABPersonGetShortNameFormatEnabled;	// IMP=0x0000000000063222
- (void)ABPersonSetShortNameFormatEnabled:(_Bool)arg1;	// IMP=0x0000000000063216
- (unsigned int)ABPersonGetShortNameFormat;	// IMP=0x000000000006320c
- (void)ABPersonSetShortNameFormat:(unsigned int)arg1;	// IMP=0x0000000000063200
- (unsigned int)ABPersonGetSortOrdering;	// IMP=0x00000000000631f6
- (unsigned int)ABPersonGetEditNameFormat;	// IMP=0x00000000000631ec
- (void)ABPersonSetCompositeNameFormat:(unsigned int)arg1;	// IMP=0x00000000000631e0
- (unsigned int)ABPersonGetCompositeNameFormatForRecord:(void *)arg1;	// IMP=0x00000000000631d3

@end

