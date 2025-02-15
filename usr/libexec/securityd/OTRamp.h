//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKDatabase, CKKSAccountStateTracker, CKKSLockStateTracker, CKKSReachabilityTracker, CKRecordZone, CKRecordZoneID, MISSING_TYPE, NSDate, NSString;

@interface OTRamp : NSObject
{
    _Bool _cachedFeatureAllowed;	// 8 = 0x8
    CKContainer *_container;	// 16 = 0x10
    CKDatabase *_database;	// 24 = 0x18
    CKRecordZone *_zone;	// 32 = 0x20
    MISSING_TYPE *_zoneID;	// 40 = 0x28
    NSString *_recordName;	// 48 = 0x30
    NSString *_localSettingName;	// 56 = 0x38
    CKKSAccountStateTracker *_accountTracker;	// 64 = 0x40
    CKKSLockStateTracker *_lockStateTracker;	// 72 = 0x48
    CKKSReachabilityTracker *_reachabilityTracker;	// 80 = 0x50
    long long _accountStatus;	// 88 = 0x58
    Class _fetchRecordRecordsOperationClass;	// 96 = 0x60
    NSDate *_lastFetch;	// 104 = 0x68
    double _retryAfter;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0020000000138a69
@property _Bool cachedFeatureAllowed; // @synthesize cachedFeatureAllowed=_cachedFeatureAllowed;
@property double retryAfter; // @synthesize retryAfter=_retryAfter;
@property(retain) NSDate *lastFetch; // @synthesize lastFetch=_lastFetch;
@property(readonly) Class fetchRecordRecordsOperationClass; // @synthesize fetchRecordRecordsOperationClass=_fetchRecordRecordsOperationClass;
@property long long accountStatus; // @synthesize accountStatus=_accountStatus;
@property(retain, nonatomic) CKKSReachabilityTracker *reachabilityTracker; // @synthesize reachabilityTracker=_reachabilityTracker;
@property(retain, nonatomic) CKKSLockStateTracker *lockStateTracker; // @synthesize lockStateTracker=_lockStateTracker;
@property(retain, nonatomic) CKKSAccountStateTracker *accountTracker; // @synthesize accountTracker=_accountTracker;
@property(retain, nonatomic) NSString *localSettingName; // @synthesize localSettingName=_localSettingName;
@property(retain, nonatomic) NSString *recordName; // @synthesize recordName=_recordName;
@property(retain, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(retain, nonatomic) CKRecordZone *zone; // @synthesize zone=_zone;
@property(retain, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
- (_Bool)checkRampStateWithError:(id *)arg1;	// IMP=0x0010000000137b84
- (void)fetchRampRecordWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001378cd
- (id)initWithRecordName:(id)arg1 localSettingName:(id)arg2 container:(id)arg3 database:(id)arg4 zoneID:(id)arg5 accountTracker:(id)arg6 lockStateTracker:(id)arg7 reachabilityTracker:(id)arg8 fetchRecordRecordsOperationClass:(Class)arg9;	// IMP=0x00100000001376ec

@end

