//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, _UIFocusGroup;
@protocol UICoordinateSpace;

__attribute__((visibility("hidden")))
@interface _UIFocusGroupMap : NSObject
{
    NSMapTable *_environmentToGroupMap;	// 8 = 0x8
    NSMapTable *_identifierToGroupMap;	// 16 = 0x10
    NSMapTable *_identifierToPrimaryItemMap;	// 24 = 0x18
    _UIFocusGroup *_nullGroup;	// 32 = 0x20
    NSMapTable *_standInItemsMap;	// 40 = 0x28
    NSArray *_focusGroups;	// 48 = 0x30
    id <UICoordinateSpace> _coordinateSpace;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000014bb4a1
@property(readonly, nonatomic) id <UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
- (id)visualDescription;	// IMP=0x00000000014bb241
- (id)description;	// IMP=0x00000000014bb19f
- (id)focusGroupForItem:(id)arg1;	// IMP=0x00000000014bb0d3
@property(readonly, nonatomic) NSArray *focusItems;
@property(readonly, nonatomic) NSArray *focusGroups; // @synthesize focusGroups=_focusGroups;
- (id)_indexEnvironment:(id)arg1;	// IMP=0x00000000014ba863
- (void)_indexItems:(id)arg1;	// IMP=0x00000000014ba4f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000014ba1f6
- (id)initWithItems:(id)arg1 standInItemsMap:(id)arg2 coordinateSpace:(id)arg3;	// IMP=0x00000000014b9f99
- (id)initWithItems:(id)arg1 coordinateSpace:(id)arg2;	// IMP=0x00000000014b9f82

@end

