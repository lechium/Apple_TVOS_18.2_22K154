//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, AMSProcessInfo, NSArray, NSNumber;

@interface PurchaseHistoryItemsRequestContext : NSObject
{
    long long _accountID;	// 8 = 0x8
    ACAccount *_requestingAccount;	// 16 = 0x10
    AMSProcessInfo *_clientInfo;	// 24 = 0x18
    NSArray *_knownApps;	// 32 = 0x20
    NSNumber *_revision;	// 40 = 0x28
    unsigned long long _purchaseHistoryContext;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000bcf59

@end

