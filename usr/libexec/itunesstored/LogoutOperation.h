//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class SSAccount;

@interface LogoutOperation : ISOperation
{
    SSAccount *_account;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x002000000019aac8
- (void)_sendLogoutRequest;	// IMP=0x001000000019a7c4
- (id)_sbsyncData;	// IMP=0x001000000019a7bc
- (void)_disableBookkeeper;	// IMP=0x001000000019a41f
- (void)_disableAutomaticDownloadKinds;	// IMP=0x001000000019a38c
- (id)_copyAuthenticationContext;	// IMP=0x001000000019a315
- (void)run;	// IMP=0x001000000019a2c8
@property(readonly) SSAccount *account;
- (id)initWithAccount:(id)arg1;	// IMP=0x001000000019a209

@end

