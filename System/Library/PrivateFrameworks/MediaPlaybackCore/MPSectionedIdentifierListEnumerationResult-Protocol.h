//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@protocol MPSectionedIdentifierListEnumerationItem, MPSectionedIdentifierListEnumerationTrackingEntry;

@protocol MPSectionedIdentifierListEnumerationResult <NSObject>
@property(readonly, nonatomic) long long entryType;
@property(readonly, nonatomic) long long branchDepth;
- (id <MPSectionedIdentifierListEnumerationTrackingEntry>)trackingEntryResult;
- (id <MPSectionedIdentifierListEnumerationItem>)itemResult;
@end

