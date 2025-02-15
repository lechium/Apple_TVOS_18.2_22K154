//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSTask.h>

@class AMSDMultiUserController;
@protocol AMSDCloudDataDatabase;

@interface AMSDRefreshMultiUserDatabaseTask : AMSTask
{
    AMSDMultiUserController *_controller;	// 8 = 0x8
    id <AMSDCloudDataDatabase> _database;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000480c4
@property(readonly, nonatomic) id <AMSDCloudDataDatabase> database; // @synthesize database=_database;
@property(readonly, nonatomic) AMSDMultiUserController *controller; // @synthesize controller=_controller;
- (_Bool)_reconcileiTunesAccountForChangedRecord:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000004769c
- (id)_handleExpiredChangeTokensInChangedRecordsResult:(id)arg1;	// IMP=0x0010000000046dba
- (void)_handleDeletedRecordZones:(id)arg1 withErrors:(id)arg2;	// IMP=0x0010000000046745
- (void)_handleChangedRecordZones:(id)arg1 withErrors:(id)arg2;	// IMP=0x0010000000045cd9
- (_Bool)_handleAccountChangeInChangedRecord:(id)arg1 withError:(id *)arg2;	// IMP=0x00100000000456fd
- (id)performTask;	// IMP=0x0010000000045101
- (id)initWithController:(id)arg1 database:(id)arg2;	// IMP=0x001000000004505f

@end

