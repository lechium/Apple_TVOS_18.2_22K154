//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSXPCConnection.h>

@interface NSXPCConnection (UserNotificationsServer)
- (_Bool)_uns_connection:(id)arg1 valueForEntitlementKey:(id)arg2 matchesValue:(id)arg3;	// IMP=0x0060000000013b27
- (_Bool)_uns_connection:(id)arg1 isAuthorizedToSendNotificationsForManagementDomainOfBundleIdentifier:(id)arg2;	// IMP=0x0060000000013a04
- (_Bool)_uns_connection:(id)arg1 isAuthorizedToSendNotificationsForBundleIdentifier:(id)arg2;	// IMP=0x00600000000139e8
- (id)uns_getClientConnectionDetails;	// IMP=0x00600000000139d7
- (void)uns_setConnectionDetails:(id)arg1;	// IMP=0x00600000000139c1
- (_Bool)uns_isInternalUserNotificationsTool;	// IMP=0x00600000000138f7
- (_Bool)uns_hasEntitlement:(id)arg1 capability:(id)arg2;	// IMP=0x00600000000137eb
- (_Bool)uns_isAllowedToWriteSettings;	// IMP=0x0060000000013797
- (_Bool)uns_isAllowedToReadSettings;	// IMP=0x0060000000013743
- (_Bool)uns_isAllowedToRequestUserNotificationsForBundleIdentifier:(id)arg1;	// IMP=0x006000000001333e
- (_Bool)uns_requestContainsDisallowedPrivateUserInfo:(id)arg1;	// IMP=0x0060000000013225
- (_Bool)uns_isAllowedFromDaemon;	// IMP=0x00600000000131a5
- (id)uns_clientAuditToken;	// IMP=0x00600000000130d5
- (id)uns_clientBundleProxy;	// IMP=0x0060000000013037
@end

