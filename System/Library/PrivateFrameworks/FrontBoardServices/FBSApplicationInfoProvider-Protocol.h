//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/NSObject-Protocol.h>

@class BSAuditToken, FBSApplicationInfo, NSString;

@protocol FBSApplicationInfoProvider <NSObject>
- (FBSApplicationInfo *)applicationInfoForAuditToken:(BSAuditToken *)arg1;
- (FBSApplicationInfo *)applicationInfoForBundleIdentifier:(NSString *)arg1;

@optional
- (void)synchronize:(void (^)(void))arg1;
@end

