//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol MRRouteRecommendationUIServerXPCProtocol <NSObject>
- (void)releaseRouteRecommendationAssertionWithReply:(void (^)(void))arg1;
- (void)acquireRouteRecommendationAssertionForIdentifiers:(NSArray *)arg1 withReply:(void (^)(void))arg2;
@end

