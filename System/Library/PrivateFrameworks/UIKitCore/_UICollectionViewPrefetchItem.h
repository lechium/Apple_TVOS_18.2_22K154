//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UICollectionReusableView, UICollectionViewLayoutAttributes;

__attribute__((visibility("hidden")))
@interface _UICollectionViewPrefetchItem : NSObject
{
    struct {
        unsigned int needsLayoutAttributesUpdate:1;
        unsigned int needsPreferredAttributesUpdate:1;
        unsigned int needsReconfigure:1;
    } _flags;	// 8 = 0x8
    UICollectionViewLayoutAttributes *_attributes;	// 16 = 0x10
    UICollectionReusableView *_view;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000006566c4
- (id)description;	// IMP=0x00000000006565ea

@end

