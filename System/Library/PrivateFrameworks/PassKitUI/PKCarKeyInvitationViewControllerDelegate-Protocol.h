//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSString, PKCarKeyInvitationViewController;

@protocol PKCarKeyInvitationViewControllerDelegate <NSObject>
- (void)carKeyInvitationViewController:(PKCarKeyInvitationViewController *)arg1 didEnterActivationCode:(NSString *)arg2;
- (void)carKeyInvitationViewControllerDidCancel:(PKCarKeyInvitationViewController *)arg1;
- (void)carKeyInvitationViewControllerDidRequestStart:(PKCarKeyInvitationViewController *)arg1;
@end

