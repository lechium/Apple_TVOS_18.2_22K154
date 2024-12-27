//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TVHKSeasonsCache
{
    NSArray *_seasons;	// 8 = 0x8
    NSArray *_episodes;	// 16 = 0x10
    NSMutableDictionary *_showByIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000072426
@property(retain, nonatomic) NSMutableDictionary *showByIdentifier; // @synthesize showByIdentifier=_showByIdentifier;
@property(copy, nonatomic) NSArray *episodes; // @synthesize episodes=_episodes;
@property(copy, nonatomic) NSArray *seasons; // @synthesize seasons=_seasons;
- (id)_DAAPSeasonForIdentifier:(id)arg1;	// IMP=0x0000000000072229
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000072197
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007210d
- (void)clear;	// IMP=0x000000000007206a
- (void)updateWithMediaEntities:(id)arg1 currentServerRevision:(unsigned long long)arg2;	// IMP=0x0000000000071e0b
- (id)episodesForSeasonIdentifier:(id)arg1;	// IMP=0x0000000000071dbb
- (id)seasonForIdentifier:(id)arg1;	// IMP=0x0000000000071da9
- (id)seasonsForShowIdentifier:(id)arg1;	// IMP=0x0000000000071d08
- (id)init;	// IMP=0x00000000000717cf

@end

