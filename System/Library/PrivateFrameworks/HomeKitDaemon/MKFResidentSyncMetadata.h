//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSPersistentHistoryToken, NSString, _MKFHome;

__attribute__((visibility("hidden")))
@interface MKFResidentSyncMetadata
{
}

+ (id)fetchRequest;	// IMP=0x0080000000efd564
- (_Bool)validateForInsertOrUpdate:(id *)arg1;	// IMP=0x000000000037e18f

// Remaining properties
@property(retain, nonatomic) _MKFHome *home; // @dynamic home;
@property(retain, nonatomic) NSPersistentHistoryToken *lastSeenToken; // @dynamic lastSeenToken;
@property(copy, nonatomic) NSString *lastSyncChecksum; // @dynamic lastSyncChecksum;
@property(copy, nonatomic) NSDate *lastSyncTimestamp; // @dynamic lastSyncTimestamp;
@property(retain, nonatomic) NSPersistentHistoryToken *lastSyncToken; // @dynamic lastSyncToken;

@end

