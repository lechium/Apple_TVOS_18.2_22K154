//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "IMDMessageStore.h"

@class CKRecordZoneID;

@interface IMDScheduledMessageStore : IMDMessageStore
{
}

- (id)init;	// IMP=0x000000000021fed0
- (void)clearTombstonesForRecordIDs:(id)arg1;	// IMP=0x000000000021fe20
- (id)recordIDsAndGUIDsToDeleteWithLimit:(long long)arg1;	// IMP=0x000000000021fdd0
- (id)messageRecordsToUploadToCloudKitWithFilter:(unsigned long long)arg1 limit:(long long)arg2;	// IMP=0x000000000021fd60
@property(nonatomic, readonly) CKRecordZoneID *recordZoneID;

@end

