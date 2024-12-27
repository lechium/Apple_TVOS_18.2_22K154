//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

@interface MIIPAPatcherManifestTarget : NSObject
{
    NSString *_cfBundleVersion;	// 8 = 0x8
    NSString *_cfBundleShortVersion;	// 16 = 0x10
    NSString *_bundleIdentifier;	// 24 = 0x18
    NSArray *_uiSupportedDevices;	// 32 = 0x20
    NSString *_infoPlistHash;	// 40 = 0x28
    NSString *_infoPlistHashAlgorithm;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000341b8
@property(readonly, nonatomic) NSString *infoPlistHashAlgorithm; // @synthesize infoPlistHashAlgorithm=_infoPlistHashAlgorithm;
@property(readonly, nonatomic) NSString *infoPlistHash; // @synthesize infoPlistHash=_infoPlistHash;
@property(readonly, nonatomic) NSArray *uiSupportedDevices; // @synthesize uiSupportedDevices=_uiSupportedDevices;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) NSString *cfBundleShortVersion; // @synthesize cfBundleShortVersion=_cfBundleShortVersion;
@property(readonly, nonatomic) NSString *cfBundleVersion; // @synthesize cfBundleVersion=_cfBundleVersion;
- (MISSING_TYPE *)plistRepresentation;	// IMP=0x0010000000033f46
- (id)initWithCFBundleVersion:(id)arg1 cfBundleShortVersion:(id)arg2 bundleIdentifier:(id)arg3 uiSupportedDevices:(id)arg4 infoPlistHash:(id)arg5 infoPlistHashAlgorithm:(id)arg6;	// IMP=0x0010000000033dda

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

