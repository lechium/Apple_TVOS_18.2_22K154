//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (HMBShareOperation)
+ (id)hmbRetryShareOperationError;	// IMP=0x002000000005d447
+ (id)errorMessageForSQLite3Context:(struct sqlite3 *)arg1;	// IMP=0x0020000000097ca0
+ (id)hmbErrorWithSQLite3Status:(int)arg1;	// IMP=0x0020000000097b52
+ (id)hmbErrorWithSQLite3Statement:(struct sqlite3_stmt *)arg1;	// IMP=0x00200000000979b2
+ (id)hmbErrorWithSQLite3Connection:(struct sqlite3 *)arg1 statement:(const char *)arg2;	// IMP=0x0020000000097827
+ (id)hmbErrorWithSQLite3Connection:(struct sqlite3 *)arg1;	// IMP=0x00200000000976c3
+ (id)hmbErrorWithSQLContext:(id)arg1 statement:(const char *)arg2;	// IMP=0x002000000009767c
+ (id)hmbErrorWithSQLContext:(id)arg1;	// IMP=0x0020000000097644
@property(readonly, getter=hmbIsRetryShareOperationError) _Bool hmbRetryShareOperationError;
- (_Bool)_hmbHasCKUnderlyingErrorWithCode:(long long)arg1;	// IMP=0x001000000008d6ea
- (_Bool)_hmbIsCKErrorOrHasPartialFailurePassingFilter:(CDUnknownBlockType)arg1;	// IMP=0x001000000008d5bf
- (_Bool)_hmbIsCKErrorOrHasPartialFailureWithCode:(long long)arg1;	// IMP=0x001000000008d570
- (_Bool)_hmbIsCKUnderlyingErrorWithCode:(long long)arg1;	// IMP=0x001000000008d533
- (_Bool)_hmbIsCKErrorWithCode:(long long)arg1;	// IMP=0x001000000008d4f6
@property(readonly) _Bool hmbIsCKZoneDisabledError;
@property(readonly) _Bool hmbIsCKNotAuthenticatedError;
@property(readonly) _Bool hmbIsCKUnsyncedKeychainError;
@property(readonly) _Bool hmbIsCKManateeUnavailableError;
@property(readonly) _Bool hmbIsCKLimitExceededError;
@property(readonly) _Bool hmbIsCKMissingManateeIdentityError;
@property(readonly) _Bool hmbIsCKPartialFailureError;
@property(readonly) _Bool hmbIsCKChangeTokenExpiredError;
@property(readonly) _Bool hmbIsCKZoneDeletedError;
@property(readonly) double hmbDefaultCloudKitRetryDelay;
@property(readonly) double hmbCloudKitRetryDelay;
- (id)hmbCKUnderlyingError;	// IMP=0x001000000008cece
- (_Bool)hmbIsCloudKitUnderlyingError;	// IMP=0x001000000008ce80
@property(readonly) _Bool hmbIsCloudKitError;
@property(readonly) _Bool hmbIsSQLiteDatabaseCorruptedError;
@property(readonly) _Bool hmbIsSQLiteConstraintError;
@end

