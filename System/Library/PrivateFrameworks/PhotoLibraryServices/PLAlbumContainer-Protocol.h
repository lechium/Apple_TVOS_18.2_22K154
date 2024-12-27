//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLAssetContainerList-Protocol.h>

@class NSArray, NSIndexSet, NSMutableOrderedSet, NSNumber, NSObject, NSString;
@protocol PLAlbumProtocol;

@protocol PLAlbumContainer <PLAssetContainerList>
@property(readonly, retain, nonatomic) NSString *_typeDescription;
@property(readonly, retain, nonatomic) NSString *_prettyDescription;
@property(readonly, nonatomic) unsigned long long unreadAlbumsCount;
@property(readonly, nonatomic) int filter;
@property(readonly, copy, nonatomic) CDUnknownBlockType albumsSortingComparator;
@property(readonly, nonatomic) _Bool isFolder;
@property(readonly, nonatomic) unsigned long long albumsCount;
- (void)preheatAlbumsAtIndexes:(NSIndexSet *)arg1 forProperties:(NSArray *)arg2 relationships:(NSArray *)arg3;
- (void)preheatAlbumsForProperties:(NSArray *)arg1 relationships:(NSArray *)arg2;
- (void)updateAlbumsOrderIfNeeded;
- (_Bool)needsReordering;
- (void)setNeedsReordering;
- (_Bool)albumHasFixedOrder:(NSObject<PLAlbumProtocol> *)arg1;
- (_Bool)canEditAlbums;
- (short)albumListType;
- (_Bool)hasAtLeastOneAlbum;
- (NSMutableOrderedSet *)albums;
- (NSNumber *)identifier;
@end

