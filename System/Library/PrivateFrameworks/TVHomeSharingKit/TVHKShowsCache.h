//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface TVHKShowsCache
{
    NSArray *_DAAPShows;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000008e881
@property(copy, nonatomic) NSArray *DAAPShows; // @synthesize DAAPShows=_DAAPShows;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000008e7cd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008e743
- (void)clear;	// IMP=0x000000000008e6c3
- (void)updateWithMediaEntities:(id)arg1 currentServerRevision:(unsigned long long)arg2;	// IMP=0x000000000008e610
- (id)showForIdentifier:(id)arg1;	// IMP=0x000000000008e43d
@property(readonly, copy, nonatomic) NSArray *shows;
- (id)init;	// IMP=0x000000000008e3d3

@end

