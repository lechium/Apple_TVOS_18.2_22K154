//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (MSErrorUtilities)
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4 additionalUserInfo:(id)arg5;	// IMP=0x005000000001fa7f
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;	// IMP=0x005000000001fa55
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 suggestion:(id)arg4;	// IMP=0x005000000001f983
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;	// IMP=0x005000000001f96e
+ (id)MMCSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;	// IMP=0x005000000008edd0
- (id)MSMMCSRetryAfterDate;	// IMP=0x001000000001ec56
- (_Bool)MSIsRegistrationError;	// IMP=0x001000000001ec35
- (_Bool)MSIsQuotaError;	// IMP=0x001000000001eb96
- (_Bool)MSContainsErrorWithDomain:(id)arg1 code:(long long)arg2;	// IMP=0x001000000001ea9b
- (_Bool)MSIsBadTokenError;	// IMP=0x001000000001e9fc
- (_Bool)MSIsAuthError;	// IMP=0x001000000001e95d
- (_Bool)MSIsFatal;	// IMP=0x001000000001e8be
- (_Bool)MSIsCounted;	// IMP=0x001000000001e81f
- (_Bool)MSNeedsBackoff;	// IMP=0x001000000001e780
- (_Bool)MSCanBeIgnored;	// IMP=0x001000000001e75f
- (_Bool)MSASStateMachineIsCanceledError;	// IMP=0x001000000001e744
- (_Bool)MSIsTemporaryNetworkError;	// IMP=0x001000000001e6a5
- (void)_MSApplyBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001e3b8
- (id)MSFindPrimaryError;	// IMP=0x001000000001e21e
- (id)MSMakePrimaryError;	// IMP=0x001000000001e120
- (id)MSVerboseDescription;	// IMP=0x001000000001e109
- (id)_MSVerboseDescriptionRecursionCount:(int)arg1;	// IMP=0x001000000001deb9
- (id)MMCSRetryAfterDate;	// IMP=0x001000000008e749
- (_Bool)MMCSIsFatalError;	// IMP=0x001000000008e6aa
- (_Bool)MMCSIsAuthorizationError;	// IMP=0x001000000008e60b
- (_Bool)MMCSIsNetworkConditionsError;	// IMP=0x001000000008e56c
- (_Bool)MMCSIsCancelError;	// IMP=0x001000000008e4cd
- (void)_MMCSApplyBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000008e1d7
- (int)MMCSErrorType;	// IMP=0x001000000008e181
@end

