//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MCPasscodeAnalytics : NSObject
{
}

+ (void)sendRecoveryPasscodeClearedEventWithReason:(long long)arg1;	// IMP=0x0040000000083e51
+ (void)sendPasscodeChangedEventWithChangeType:(long long)arg1 oldPasscodeExists:(_Bool)arg2 isClearingPasscode:(_Bool)arg3 newPasscodeUnlockScreenType:(int)arg4 newPasscodeSimpleType:(int)arg5 passcodeRecoverySupported:(_Bool)arg6 passcodeRecoveryRestricted:(_Bool)arg7 recoverySkipped:(_Bool)arg8 senderBundleID:(id)arg9;	// IMP=0x0010000000083e4b

@end

