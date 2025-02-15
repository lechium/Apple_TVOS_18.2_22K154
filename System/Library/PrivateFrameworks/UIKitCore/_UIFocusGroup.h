//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;
@protocol UICoordinateSpace, UIFocusEnvironment, UIFocusItem;

__attribute__((visibility("hidden")))
@interface _UIFocusGroup : NSObject
{
    struct {
        unsigned int itemOrderValid:1;
        unsigned int childGroupOrderValid:1;
        unsigned int primaryItemValid:1;
        unsigned int primaryRectValid:1;
    } _flags;	// 8 = 0x8
    NSMutableArray *_childGroups;	// 16 = 0x10
    NSMutableArray *_items;	// 24 = 0x18
    id <UIFocusItem> _primaryItem;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    _UIFocusGroup *_parentGroup;	// 48 = 0x30
    id <UICoordinateSpace> _coordinateSpace;	// 56 = 0x38
    id <UIFocusEnvironment> _owningEnvironment;	// 64 = 0x40
    struct CGRect _primaryRect;	// 72 = 0x48
    struct CGRect _boundingBox;	// 104 = 0x68
}

+ (id)nullGroupWithCoordinateSpace:(id)arg1;	// IMP=0x0060000000ee3164
- (void).cxx_destruct;	// IMP=0x0000000000ee4103
@property(readonly, nonatomic) id <UIFocusEnvironment> owningEnvironment; // @synthesize owningEnvironment=_owningEnvironment;
@property(readonly, nonatomic) id <UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
@property(readonly, nonatomic) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
@property(readonly, nonatomic) __weak _UIFocusGroup *parentGroup; // @synthesize parentGroup=_parentGroup;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)debugDescription;	// IMP=0x0000000000ee3fc7
- (id)description;	// IMP=0x0000000000ee3f12
- (_Bool)isEqualToFocusGroup:(id)arg1;	// IMP=0x0000000000ee3ef8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ee3e8c
- (unsigned long long)hash;	// IMP=0x0000000000ee3e76
- (void)_validatePrimaryRectIfNeccessary;	// IMP=0x0000000000ee3c6b
- (void)_invalidatePrimaryRect;	// IMP=0x0000000000ee3c61
- (void)_validatePrimaryItemIfNecessary;	// IMP=0x0000000000ee39ff
- (void)_invalidatePrimaryItem;	// IMP=0x0000000000ee39e9
- (void)_validateChildGroupOrderIfNecessary;	// IMP=0x0000000000ee3989
- (void)_invalidateChildGroupOrder;	// IMP=0x0000000000ee3973
- (void)_validateItemOrderIfNecessary;	// IMP=0x0000000000ee3913
- (void)_invalidateItemOrder;	// IMP=0x0000000000ee38fd
@property(readonly, nonatomic) struct CGRect primaryRect; // @synthesize primaryRect=_primaryRect;
@property(readonly, nonatomic) id <UIFocusItem> primaryItem; // @synthesize primaryItem=_primaryItem;
@property(readonly, nonatomic) NSArray *items;
@property(readonly, nonatomic) NSArray *childGroups;
- (void)_updateWithEnvironment:(id)arg1;	// IMP=0x0000000000ee376a
- (void)_insertItem:(id)arg1;	// IMP=0x0000000000ee3738
- (void)_insertChildGroup:(id)arg1;	// IMP=0x0000000000ee3706
- (id)_deepCopyWithNewIdentifierToGroupMap:(id)arg1;	// IMP=0x0000000000ee33ff
- (id)initWithIdentifier:(id)arg1 parentGroup:(id)arg2 coordinateSpace:(id)arg3;	// IMP=0x0000000000ee31ba

@end

