//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKit/NSObject-Protocol.h>

@class NSData, NSString;

@protocol SKPaymentDelegateProtocol <NSObject>
- (void)shouldContinueTransactionWithNewStorefront:(NSString *)arg1 replyBlock:(void (^)(_Bool))arg2;
- (void)handlePaymentSheetRequest:(NSData *)arg1 replyBlock:(void (^)(NSData *, NSError *))arg2;
- (void)handleEngagementRequest:(NSData *)arg1 replyBlock:(void (^)(NSData *, NSError *))arg2;
@end

