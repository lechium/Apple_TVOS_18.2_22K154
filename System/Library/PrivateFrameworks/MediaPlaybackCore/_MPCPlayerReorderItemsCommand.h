//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPCPlayerReorderItemsCommand
{
}

- (id)moveItem:(id)arg1 beforeItem:(id)arg2;	// IMP=0x0000000000280e3e
- (id)moveItem:(id)arg1 afterItem:(id)arg2;	// IMP=0x0000000000280a69
- (id)limitedDisplayIndexPathForMovingIndexPath:(id)arg1 toProprosedIndexPath:(id)arg2;	// IMP=0x00000000002805f6
- (id)limitedIndexPathForMovingIndexPath:(id)arg1 toProprosedIndexPath:(id)arg2;	// IMP=0x000000000028043a
- (_Bool)canMoveItem:(id)arg1;	// IMP=0x0000000000280354

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

