//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class APSOutgoingMessage, NSData, NSError;

@protocol APSOutgoingMessageOriginator <NSObject>
@property(readonly, copy, nonatomic) NSData *publicToken;
- (void)handleResult:(NSError *)arg1 forSendingOutgoingMessage:(APSOutgoingMessage *)arg2;
@end

