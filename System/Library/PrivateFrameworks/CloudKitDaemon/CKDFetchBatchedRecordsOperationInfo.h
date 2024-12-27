//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray, NSDictionary;

@interface CKDFetchBatchedRecordsOperationInfo : CKDatabaseOperationInfo
{
    _Bool _shouldFetchAssetContents;	// 8 = 0x8
    _Bool _fetchAllChanges;	// 9 = 0x9
    _Bool _forcePCSDecryptionAttempt;	// 10 = 0xa
    NSArray *_recordZoneIDs;	// 16 = 0x10
    NSDictionary *_configurationsByRecordZoneID;	// 24 = 0x18
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;	// 32 = 0x20
    NSDictionary *_supplementalChangeTokenByZoneID;	// 40 = 0x28
    long long _errorReportingStyle;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000002efbbe
- (void).cxx_destruct;	// IMP=0x00000000002f00b4
@property(nonatomic) _Bool forcePCSDecryptionAttempt; // @synthesize forcePCSDecryptionAttempt=_forcePCSDecryptionAttempt;
@property(nonatomic) long long errorReportingStyle; // @synthesize errorReportingStyle=_errorReportingStyle;
@property(retain, nonatomic) NSDictionary *supplementalChangeTokenByZoneID; // @synthesize supplementalChangeTokenByZoneID=_supplementalChangeTokenByZoneID;
@property(retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // @synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey;
@property(nonatomic) _Bool fetchAllChanges; // @synthesize fetchAllChanges=_fetchAllChanges;
@property(nonatomic) _Bool shouldFetchAssetContents; // @synthesize shouldFetchAssetContents=_shouldFetchAssetContents;
@property(retain, nonatomic) NSDictionary *configurationsByRecordZoneID; // @synthesize configurationsByRecordZoneID=_configurationsByRecordZoneID;
@property(retain, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002efd22
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002efbc6

@end

