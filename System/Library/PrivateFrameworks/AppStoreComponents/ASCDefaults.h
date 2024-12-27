//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSNumber, NSString, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface ASCDefaults : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    NSCache *_cachedValues;	// 16 = 0x10
    NSUserDefaults *_userDefaults;	// 24 = 0x18
}

+ (id)daemonDefaults;	// IMP=0x004000000001940c
- (void).cxx_destruct;	// IMP=0x000000000001a329
@property(readonly, copy, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(copy, nonatomic) NSCache *cachedValues; // @synthesize cachedValues=_cachedValues;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)description;	// IMP=0x000000000001a25e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001a153
- (unsigned long long)hash;	// IMP=0x000000000001a0d8
@property(copy, nonatomic) NSString *jsVersion;
@property(nonatomic) _Bool preferInternalJS;
@property(copy, nonatomic) NSString *debugPackageURL;
@property(nonatomic) _Bool forceStandaloneWatch;
@property(nonatomic) _Bool enableWebInspector;
@property(copy, nonatomic) NSNumber *overlaysLoadTimeout;
@property(copy, nonatomic) NSNumber *overlaysRateLimitTimeWindow;
@property(copy, nonatomic) NSNumber *overlaysRateLimitRequestsPerSecond;
@property(nonatomic) _Bool disableShutdownTimer;
@property(nonatomic) _Bool forceRightToLeftLayout;
@property(copy, nonatomic) NSString *storefrontLocaleID;
- (id)objectForKey:(id)arg1;	// IMP=0x00000000000197a5
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000019723
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000195fa
- (void)dealloc;	// IMP=0x000000000001957f
- (id)initWithBundleID:(id)arg1;	// IMP=0x0000000000019478

@end

