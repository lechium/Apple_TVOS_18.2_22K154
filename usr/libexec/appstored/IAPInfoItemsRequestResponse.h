//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, NSArray, NSNumber;

@interface IAPInfoItemsRequestResponse : NSObject
{
    _Bool _update;	// 8 = 0x8
    ACAccount *_account;	// 16 = 0x10
    NSArray *_addedIAPs;	// 24 = 0x18
    NSArray *_removedIAPs;	// 32 = 0x20
    NSNumber *_revision;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000008df1e

@end

