//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _EXDiscoveryController : NSObject
{
    MISSING_TYPE *activeQueries;	// 8 = 0x8
    MISSING_TYPE *observer;	// 16 = 0x10
    MISSING_TYPE *settingsStoreToken;	// 24 = 0x18
    MISSING_TYPE *activeQueriesLock;	// 56 = 0x38
    MISSING_TYPE *queryQueue;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x0010000000041850
- (void).cxx_destruct;	// IMP=0x00000000000441f0
- (void)observerDidObserveDatabaseChange:(id)arg1;	// IMP=0x0000000000044160
- (id)init;	// IMP=0x0000000000041ac0

@end

