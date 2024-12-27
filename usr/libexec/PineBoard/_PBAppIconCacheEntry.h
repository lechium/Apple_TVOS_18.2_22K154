//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface _PBAppIconCacheEntry : NSObject
{
    NSMutableDictionary *_cacheKeyByScale;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000bf01e
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)setCacheKey:(id)arg1 forScale:(double)arg2;	// IMP=0x00100000000bef90
- (id)cacheKeyForScale:(double)arg1;	// IMP=0x00100000000bef28
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x00100000000bee96
- (id)init;	// IMP=0x00100000000bee88

@end

