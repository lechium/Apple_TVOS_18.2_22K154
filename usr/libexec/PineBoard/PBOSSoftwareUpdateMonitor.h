//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface PBOSSoftwareUpdateMonitor : NSObject
{
    _Bool _isInternalBuild;	// 8 = 0x8
    _Bool _isRestore;	// 9 = 0x9
    _Bool _triggeredManually;	// 10 = 0xa
    NSURL *_baseURL;	// 16 = 0x10
    NSString *_fromOSBuild;	// 24 = 0x18
    NSString *_fromHDMI;	// 32 = 0x20
    NSString *_toOSBuild;	// 40 = 0x28
    unsigned long long _checkResult;	// 48 = 0x30
    NSString *_uuid;	// 56 = 0x38
}

+ (id)_instance;	// IMP=0x00400000001714c8
+ (unsigned long long)migrateWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001714b6
+ (id)dailyReportData;	// IMP=0x00100000001709f8
+ (void)noteResourceFetchOfType:(unsigned long long)arg1 withResult:(unsigned long long)arg2;	// IMP=0x001000000017099f
+ (void)noteStage:(id)arg1;	// IMP=0x0010000000170912
+ (void)prepareForUpdateToOSBuild:(id)arg1 forRestore:(_Bool)arg2 triggeredManually:(_Bool)arg3;	// IMP=0x0010000000170896
+ (void)checkedForUpdateTriggeredManually:(_Bool)arg1 forRestore:(_Bool)arg2 result:(unsigned long long)arg3;	// IMP=0x001000000017082e
+ (void)initializeMonitoring;	// IMP=0x001000000017080c
- (void).cxx_destruct;	// IMP=0x0020000000173ae4
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property _Bool triggeredManually; // @synthesize triggeredManually=_triggeredManually;
@property _Bool isRestore; // @synthesize isRestore=_isRestore;
@property _Bool isInternalBuild; // @synthesize isInternalBuild=_isInternalBuild;
@property(nonatomic) unsigned long long checkResult; // @synthesize checkResult=_checkResult;
@property(copy, nonatomic) NSString *toOSBuild; // @synthesize toOSBuild=_toOSBuild;
@property(copy, nonatomic) NSString *fromHDMI; // @synthesize fromHDMI=_fromHDMI;
@property(copy, nonatomic) NSString *fromOSBuild; // @synthesize fromOSBuild=_fromOSBuild;
@property(copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (_Bool)_isFinalStage:(id)arg1;	// IMP=0x0010000000173971
- (_Bool)_isFailedStage:(id)arg1;	// IMP=0x001000000017387b
- (_Bool)_isCancelStage:(id)arg1;	// IMP=0x001000000017385e
- (id)_computeCacheDeleteSpaceDetails;	// IMP=0x0010000000173575
- (id)_computeDiskSpaceDetails;	// IMP=0x0010000000173536
- (id)_dailyReportData;	// IMP=0x00100000001732d0
- (void)_processDailyReport;	// IMP=0x0010000000172fe5
- (void)_processAppRestart;	// IMP=0x0010000000172c57
- (void)_processUpdateAttemptCompleted;	// IMP=0x0010000000172ab6
- (void)_issueRequestForStage:(id)arg1 withData:(id)arg2 retryDelay:(long long)arg3;	// IMP=0x0010000000172298
- (void)_noteResourceFetchOfType:(unsigned long long)arg1 withResult:(unsigned long long)arg2;	// IMP=0x001000000017202b
- (void)_noteStage:(id)arg1 forUUID:(id)arg2;	// IMP=0x0010000000171962
- (void)_processNewUpdateAttemptToOSBuild:(id)arg1 forRestore:(_Bool)arg2 triggeredManually:(_Bool)arg3;	// IMP=0x0010000000171662
- (void)_checkForUpdateTriggeredManually:(_Bool)arg1 forRestore:(_Bool)arg2 result:(unsigned long long)arg3;	// IMP=0x0010000000171587
- (id)init;	// IMP=0x0010000000170a50

@end

