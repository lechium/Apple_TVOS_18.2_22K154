//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Security/NSObject-Protocol.h>

@class NSDictionary, NSString, SFAnalytics, SFAnalyticsMatchingRule;

@protocol SFAnalyticsCollectionAction <NSObject>
- (void)tapToRadar:(NSString *)arg1 description:(NSString *)arg2 radar:(NSString *)arg3 componentName:(NSString *)arg4 componentVersion:(NSString *)arg5 componentID:(NSString *)arg6 attributes:(NSDictionary *)arg7;
- (void)autoBugCaptureWithType:(NSString *)arg1 subType:(NSString *)arg2 domain:(NSString *)arg3;
- (_Bool)shouldRatelimit:(SFAnalytics *)arg1 rule:(SFAnalyticsMatchingRule *)arg2;
@end

