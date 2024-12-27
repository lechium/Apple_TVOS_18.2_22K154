//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MADAutoAssetAuthorizationPolicy : NSObject
{
}

+ (id)authorizationAssetTypeFromMessage:(id)arg1 alreadyOnStateQueue:(_Bool)arg2;	// IMP=0x0080000000266d22
+ (id)issueSandboxExtensionForAuditToken:(CDStruct_4c969caf)arg1 path:(id)arg2;	// IMP=0x0080000000266d1a
+ (id)_allowListedAutoAssetTypes;	// IMP=0x0080000000266cd1
+ (_Bool)_accessibleAssetTypes:(id)arg1 containsAssetType:(id)arg2;	// IMP=0x0080000000266a28
+ (_Bool)isConnection:(id)arg1 authorizedForMessage:(id)arg2;	// IMP=0x00800000002665e4
+ (_Bool)isConnectionAuthorized:(id)arg1;	// IMP=0x00800000002665dc

@end

