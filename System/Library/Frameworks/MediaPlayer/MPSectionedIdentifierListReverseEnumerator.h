//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class MPSectionedIdentifierList, MPSectionedIdentifierListEntry, NSMutableArray, _MPSectionedIdentifierListProxyEntry;

__attribute__((visibility("hidden")))
@interface MPSectionedIdentifierListReverseEnumerator : NSEnumerator
{
    _MPSectionedIdentifierListProxyEntry *_startEntryProxy;	// 8 = 0x8
    MPSectionedIdentifierList *_sectionedIdentifierList;	// 16 = 0x10
    unsigned long long _options;	// 24 = 0x18
    NSMutableArray *_contexts;	// 32 = 0x20
    NSMutableArray *_entriesToEmit;	// 40 = 0x28
    NSMutableArray *_nextEmittableEnumerationResults;	// 48 = 0x30
    MPSectionedIdentifierListEntry *_endEntry;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000672b0
@property(retain, nonatomic) MPSectionedIdentifierListEntry *endEntry; // @synthesize endEntry=_endEntry;
@property(retain, nonatomic) NSMutableArray *nextEmittableEnumerationResults; // @synthesize nextEmittableEnumerationResults=_nextEmittableEnumerationResults;
@property(retain, nonatomic) NSMutableArray *entriesToEmit; // @synthesize entriesToEmit=_entriesToEmit;
@property(retain, nonatomic) NSMutableArray *contexts; // @synthesize contexts=_contexts;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) MPSectionedIdentifierList *sectionedIdentifierList; // @synthesize sectionedIdentifierList=_sectionedIdentifierList;
- (id)_startEntryProxy;	// IMP=0x0000000000067198
- (id)nextObject;	// IMP=0x00000000000670b3
- (id)nextObjectWithExclusiveAccessToken:(id)arg1;	// IMP=0x0000000000066648
- (id)initWithSectionedIdentifierList:(id)arg1 options:(unsigned long long)arg2 startEntry:(id)arg3 endEntry:(id)arg4 withExclusiveAccessToken:(id)arg5;	// IMP=0x0000000000066280

@end

