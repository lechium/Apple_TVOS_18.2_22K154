//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NUIViewContainerViewInfo : NSObject
{
    struct nui_size_cache _sizeCache;	// 8 = 0x8
    struct CGSize _minSize;	// 32 = 0x20
    struct CGSize _maxSize;	// 48 = 0x30
    struct UIEdgeInsets _alignmentInsets;	// 64 = 0x40
    struct UIEdgeInsets _cachedAlignmentInsets;	// 96 = 0x60
    CDStruct_6c92d79e _baselines;	// 128 = 0x80
    struct {
        unsigned int neverCacheLayoutSize:1;
        unsigned int shouldCacheLayoutSize:1;
        unsigned int alsoInvalidateSuperview:1;
        unsigned int cachedAlignmentInsetsAreValid:1;
        unsigned int topBaselineIsCustom:1;
        unsigned int bottomBaselineIsCustom:1;
    } _flags;	// 144 = 0x90
}

- (id).cxx_construct;	// IMP=0x0000000000001c9a
- (void).cxx_destruct;	// IMP=0x0000000000001c7e
- (id)init;	// IMP=0x0000000000001b80

@end

