//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface CPApplicationLauncherSwift : NSObject
{
    MISSING_TYPE *behaviors;	// 8 = 0x8
    MISSING_TYPE *featureFlags;	// 16 = 0x10
    MISSING_TYPE *placementSceneIdentifier;	// 24 = 0x18
    MISSING_TYPE *placementSceneIdentifierContinuation;	// 2701144 = 0x293758
}

- (void).cxx_destruct;	// IMP=0x0000000000079580
- (void)authorizePiPForActivitySession:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000079050
- (void)revokeBackgroundAuthorizationForSession:(id)arg1;	// IMP=0x0000000000078f40
- (void)revokeBackgroundAuthorizationForBundleID:(id)arg1;	// IMP=0x0000000000078db0
- (void)launchAppForActivitySession:(id)arg1 options:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000077c50
- (id)init;	// IMP=0x0000000000077970
@property(nonatomic, copy) NSString *placementSceneIdentifier;

@end

