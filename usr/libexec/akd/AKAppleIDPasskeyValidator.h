//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface AKAppleIDPasskeyValidator : NSObject
{
    MISSING_TYPE *account;	// 8 = 0x8
    MISSING_TYPE *accountManager;	// 16 = 0x10
    MISSING_TYPE *featureManager;	// 24 = 0x18
    MISSING_TYPE *configuration;	// 32 = 0x20
    MISSING_TYPE *device;	// 40 = 0x28
    MISSING_TYPE *cdpFactory;	// 48 = 0x30
    MISSING_TYPE *authenticationController;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00400000000e2b00
- (id)init;	// IMP=0x00100000000e2aa0
- (void)canDeleteAllPasskeysWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;	// IMP=0x00100000000e2820
- (_Bool)canVerifyPasskey;	// IMP=0x00100000000e27f0
- (void)canUnenrollPasskeyWithForced:(_Bool)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;	// IMP=0x00100000000e1c20
- (void)canCreatePasskeyWithForced:(_Bool)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;	// IMP=0x00100000000e19a0
- (id)initWithAccount:(id)arg1 accountManager:(id)arg2 featureManager:(id)arg3 configuration:(id)arg4 device:(id)arg5 cdpFactory:(id)arg6 authenticationController:(id)arg7;	// IMP=0x00100000000e18b0

@end

