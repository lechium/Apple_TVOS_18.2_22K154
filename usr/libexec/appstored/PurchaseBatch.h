//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, XPCRequestToken;

@interface PurchaseBatch : NSObject
{
    NSArray *_purchaseInfo;	// 8 = 0x8
    NSMutableArray *_responseItems;	// 16 = 0x10
    _Bool _failBatchOnError;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    XPCRequestToken *_requestToken;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000001047fb

@end

