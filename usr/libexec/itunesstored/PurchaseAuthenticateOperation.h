//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class MISSING_TYPE, NSString, SSMutableAuthenticationContext;

@interface PurchaseAuthenticateOperation : ISOperation
{
    MISSING_TYPE *_authenticationBlock;	// 96 = 0x60
    SSMutableAuthenticationContext *_authenticationContext;	// 104 = 0x68
}

- (id)_userAgentForPurchases:(id)arg1;	// IMP=0x00200000001b41a0
- (id)_clientIdentifierForPurchases:(id)arg1;	// IMP=0x00100000001b402d
- (void)run;	// IMP=0x00100000001b3e4c
@property(copy) NSString *clientIdentifierHeader;
@property(copy) CDUnknownBlockType authenticationBlock;
- (void)dealloc;	// IMP=0x00100000001b3c9b
- (id)initWithPurchases:(id)arg1;	// IMP=0x00100000001b3ad8

@end

