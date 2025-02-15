//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VSSubscriptionPredicateFactory;

__attribute__((visibility("hidden")))
@interface VSSubscriptionFetchOptionsValidator : NSObject
{
    VSSubscriptionPredicateFactory *_predicateFactory;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000347be
@property(retain, nonatomic) VSSubscriptionPredicateFactory *predicateFactory; // @synthesize predicateFactory=_predicateFactory;
- (id)standardizedFetchOptionsFromOptions:(id)arg1 withSecurityTask:(id)arg2;	// IMP=0x0000000000033757
- (id)subscriptionFetchOptionsAllowedForSecurityTask:(id)arg1;	// IMP=0x0000000000032f90

@end

