//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreTelephony/NSObject-Protocol.h>

@class CTServiceDescriptor, CTSimDeactivationInfo, CTXPCServiceSubscriptionContext, NSNumber, NSString;

@protocol CoreTelephonyClientSubscriberDelegateInternal <NSObject>

@optional
- (void)didDetectSimDeactivation:(CTXPCServiceSubscriptionContext *)arg1 info:(CTSimDeactivationInfo *)arg2;
- (void)prlVersionDidChange:(CTXPCServiceSubscriptionContext *)arg1 version:(NSNumber *)arg2;
- (void)userDefaultVoiceSlotDidChange:(CTXPCServiceSubscriptionContext *)arg1;
- (void)subscriberCountryCodeDidChange:(CTXPCServiceSubscriptionContext *)arg1;
- (void)shortLabelsDidChange;
- (void)authTokenChanged:(CTServiceDescriptor *)arg1;
- (void)simPinChangeRequestDidComplete:(CTXPCServiceSubscriptionContext *)arg1 success:(_Bool)arg2;
- (void)simPukEntryErrorDidOccur:(CTXPCServiceSubscriptionContext *)arg1 status:(NSString *)arg2;
- (void)simPinEntryErrorDidOccur:(CTXPCServiceSubscriptionContext *)arg1 status:(NSString *)arg2;
- (void)simLockSaveRequestDidComplete:(CTXPCServiceSubscriptionContext *)arg1 success:(_Bool)arg2;
- (void)simStatusDidChange:(CTXPCServiceSubscriptionContext *)arg1 status:(NSString *)arg2;
@end

