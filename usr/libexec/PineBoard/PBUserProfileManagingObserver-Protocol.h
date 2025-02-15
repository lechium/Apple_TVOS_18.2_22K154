//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString, PBSGroupRecommendationsSession;
@protocol PBUserProfileManaging;

@protocol PBUserProfileManagingObserver <NSObject>

@optional
- (void)userProfileManager:(id <PBUserProfileManaging>)arg1 didSwitchToUserWithIdentifier:(NSString *)arg2 previousUserIdentifier:(NSString *)arg3;
- (void)userProfileManager:(id <PBUserProfileManaging>)arg1 didUpdateGroupRecommendationsSession:(PBSGroupRecommendationsSession *)arg2;
- (void)userProfileManagerDidUpdate:(id <PBUserProfileManaging>)arg1;
@end

