//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CPLCloudKitScopeProvider-Protocol.h"

@class CPLCloudKitZoneIdentification, CPLRecordTargetMapping;
@protocol CPLCKRecordPropertyMapping;

@protocol CPLCKBatchUploadPlanner <CPLCloudKitScopeProvider>
@property(readonly, nonatomic) id <CPLCKRecordPropertyMapping> propertyMapping;
@property(readonly, nonatomic) CPLRecordTargetMapping *targetMapping;
@property(readonly, nonatomic) CPLCloudKitZoneIdentification *sharedZoneIdentification;
@property(readonly, nonatomic) CPLCloudKitZoneIdentification *destinationZoneIdentification;
@end

