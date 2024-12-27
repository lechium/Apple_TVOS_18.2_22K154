//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileAccessArbiter-Protocol.h>

@class NSFileAccessClaim, NSFileSubarbitrationClaim, NSObject, NSString, NSURLPromisePair, NSXPCListener;
@protocol OS_dispatch_semaphore;

@protocol NSFileAccessClientLocalArbiterInterface <NSFileAccessArbiter>
- (void)grantSubarbitrationClaim:(NSFileSubarbitrationClaim *)arg1 withServer:(NSXPCListener *)arg2;
- (NSObject<OS_dispatch_semaphore> *)grantAccessClaim:(NSFileAccessClaim *)arg1 synchronouslyIfPossible:(_Bool)arg2;
- (oneway void)writerWithPurposeID:(NSString *)arg1 didMoveItemAtURL:(NSURLPromisePair *)arg2 toURL:(NSURLPromisePair *)arg3;
@end

