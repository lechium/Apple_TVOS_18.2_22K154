//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC18PodcastsFoundation23AnalyticsUserIdentifier : NSObject
{
    MISSING_TYPE *clientId;	// 8 = 0x8
    MISSING_TYPE *userId;	// 24 = 0x18
    MISSING_TYPE *userAllowsPersonalization;	// 40 = 0x28
    MISSING_TYPE *userUnder13YearsOld;	// 41 = 0x29
    MISSING_TYPE *userIsManagedAccount;	// 42 = 0x2a
}

- (void).cxx_destruct;	// IMP=0x00000000001eca70
- (id)init;	// IMP=0x00000000001eca10
@property(nonatomic, readonly) _Bool userIsManagedAccount; // @synthesize userIsManagedAccount;
@property(nonatomic, readonly) _Bool userUnder13YearsOld; // @synthesize userUnder13YearsOld;
@property(nonatomic, readonly) _Bool userAllowsPersonalization; // @synthesize userAllowsPersonalization;
@property(nonatomic, readonly) NSString *userId;
@property(nonatomic, readonly) NSString *clientId;

@end

