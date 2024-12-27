//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, UICollectionViewFlowLayout;

__attribute__((visibility("hidden")))
@interface _UIFlowLayoutInfo : NSObject
{
    _Bool _useFloatingHeaderFooter;	// 8 = 0x8
    struct CGRect _visibleBounds;	// 16 = 0x10
    struct CGSize _layoutSize;	// 48 = 0x30
    _Bool _isValid;	// 64 = 0x40
    struct CGSize _computedEstimatedSum;	// 72 = 0x48
    long long _computedEstimatedCount;	// 88 = 0x58
    _Bool _usesFloatingHeaderFooter;	// 96 = 0x60
    _Bool _horizontal;	// 97 = 0x61
    _Bool _leftToRight;	// 98 = 0x62
    _Bool _estimatesSizes;	// 99 = 0x63
    NSMutableArray *_sections;	// 104 = 0x68
    double _dimension;	// 112 = 0x70
    UICollectionViewFlowLayout *_layout;	// 120 = 0x78
    CDStruct_2f5e8405 _rowAlignmentOptions;	// 128 = 0x80
    struct CGSize _contentSize;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000651465
- (id)copy;	// IMP=0x000000000064f019
- (id)init;	// IMP=0x000000000064ee65

@end

