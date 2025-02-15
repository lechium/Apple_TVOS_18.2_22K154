//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriPlaybackControlIntents/NSObject-Protocol.h>

@class SkipContentIntent;

@protocol SkipContentIntentHandling <NSObject>
- (void)resolveDevicesForSkipContent:(SkipContentIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)handleSkipContent:(SkipContentIntent *)arg1 completion:(void (^)(SkipContentIntentResponse *))arg2;

@optional
- (void)confirmSkipContent:(SkipContentIntent *)arg1 completion:(void (^)(SkipContentIntentResponse *))arg2;
@end

