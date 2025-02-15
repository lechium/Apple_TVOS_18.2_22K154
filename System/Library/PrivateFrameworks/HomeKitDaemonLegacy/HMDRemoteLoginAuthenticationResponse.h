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

+ (id)messageName;	// IMP=0x00100000003aaf77
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000003aaf6f
+ (id)objWithMessage:(id)arg1;	// IMP=0x00100000003aadae
+ (id)objWithDict:(id)arg1;	// IMP=0x00100000003aac07
- (void).cxx_destruct;	// IMP=0x00000000003aabf4
@property(retain, nonatomic) ACAccount *loggedInAccount; // @synthesize loggedInAccount=_loggedInAccount;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003aab34
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003aaa4f
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

