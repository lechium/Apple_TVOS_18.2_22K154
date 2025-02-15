//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, _UIFocusGroupMap, _UIFocusSearchInfo;

__attribute__((visibility("hidden")))
@interface _UIFocusMapSearchInfo : NSObject
{
    _Bool _didFindFocusBlockingBoundary;	// 8 = 0x8
    _Bool _hasOnlyStaticContent;	// 9 = 0x9
    NSArray *_linearSortedFocusItems;	// 16 = 0x10
    _UIFocusGroupMap *_focusGroupMap;	// 24 = 0x18
    NSMutableArray *_mutableSnapshots;	// 32 = 0x20
    NSMutableArray *_mutableDestinationRegions;	// 40 = 0x28
    _UIFocusSearchInfo *_searchInfo;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000097618c
@property(retain, nonatomic) _UIFocusSearchInfo *searchInfo; // @synthesize searchInfo=_searchInfo;
@property(retain, nonatomic) NSMutableArray *mutableDestinationRegions; // @synthesize mutableDestinationRegions=_mutableDestinationRegions;
@property(retain, nonatomic) NSMutableArray *mutableSnapshots; // @synthesize mutableSnapshots=_mutableSnapshots;
@property(readonly, nonatomic) _Bool hasOnlyStaticContent; // @synthesize hasOnlyStaticContent=_hasOnlyStaticContent;
@property(retain, nonatomic) _UIFocusGroupMap *focusGroupMap; // @synthesize focusGroupMap=_focusGroupMap;
@property(retain, nonatomic) NSArray *linearSortedFocusItems; // @synthesize linearSortedFocusItems=_linearSortedFocusItems;
@property(nonatomic) _Bool didFindFocusBlockingBoundary; // @synthesize didFindFocusBlockingBoundary=_didFindFocusBlockingBoundary;
- (void)addDestinationRegion:(id)arg1;	// IMP=0x000000000097607b
- (void)addSnapshot:(id)arg1;	// IMP=0x0000000000975ff1
@property(readonly, copy, nonatomic) NSArray *destinationRegions;
@property(readonly, copy, nonatomic) NSArray *snapshots;
- (id)init;	// IMP=0x0000000000975ee8

@end

