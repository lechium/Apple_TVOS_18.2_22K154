//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class NSString;

@protocol HMDAppProtectionGuard <NSObject>
- (void)initiateAuthenticationForApplicationWithBundleIdentifier:(NSString *)arg1 onBehalfOfProcessWithAuditToken:(CDStruct_6ad76789)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end

