//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSNumber, NSString;

@interface AMSAccountCachedServerIntCore : NSObject
{
    MISSING_TYPE *cachedValue;	// 0 = 0x0
    MISSING_TYPE *token;	// 79 = 0x4f
}

- (void).cxx_destruct;	// IMP=0x000000000001f340
- (id)init;	// IMP=0x000000000001f32d
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, retain) id token; // @synthesize token;
@property(nonatomic, readonly) NSNumber *value;
@property(nonatomic, readonly) _Bool isStale;
@property(nonatomic, readonly) NSDate *expiration;

@end

