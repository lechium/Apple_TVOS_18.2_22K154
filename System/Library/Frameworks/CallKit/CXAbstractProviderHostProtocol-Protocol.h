//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallKit/NSObject-Protocol.h>

@class CXAction, CXTransaction;

@protocol CXAbstractProviderHostProtocol <NSObject>
- (oneway void)requestTransaction:(CXTransaction *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (oneway void)actionCompleted:(CXAction *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

