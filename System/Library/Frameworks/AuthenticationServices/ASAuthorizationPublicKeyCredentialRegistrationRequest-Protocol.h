//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthenticationServices/NSCopying-Protocol.h>
#import <AuthenticationServices/NSObject-Protocol.h>
#import <AuthenticationServices/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@protocol ASAuthorizationPublicKeyCredentialRegistrationRequest <NSObject, NSSecureCoding, NSCopying>
@property(retain, nonatomic) NSString *attestationPreference;
@property(retain, nonatomic) NSString *userVerificationPreference;
@property(copy, nonatomic) NSData *challenge;
@property(copy, nonatomic) NSString *displayName;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSData *userID;
@property(readonly, copy, nonatomic) NSString *relyingPartyIdentifier;
@end

