//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC23LocalAuthenticationCore21LACPreboardController : NSObject
{
    MISSING_TYPE *contextProviderFactory;	// 8 = 0x8
    MISSING_TYPE *launcher;	// 16 = 0x10
    MISSING_TYPE *passcodeVerifier;	// 56 = 0x38
    MISSING_TYPE *uppManager;	// 96 = 0x60
    MISSING_TYPE *useCaseProvider;	// 136 = 0x88
    MISSING_TYPE *secureStorage;	// 176 = 0xb0
    MISSING_TYPE *uuid;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_contextProvider;	// 0 = 0x0
    MISSING_TYPE *launchResult;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_launchDispatchQueue;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000006ad20
- (id)init;	// IMP=0x000000000006acc0
- (void)terminateWithCompletion:(void (^)(NSError *))arg1;	// IMP=0x000000000006aae0
- (void)enableCurrentUseCaseWithPasscode:(NSString *)arg1 completion:(void (^)(NSError *))arg2;	// IMP=0x000000000006a860
- (void)launchPreboardWithCompletion:(void (^)(NSError *))arg1;	// IMP=0x0000000000068180
- (_Bool)launchPreboardWithError:(id *)arg1;	// IMP=0x0000000000068110
- (id)uppTeamName;	// IMP=0x0000000000066bc0
@property(nonatomic, readonly) long long useCase;
@property(nonatomic, readonly) _Bool isRequired;
- (id)bundleIDForRequest:(id)arg1;	// IMP=0x000000000006b300
- (id)acmContextForUUID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006b1b0

@end

