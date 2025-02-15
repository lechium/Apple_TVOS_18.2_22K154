//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, NSString;

@interface LakituAccount : NSObject
{
    ACAccount *_account;	// 8 = 0x8
}

+ (id)personaAwareAccountWithDSID:(id)arg1;	// IMP=0x004000000004d088
- (void).cxx_destruct;	// IMP=0x002000000004db7a
@property(retain) ACAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSString *iCloudEnv;
@property(readonly, nonatomic) NSString *escrowURL;
@property(readonly, nonatomic) NSString *authToken;
@property(readonly, nonatomic) NSString *altDSID;
@property(readonly, nonatomic) NSString *dsid;
- (id)initWithACAccount:(id)arg1;	// IMP=0x001000000004d2e5

@end

