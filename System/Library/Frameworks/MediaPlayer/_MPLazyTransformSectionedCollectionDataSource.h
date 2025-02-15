//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPSectionedCollection, NSString;

__attribute__((visibility("hidden")))
@interface _MPLazyTransformSectionedCollectionDataSource : NSObject
{
    MPSectionedCollection *_collection;	// 8 = 0x8
    CDUnknownBlockType _sectionTransform;	// 16 = 0x10
    CDUnknownBlockType _itemTransform;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005d12a
@property(readonly, copy, nonatomic) CDUnknownBlockType itemTransform; // @synthesize itemTransform=_itemTransform;
@property(readonly, copy, nonatomic) CDUnknownBlockType sectionTransform; // @synthesize sectionTransform=_sectionTransform;
@property(readonly, nonatomic) MPSectionedCollection *collection; // @synthesize collection=_collection;
- (id)sectionAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005d0a7
- (unsigned long long)numberOfSections;	// IMP=0x000000000005d091
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;	// IMP=0x000000000005d07b
- (id)itemAtIndexPath:(id)arg1;	// IMP=0x000000000005cffe
- (id)initWithSectionedCollection:(id)arg1 sectionTransform:(CDUnknownBlockType)arg2 itemTransform:(CDUnknownBlockType)arg3;	// IMP=0x000000000005cf34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

