//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TVHKManualMediaEntitiesFetchOperation
{
    CDUnknownBlockType _fetchMediaEntitiesBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002aa0a
@property(copy, nonatomic) CDUnknownBlockType fetchMediaEntitiesBlock; // @synthesize fetchMediaEntitiesBlock=_fetchMediaEntitiesBlock;
- (void)_processPredicate;	// IMP=0x000000000002a970
- (void)_completeFetchWithMediaEntities:(id)arg1 error:(id)arg2;	// IMP=0x000000000002a77d
- (void)_fetchMediaEntities;	// IMP=0x000000000002a617
- (void)executionDidBegin;	// IMP=0x000000000002a512

@end

