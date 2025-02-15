//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _WKAttributedStringWebViewCache : NSObject
{
}

+ (void)purgeAllWebViews;	// IMP=0x0080000000260971
+ (void)purgeSingleWebView;	// IMP=0x008000000026088a
+ (void)resetPurgeDelay;	// IMP=0x0080000000260817
+ (void)cacheWebView:(id)arg1;	// IMP=0x00800000002607bb
+ (RetainPtr_1dbdd1e2)retrieveOrCreateWebView;	// IMP=0x0080000000260628
+ (void)invalidateGlobalConfigurationIfNeeded:(id)arg1;	// IMP=0x0080000000260594
+ (void)maybeConsumeBundlePaths:(id)arg1;	// IMP=0x00800000002603bd
+ (void)maybeUpdateSourceApplicationBundleIdentifier:(id)arg1;	// IMP=0x0080000000260281
+ (void)maybeUpdateShouldAllowNetworkLoads:(id)arg1;	// IMP=0x00800000002601d1
+ (void)validateEntry:(id)arg1;	// IMP=0x008000000026016a
+ (void)clearConfigurationAndRaiseExceptionIfNecessary:(id)arg1;	// IMP=0x00800000002600d6
+ (void)clearConfiguration;	// IMP=0x0080000000260098
+ (id)configuration;	// IMP=0x008000000025fc49
+ (id)cache;	// IMP=0x008000000025fc02

@end

