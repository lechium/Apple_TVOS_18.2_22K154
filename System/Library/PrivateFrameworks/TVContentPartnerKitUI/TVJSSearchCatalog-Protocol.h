//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVContentPartnerKitUI/JSExport-Protocol.h>

@class JSValue, NSArray, NSNumber, NSString;

@protocol TVJSSearchCatalog <JSExport>
- (id)entitlementForAppWithBundleID:(NSString *)arg1:(NSString *)arg2;
- (_Bool)canSubscribeInAppWithBundleID:(NSString *)arg1;
- (void)fetchActiveSubscriptionServices:(NSArray *)arg1:(NSArray *)arg2:(NSNumber *)arg3:(JSValue *)arg4;
@end

