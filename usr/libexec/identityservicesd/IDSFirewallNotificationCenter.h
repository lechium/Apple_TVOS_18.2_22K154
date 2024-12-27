//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSContactsUtilities, IDSRateLimiter, IDSServerBag, IDSUserNotificationsCenter;

@interface IDSFirewallNotificationCenter : NSObject
{
    IDSUserNotificationsCenter *_notificationCenter;	// 8 = 0x8
    IDSContactsUtilities *_contactUtilities;	// 16 = 0x10
    IDSRateLimiter *_firewallRateLimiter;	// 24 = 0x18
    IDSRateLimiter *_firewallAggressiveRateLimiter;	// 32 = 0x20
    IDSServerBag *_serverBag;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000eacc4
@property(retain, nonatomic) IDSServerBag *serverBag; // @synthesize serverBag=_serverBag;
@property(retain, nonatomic) IDSRateLimiter *firewallAggressiveRateLimiter; // @synthesize firewallAggressiveRateLimiter=_firewallAggressiveRateLimiter;
@property(retain, nonatomic) IDSRateLimiter *firewallRateLimiter; // @synthesize firewallRateLimiter=_firewallRateLimiter;
@property(retain, nonatomic) IDSContactsUtilities *contactUtilities; // @synthesize contactUtilities=_contactUtilities;
@property(retain, nonatomic) IDSUserNotificationsCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
- (void)postNotificationForURI:(id)arg1 onService:(id)arg2 shouldRateLimit:(_Bool)arg3 command:(id)arg4;	// IMP=0x00100000000ea7bc
- (id)_notificationIconIdentifierForService:(id)arg1;	// IMP=0x00100000000ea57c
- (id)_notificationBodyForService:(id)arg1 URI:(id)arg2;	// IMP=0x00100000000e9bdc
- (id)_notificationTitleForService:(id)arg1;	// IMP=0x00100000000e95c4
- (id)_rateLimiterForService:(id)arg1;	// IMP=0x00100000000e957e
- (id)_rateLimitingKeyForURI:(id)arg1 service:(id)arg2;	// IMP=0x00100000000e94c5
- (id)_notificationSupportURL;	// IMP=0x00100000000e9434
- (_Bool)_notificationShouldRedirect;	// IMP=0x00100000000e93a2
- (long long)_notificationAggressiveLimitTimePeriod;	// IMP=0x00100000000e930f
- (long long)_notificationAggressiveLimitPerPeriod;	// IMP=0x00100000000e927c
- (long long)_notificationLimitTimePeriod;	// IMP=0x00100000000e91e9
- (long long)_notificationLimitPerPeriod;	// IMP=0x00100000000e9156
- (id)initWithNotificationCenter:(id)arg1 serverBag:(id)arg2;	// IMP=0x00100000000e8ff1
- (id)init;	// IMP=0x00100000000e8f70

@end

