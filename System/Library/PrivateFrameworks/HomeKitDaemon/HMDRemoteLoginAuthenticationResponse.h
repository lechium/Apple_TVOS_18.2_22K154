//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMRemoteLoginMessage.h>

@class ACAccount, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDRemoteLoginAuthenticationResponse : HMRemoteLoginMessage
{
    ACAccount *_loggedInAccount;	// 8 = 0x8
}

+ (id)messageName;	// IMP=0x0010000000529546
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000052953e
+ (id)objWithMessage:(id)arg1;	// IMP=0x001000000052937d
+ (id)objWithDict:(id)arg1;	// IMP=0x00100000005291d6
- (void).cxx_destruct;	// IMP=0x00000000005291c3
@property(retain, nonatomic) ACAccount *loggedInAccount; // @synthesize loggedInAccount=_loggedInAccount;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000529103
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000052901e
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *messagePayload;
@property(readonly, copy, nonatomic) NSString *messageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

