//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, SAMLNameId, SAMLSignature;

__attribute__((visibility("hidden")))
@interface SAMLLogoutRequestElement
{
}

+ (id)createElement:(id *)arg1;	// IMP=0x00600000000103a4
@property(retain, nonatomic) NSString *sessionIndex;
@property(readonly, nonatomic) SAMLNameId *nameId;
@property(readonly, nonatomic) SAMLSignature *signature;
@property(retain, nonatomic) NSString *issuer;
@property(retain, nonatomic) NSDate *notOnOrAfter;
@property(retain, nonatomic) NSString *reason;
@property(readonly, nonatomic) NSString *consent;
@property(readonly, nonatomic) NSDate *issueInstant;
@property(retain, nonatomic) NSString *destination;
@property(readonly, nonatomic) NSString *identifier;

@end

