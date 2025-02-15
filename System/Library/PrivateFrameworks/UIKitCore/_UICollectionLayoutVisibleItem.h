//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCollectionLayoutItem, NSIndexPath, NSString, UIBezierPath, UICollectionViewLayoutAttributes;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutVisibleItem : NSObject
{
    _Bool _dirty;	// 8 = 0x8
    UICollectionViewLayoutAttributes *_layoutAttributes;	// 16 = 0x10
    NSCollectionLayoutItem *_layoutItem;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004d139c
@property(readonly, nonatomic) struct CGRect bounds;
@property(nonatomic) struct CGPoint center;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) NSString *representedElementKind;
@property(readonly, nonatomic) unsigned long long representedElementCategory;
@property(readonly, nonatomic) NSString *name;
@property(nonatomic, getter=isHidden) _Bool hidden;
@property(readonly, nonatomic) NSIndexPath *indexPath;
@property(nonatomic) long long zIndex;
@property(nonatomic) double alpha;
@property(nonatomic) struct CGAffineTransform transform;
@property(nonatomic) struct CATransform3D transform3D;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, nonatomic) UIBezierPath *collisionBoundingPath;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIBezierPath",?,R,N

@property(readonly, nonatomic) unsigned long long collisionBoundsType;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

