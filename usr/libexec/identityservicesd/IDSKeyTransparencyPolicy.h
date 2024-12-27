//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSKeyTransparencyPolicy : NSObject
{
}

- (_Bool)isKeyTransparencyUIEnabled;	// IMP=0x00400000004c14b5
- (_Bool)shouldSyncTrustCircleAfterSelfQueryForServiceIdentifier:(id)arg1;	// IMP=0x00100000004c126b
- (_Bool)isKeyTransparencySFAnalyticsEnabled;	// IMP=0x00100000004c11b8
- (_Bool)isKeyTransparencyRTCAnalyticsEnabled;	// IMP=0x00100000004c10fa
- (_Bool)isKeyTransparencyAnalyticsEnabled;	// IMP=0x00100000004c1047
- (unsigned long long)keyTransparencyMaximumVerificationsPerXPCActivity;	// IMP=0x00100000004c0f91
- (unsigned long long)keyTransparencyXPCActivityIntervalInSeconds;	// IMP=0x00100000004c0ec6
- (_Bool)isKeyTransparencyXPCActivityEnabled;	// IMP=0x00100000004c0e13
- (_Bool)isKeyTransparencyAccountKeyCircleEnabled;	// IMP=0x00100000004c0d36
- (_Bool)isKeyTransparencyCloudKitCircleEnabled;	// IMP=0x00100000004c0c59
- (_Bool)isKeyTransparencyTrustCircleEnabled;	// IMP=0x00100000004c0c20
- (_Bool)isKeyTransparencyEnabledForServiceType:(id)arg1;	// IMP=0x00100000004c0ba4
- (_Bool)isKeyTransparencyEnabledForServiceIdentifier:(id)arg1;	// IMP=0x00100000004c0aee
- (_Bool)_isKeyTransparencyDisabledViaServerBagProtocolVersion_Multiplex;	// IMP=0x00100000004c0a26
- (_Bool)_isKeyTransparencyDisabledViaServerBagProtocolVersion_FaceTime;	// IMP=0x00100000004c095e
- (_Bool)_isKeyTransparencyDisabledViaServerBagProtocolVersion_Madrid;	// IMP=0x00100000004c0896
- (_Bool)_isKeyTransparencyEnabledViaServerBag;	// IMP=0x00100000004c0845
- (_Bool)_isKeyTransparencyEnabledViaDefaults;	// IMP=0x00100000004c081c
- (_Bool)isKeyTransparencyTrustCircleAllowedWithoutEnrollment;	// IMP=0x00100000004c0814
- (_Bool)isKeyTransparencyPeerVerificationAllowedWithoutEnrollment;	// IMP=0x00100000004c0802
- (_Bool)isKeyTransparencyEnabled;	// IMP=0x00100000004c07c9

@end

