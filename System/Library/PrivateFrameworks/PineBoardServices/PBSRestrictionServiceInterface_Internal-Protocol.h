//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PineBoardServices/PBSRestrictionServiceInterface-Protocol.h>

@class NSNumber, PBSUserProfile;

@protocol PBSRestrictionServiceInterface_Internal <PBSRestrictionServiceInterface>
- (void)setUser:(PBSUserProfile *)arg1 canBypassRestrictionsUsingCompanionDevice:(NSNumber *)arg2;
- (oneway void)canUserBypassRestrictionsUsingCompanionDevice:(PBSUserProfile *)arg1 result:(void (^)(NSNumber *, NSError *))arg2;
@end

