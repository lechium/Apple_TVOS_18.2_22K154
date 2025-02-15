//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKServerChangeToken, NSArray, NSDate, SCKZoneDiff;

@protocol SCKZoneStore
@property(copy, nonatomic) NSArray *pendingCommands;
@property(copy, nonatomic) NSArray *serverRecords;
@property(copy, nonatomic) CKServerChangeToken *serverChangeToken;
@property(copy, nonatomic) NSDate *lastDirtyDate;
@property(copy, nonatomic) NSDate *lastSyncDate;
- (void)clearPendingCommandsUpToCount:(unsigned long long)arg1;
- (void)addPendingCommands:(NSArray *)arg1;
- (void)applyServerRecordsDiff:(SCKZoneDiff *)arg1;
@end

