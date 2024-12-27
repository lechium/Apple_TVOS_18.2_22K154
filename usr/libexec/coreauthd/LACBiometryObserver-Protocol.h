//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class LACBiometryHelper;

@protocol LACBiometryObserver <NSObject>

@optional
- (void)biometryAccessoriesDidChangeForHelper:(LACBiometryHelper *)arg1;
- (void)biometryLockoutStateDidChangeForHelper:(LACBiometryHelper *)arg1;
- (void)biometryEnrolledStateDidChangeForHelper:(LACBiometryHelper *)arg1;
@end

