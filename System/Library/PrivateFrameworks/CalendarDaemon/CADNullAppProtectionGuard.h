//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CADNullAppProtectionGuard : NSObject
{
}

+ (id)shared;	// IMP=0x00100000000062a1
- (void)initiateAuthenticationForApplicationWithBundleIdentifier:(id)arg1 onBehalfOfProcessWithAuditToken:(CDStruct_4c969caf)arg2 accessGrantedByEntitlement:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000062f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

