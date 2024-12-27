//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDRemoteLoginUtilities : NSObject
{
}

+ (id)logCategory;	// IMP=0x0010000000e0f67f
+ (_Bool)isTwoFactorAuthenticationEnabledForAccount;	// IMP=0x0010000000e0f598
+ (void)fetchIsTwoFactorAuthenticationEnabledForAccountWithReason:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000e0f28b
+ (id)primaryITunesAccount;	// IMP=0x0010000000e0f283
+ (long long)serviceTypeForAccountService:(unsigned long long)arg1;	// IMP=0x0010000000e0f272

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

