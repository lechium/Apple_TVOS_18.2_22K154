//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICMediaUserState, MRUserIdentity, NSString;

@interface MRDMediaUserState : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    ICMediaUserState *_userState;	// 16 = 0x10
}

+ (_Bool)groupSessionsSupportedForAccountRegion;	// IMP=0x002000000002f9bc
- (void).cxx_destruct;	// IMP=0x0020000000030f31
@property(retain, nonatomic) ICMediaUserState *userState; // @synthesize userState=_userState;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isEqualToUserState:(id)arg1;	// IMP=0x0010000000030e6f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000030e08
- (unsigned long long)hash;	// IMP=0x0010000000030d9a
@property(readonly, nonatomic) MRUserIdentity *userIdentity;
- (id)userIdentityWithDisplayName:(id)arg1;	// IMP=0x001000000002fe06
@property(readonly, nonatomic) NSString *storefrontCountryCode;
@property(readonly, nonatomic) _Bool groupSessionsSupportedForAccountRegion;
@property(readonly, nonatomic) _Bool identitySupportsCollaboration;
@property(readonly, nonatomic) _Bool isFullSubscriber;
@property(readonly, nonatomic) _Bool isMinor;
@property(readonly, nonatomic) _Bool hasAcceptedDisplayNameAcknowledgement;
@property(readonly, nonatomic) _Bool hasAcceptedPrivacyAcknowledgement;
- (id)initWithUserState:(id)arg1;	// IMP=0x001000000002f9dc
- (id)frameworkState;	// IMP=0x0010000000196739

@end

