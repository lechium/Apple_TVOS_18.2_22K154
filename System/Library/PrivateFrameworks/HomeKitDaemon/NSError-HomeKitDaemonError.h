//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@class NSNumber;

@interface NSError (HomeKitDaemonError)
+ (id)hmdErrorWithCode:(long long)arg1;	// IMP=0x002000000049a38d
+ (id)hmd_validationErrorWithDescription:(id)arg1 managedObject:(id)arg2 attributeName:(id)arg3;	// IMP=0x00200000004b7cd6
+ (id)hmd_validationErrorWithDescription:(id)arg1;	// IMP=0x00200000004b7bea
+ (id)errorWithSQLite3Statement:(struct sqlite3_stmt *)arg1;	// IMP=0x00200000009e3762
+ (id)errorWithSQLite3Context:(struct sqlite3 *)arg1 statement:(const char *)arg2;	// IMP=0x00200000009e35d5
+ (id)errorWithSQLite3Context:(struct sqlite3 *)arg1;	// IMP=0x00200000009e3487
@property(readonly, getter=hmd_isRecordConflictCKError) _Bool hmd_recordConflictCKError;
@property(readonly, copy) NSNumber *hmd_retryAfterCKError;
@property(readonly, copy) NSError *hmd_convertedCKError;
@property(readonly, getter=hmd_isNonRecoverableCKError) _Bool hmd_nonRecoverableCKError;
@property(readonly, getter=hmd_isUnderlyingCKError) _Bool hmd_underlyingCKError;
@property(readonly, getter=hmd_isCKError) _Bool hmd_ckError;
@property(readonly, copy) NSError *hmd_hmErrorFromCKError;
@property(readonly, copy) NSError *hmd_conciseCKError;
- (id)hmd_actualCKErrorFromCKErrorPartialFailure:(id)arg1;	// IMP=0x0010000000601237
@end

