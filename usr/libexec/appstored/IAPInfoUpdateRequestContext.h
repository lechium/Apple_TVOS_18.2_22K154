//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, AMSProcessInfo, LogKey, NSNumber;

@interface IAPInfoUpdateRequestContext : NSObject
{
    ACAccount *_account;	// 8 = 0x8
    AMSProcessInfo *_clientInfo;	// 16 = 0x10
    LogKey *_logKey;	// 24 = 0x18
    NSNumber *_revision;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000022d1a2

@end

