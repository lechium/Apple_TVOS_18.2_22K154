//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCollectionLayoutSize;

__attribute__((visibility("hidden")))
@interface _UICollectionPreferredSize : NSObject
{
    struct CGSize _originalSize;	// 8 = 0x8
    struct CGSize _fittingSize;	// 24 = 0x18
    NSCollectionLayoutSize *_layoutSize;	// 40 = 0x28
    _Bool _preferredSizeDirty;	// 48 = 0x30
    id _additionalData;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000004ab99c
- (id)description;	// IMP=0x00000000004ab8b9

@end

