//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class IDSBaseMessage;

@protocol FTMessageDeliveryRequestObserver <NSObject>

@optional
- (void)completedRequest:(IDSBaseMessage *)arg1 resultCode:(long long)arg2 interface:(unsigned long long)arg3;
@end

