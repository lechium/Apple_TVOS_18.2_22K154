//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary;

@interface _TtC18PodcastsFoundation23PushSubscriptionRequest : NSObject
{
    MISSING_TYPE *endpointURL;	// 0 = 0x0
    MISSING_TYPE *action;	// 0 = 0x0
    MISSING_TYPE *apnsToken;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000000ff970
- (id)init;	// IMP=0x00000000000ff910
- (id)buildURLRequestAndReturnError:(id *)arg1;	// IMP=0x00000000000ff7f0
@property(nonatomic, readonly) NSDictionary *parameters;
- (id)initWithEndpointURL:(id)arg1 action:(id)arg2 apnsToken:(id)arg3;	// IMP=0x00000000000ff1d0

@end

