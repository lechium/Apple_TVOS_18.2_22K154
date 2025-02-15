//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PBOverlayLayoutOffsetList;

@interface PBOverlayLayoutSuggestionSet : NSObject
{
    PBOverlayLayoutOffsetList *_hOffsets;	// 8 = 0x8
    PBOverlayLayoutOffsetList *_vOffsets;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000b2b3a
@property(readonly, nonatomic) PBOverlayLayoutOffsetList *vOffsets; // @synthesize vOffsets=_vOffsets;
@property(readonly, nonatomic) PBOverlayLayoutOffsetList *hOffsets; // @synthesize hOffsets=_hOffsets;
- (id)bestLayoutSuggestionAtIndexes:(id)arg1 withStickiness:(struct CGVector)arg2;	// IMP=0x00100000000b2906
- (id)layoutSuggestionsAtIndexes:(id)arg1;	// IMP=0x00100000000b2780
- (void)enumerateSuggestionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b2768
- (void)enumerateSuggestionsAtIndexes:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b2579
- (void)addOffset:(double)arg1 forAxis:(unsigned long long)arg2;	// IMP=0x00100000000b250c
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithNodeCount:(unsigned long long)arg1;	// IMP=0x00100000000b24b6
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00100000000b23e8

@end

