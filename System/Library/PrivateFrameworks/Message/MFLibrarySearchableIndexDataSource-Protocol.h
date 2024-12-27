//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Message/NSObject-Protocol.h>

@class MFLibrarySearchableIndex, MFLibrarySearchableIndexUpdates, NSArray, NSDictionary;

@protocol MFLibrarySearchableIndexDataSource <NSObject>
- (NSDictionary *)verificationDataSamplesForSearchableIndex:(MFLibrarySearchableIndex *)arg1;
- (void)searchableIndex:(MFLibrarySearchableIndex *)arg1 invalidateItemsGreaterThanTransaction:(long long)arg2;
- (NSArray *)searchableIndex:(MFLibrarySearchableIndex *)arg1 assignTransaction:(long long)arg2 updates:(MFLibrarySearchableIndexUpdates *)arg3;
- (MFLibrarySearchableIndexUpdates *)updatesForSearchableIndex:(MFLibrarySearchableIndex *)arg1 count:(unsigned long long)arg2;
@end

