//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, NSArray, NSDictionary, NSMutableArray;

@interface RestoreBatchContext : NSObject
{
    ACAccount *_account;	// 8 = 0x8
    NSMutableArray *_hardFailures;	// 16 = 0x10
    NSDictionary *_itemMap;	// 24 = 0x18
    NSMutableArray *_remainingItemIDs;	// 32 = 0x20
    NSMutableArray *_softFailures;	// 40 = 0x28
    NSMutableArray *_successfulItems;	// 48 = 0x30
    NSArray *_targetItems;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000f4892

@end

