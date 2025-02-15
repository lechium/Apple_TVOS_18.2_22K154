//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, UIColor;

__attribute__((visibility("hidden")))
@interface _UIFocusRegionMapEntry : NSObject
{
    _UIFocusRegionMapEntry *_originalEntry;	// 8 = 0x8
    _UIFocusRegionMapEntry *_parentEntry;	// 16 = 0x10
    NSMutableSet *_occludingFrames;	// 24 = 0x18
    struct CGRect _frame;	// 32 = 0x20
    struct CGRect _originalRegionFrame;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000096d808
@property(retain, nonatomic) NSMutableSet *occludingFrames; // @synthesize occludingFrames=_occludingFrames;
@property(retain, nonatomic) _UIFocusRegionMapEntry *parentEntry; // @synthesize parentEntry=_parentEntry;
@property(retain, nonatomic) _UIFocusRegionMapEntry *originalEntry; // @synthesize originalEntry=_originalEntry;
@property(nonatomic) struct CGRect originalRegionFrame; // @synthesize originalRegionFrame=_originalRegionFrame;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (id)description;	// IMP=0x000000000096d6a6
@property(readonly, nonatomic) long long visualRepresentationPatternType;
@property(readonly, copy, nonatomic) UIColor *visualRepresentationColor;
- (id)_uniqueElementFromArray:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000096d377
- (void)_wasOccludedByFrame:(struct CGRect)arg1;	// IMP=0x000000000096d24f
- (id)sliceWithFrame:(struct CGRect)arg1;	// IMP=0x000000000096d1dc
- (id)_mapEntriesByOccludingWithFrame:(struct CGRect)arg1;	// IMP=0x000000000096cb24
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000096ca93
- (id)initWithFrame:(struct CGRect)arg1 originalRegionFrame:(struct CGRect)arg2;	// IMP=0x000000000096ca24

@end

