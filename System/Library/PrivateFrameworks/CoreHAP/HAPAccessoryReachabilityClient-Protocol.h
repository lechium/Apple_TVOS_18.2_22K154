//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/NSObject-Protocol.h>

@protocol HAPAccessoryReachabilityDelegate, HAPAccessoryReachabilityProfile;

@protocol HAPAccessoryReachabilityClient <NSObject>
@property(readonly, nonatomic) double confirmInterval;
@property(copy, nonatomic) id <HAPAccessoryReachabilityProfile> profile;
@property(nonatomic) __weak id <HAPAccessoryReachabilityDelegate> delegate;
- (void)kick;
- (void)confirm;
- (_Bool)isRunning;
- (void)stopWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)startWithCompletionHandler:(void (^)(NSError *))arg1;
@end

