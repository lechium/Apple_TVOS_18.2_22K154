//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BiometricsStore : NSObject
{
}

+ (struct __CFDictionary *)_copyKeychainQuery;	// IMP=0x0040000000027452
+ (void)storeToken:(id)arg1;	// IMP=0x00100000000271c0
+ (id)retreiveTokenWithAction:(long long)arg1 error:(id *)arg2;	// IMP=0x0010000000026dff
+ (void)removeToken;	// IMP=0x0010000000026ba6

@end

