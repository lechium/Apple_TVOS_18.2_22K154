//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;
@protocol __NSString__;

@protocol PBSUserProfilePictureServiceServerInterface
- (oneway void)stopObservingUserWithAltDSID:(NSString *)arg1;
- (oneway void)resumeObservingUsersWithAltDSIDs:(NSSet<__NSString__> *)arg1;
- (oneway void)startObservingUserWithAltDSID:(NSString *)arg1 completionHandler:(void (^)(NSData *, NSValue *, NSError *))arg2;
- (oneway void)stopObservingUserWithIdentifier:(NSString *)arg1;
- (oneway void)resumeObservingUsersWithIdentifiers:(NSSet<__NSString__> *)arg1;
- (oneway void)startObservingUserWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSData *, NSValue *, NSError *))arg2;
@end

