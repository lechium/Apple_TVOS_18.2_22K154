//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AFAssertionContext;
@protocol AFRelinquishableAssertion;

@protocol AFAudioSessionAssertionAcquisitionService <NSObject>
- (id <AFRelinquishableAssertion>)acquireAudioSessionAssertionWithContext:(AFAssertionContext *)arg1 relinquishmentHandler:(void (^)(AFAssertionContext *, NSError *))arg2;
@end

