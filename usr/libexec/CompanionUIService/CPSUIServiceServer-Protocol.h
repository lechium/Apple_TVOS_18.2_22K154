//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPSUIBannerRequest, NSString;

@protocol CPSUIServiceServer
- (oneway void)revokeAllBannersWithReply:(void (^)(NSError *))arg1;
- (oneway void)revokeBannerWithIdentifier:(NSString *)arg1 withReply:(void (^)(NSError *))arg2;
- (oneway void)presentBanner:(CPSUIBannerRequest *)arg1 reply:(void (^)(NSError *))arg2;
@end

