//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (HealthKit)
+ (_Bool)hk_assignError:(id *)arg1 nilArgument:(id)arg2 class:(Class)arg3 selector:(SEL)arg4;	// IMP=0x0060000000023806
+ (_Bool)hk_assignError:(id *)arg1 invalidArgument:(id)arg2 class:(Class)arg3 selector:(SEL)arg4;	// IMP=0x006000000002379e
+ (_Bool)hk_assignError:(id *)arg1 code:(long long)arg2 userInfo:(id)arg3;	// IMP=0x0060000000023735
+ (_Bool)hk_assignError:(id *)arg1 code:(long long)arg2 format:(id)arg3;	// IMP=0x0060000000015c8c
+ (_Bool)hk_assignError:(id *)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;	// IMP=0x00600000000236cd
+ (_Bool)hk_assignError:(id *)arg1 code:(long long)arg2 description:(id)arg3;	// IMP=0x0060000000015da8
+ (id)hk_transactionInterruptedError;	// IMP=0x00600000000236a8
+ (id)hk_databaseSchemaRolledBackError;	// IMP=0x0060000000023681
+ (id)hk_healthStoreUnavailableError;	// IMP=0x006000000002365c
+ (id)hk_invalidProfileError;	// IMP=0x0060000000023618
+ (id)hk_featureUnavailableForProfileError;	// IMP=0x00600000000235f3
+ (id)hk_protectedDataInaccessibilityError;	// IMP=0x0060000000003845
+ (id)hk_databaseInaccessibleBeforeFirstUnlockError;	// IMP=0x00600000000235ce
+ (id)hk_healthDataUnavailableError;	// IMP=0x00600000000235a9
+ (id)hk_errorForNilArgument:(id)arg1 class:(Class)arg2 selector:(SEL)arg3;	// IMP=0x0060000000023426
+ (id)hk_errorForInvalidArgument:(id)arg1 class:(Class)arg2 selector:(SEL)arg3 format:(id)arg4;	// IMP=0x0060000000023206
+ (id)hk_errorForInvalidArgument:(id)arg1 class:(Class)arg2 selector:(SEL)arg3;	// IMP=0x0060000000023083
+ (id)hk_error:(long long)arg1 class:(Class)arg2 selector:(SEL)arg3 format:(id)arg4;	// IMP=0x0060000000022ea6
+ (id)hk_error:(long long)arg1 format:(id)arg2;	// IMP=0x0060000000017e75
+ (id)hk_error:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0060000000022e84
+ (id)hk_error:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;	// IMP=0x0060000000015e0d
+ (id)hk_error:(long long)arg1 description:(id)arg2;	// IMP=0x006000000000386a
+ (id)hk_HTTPErrorRepresentingResponse:(id)arg1 request:(id)arg2;	// IMP=0x00600000000bf2ef
+ (id)_hk_OAuth2_errorFromResponseData:(id)arg1 defaultError:(id)arg2 parseError:(id *)arg3;	// IMP=0x0060000000203733
+ (id)_hk_OAuth2_errorForBadRequestStatusWithResponse:(id)arg1 data:(id)arg2;	// IMP=0x006000000020361c
+ (id)_hk_OAuth2_errorForUnauthorizedStatusWithRequest:(id)arg1 response:(id)arg2;	// IMP=0x00600000002034b6
+ (id)_hk_OAuth2_rawErrorForRequest:(id)arg1 response:(id)arg2 data:(id)arg3;	// IMP=0x00600000002033cf
+ (id)hk_OAuth2_errorForRequest:(id)arg1 response:(id)arg2 data:(id)arg3;	// IMP=0x0060000000203283
+ (id)hk_OAuth2_errorFromErrorValue:(id)arg1;	// IMP=0x0060000000203033
+ (id)_hk_OAuth2_defaultDescriptionForErrorCode:(long long)arg1;	// IMP=0x0060000000203014
+ (id)_hk_OAuth2_error:(long long)arg1 userInfo:(id)arg2 underlyingError:(id)arg3;	// IMP=0x0060000000202e70
+ (id)hk_OAuth2_error:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x0060000000202e59
+ (id)hk_OAuth2_error:(long long)arg1;	// IMP=0x0060000000202e45
- (id)hk_errorByAddingEntriesToUserInfo:(id)arg1;	// IMP=0x0010000000023fd8
- (id)hk_sanitizedErrorForDomain:(id)arg1;	// IMP=0x0010000000023f02
- (id)hk_sanitizedError;	// IMP=0x0010000000023ed8
- (id)hk_underlyingErrorWithDomain:(id)arg1;	// IMP=0x0010000000023dce
- (_Bool)hk_isErrorInDomain:(id)arg1 code:(long long)arg2;	// IMP=0x0010000000023d37
- (_Bool)hk_isHFDUnsupportedError;	// IMP=0x0010000000023d20
- (_Bool)hk_isOntologyConceptNotFoundError;	// IMP=0x0010000000023d09
- (_Bool)hk_isXPCConnectionInterruptedError;	// IMP=0x0010000000023ce8
- (_Bool)hk_isXPCConnectionError;	// IMP=0x0010000000023c5c
- (_Bool)hk_isCocoaFileExistsError;	// IMP=0x0010000000023be5
- (_Bool)hk_isCocoaNoSuchFileError;	// IMP=0x0010000000023b6a
- (_Bool)hk_isUserCanceledError;	// IMP=0x0010000000023b2e
- (_Bool)hk_isTimeoutError;	// IMP=0x0010000000023af2
- (_Bool)hk_isStreamFailureError;	// IMP=0x0010000000023ab6
- (_Bool)hk_isRequiredAuthorizationError;	// IMP=0x0010000000023a7a
- (_Bool)hk_isFeatureDisabledError;	// IMP=0x0010000000023a63
- (_Bool)hk_isInternalFailureError;	// IMP=0x0010000000023a27
- (_Bool)hk_isInvalidArgumentError;	// IMP=0x00100000000239eb
- (_Bool)hk_isAuthorizationNotDeterminedError;	// IMP=0x00100000000239af
- (_Bool)hk_isAuthorizationDeniedError;	// IMP=0x0010000000023973
- (_Bool)hk_isServiceDeviceNotFoundError;	// IMP=0x0010000000023935
- (_Bool)hk_isTransactionInterruptedError;	// IMP=0x001000000002391e
- (_Bool)hk_isObjectNotFoundError;	// IMP=0x0010000000023907
- (_Bool)hk_isDuplicateObjectError;	// IMP=0x00100000000238f0
- (_Bool)hk_isDatabaseSchemaRolledBackError;	// IMP=0x00100000000238d9
- (_Bool)hk_isHealthStoreUnavailableError;	// IMP=0x00100000000238c2
- (_Bool)hk_isDatabaseTransactionError;	// IMP=0x00100000000238ab
- (_Bool)hk_isDatabaseAccessibilityError;	// IMP=0x0010000000004ea3
- (_Bool)hk_isHealthKitErrorWithCode:(long long)arg1;	// IMP=0x001000000002386e
- (_Bool)hk_isHealthKitError;	// IMP=0x0010000000004ee8
- (id)_hk_OAuth2_errorByAddingItemsToUserInfo:(id)arg1;	// IMP=0x0010000000203a82
- (_Bool)hk_OAuth2_isBearerAuthenticationError;	// IMP=0x0010000000203a6b
- (_Bool)hk_OAuth2_isAccessDeniedError;	// IMP=0x0010000000203a54
- (_Bool)hk_OAuth2_isOAuth2ErrorWithCode:(long long)arg1;	// IMP=0x0010000000203a17
- (_Bool)hk_OAuth2_isOAuth2Error;	// IMP=0x00100000002039cc
- (id)hk_OAuth2_errorCode;	// IMP=0x0010000000203238
@end

