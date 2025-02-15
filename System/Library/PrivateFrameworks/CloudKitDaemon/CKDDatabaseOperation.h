//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDOperation.h"

@interface CKDDatabaseOperation : CKDOperation
{
    long long _databaseScope;	// 8 = 0x8
}

@property long long databaseScope; // @synthesize databaseScope=_databaseScope;
- (_Bool)supportsClearAssetEncryption;	// IMP=0x000000000035ee91
- (id)analyticsPayload;	// IMP=0x000000000035edec
- (id)CKStatusReportProperties;	// IMP=0x000000000035ed28
- (void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 spawnQueue:(id)arg3 container:(id)arg4 operationConfigurationBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000035ec59
- (id)activityCreate;	// IMP=0x000000000035ec30
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x000000000035e8eb
- (void)setPCSData:(id)arg1 forFetchedShareID:(id)arg2;	// IMP=0x0000000000377e75
- (void)setPCSData:(id)arg1 forFetchedZoneID:(id)arg2;	// IMP=0x0000000000377d19
- (void)setPCSData:(id)arg1 forFetchedRecordID:(id)arg2;	// IMP=0x0000000000377bbd
- (void)_encryptMergeableDeltas:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003d8b3c

@end

