//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_EXExtensionIdentity.h"

@class LSApplicationExtensionRecord, LSExtensionPointRecord;

__attribute__((visibility("hidden")))
@interface _EXExtensionRecordIdentity : _EXExtensionIdentity
{
    LSApplicationExtensionRecord *_record;	// 8 = 0x8
    LSExtensionPointRecord *_extensionPoint;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000020be0
- (void).cxx_destruct;	// IMP=0x0000000000021707
@property(readonly) LSExtensionPointRecord *extensionPoint; // @synthesize extensionPoint=_extensionPoint;
@property(readonly) LSApplicationExtensionRecord *record; // @synthesize record=_record;
- (id)entitlementNamed:(id)arg1 ofClass:(Class)arg2;	// IMP=0x0000000000021634
- (id)entitlements;	// IMP=0x00000000000215bf
- (id)attributes;	// IMP=0x000000000002152f
- (id)extensionDictionary;	// IMP=0x00000000000214be
- (id)sdkDictionary;	// IMP=0x0000000000021426
- (id)containingURL;	// IMP=0x00000000000213cb
- (id)url;	// IMP=0x00000000000213ae
- (_Bool)isSystemComponent;	// IMP=0x0000000000021353
- (id)developerName;	// IMP=0x00000000000212f1
- (id)localizedName;	// IMP=0x00000000000212d4
- (id)UUID;	// IMP=0x00000000000212b7
- (unsigned int)platform;	// IMP=0x000000000002129a
- (id)applicationExtensionRecord;	// IMP=0x0000000000021285
- (id)containingBundleRecord;	// IMP=0x0000000000021268
- (id)bundleVersion;	// IMP=0x000000000002124b
- (id)bundleIdentifier;	// IMP=0x000000000002122e
- (id)extensionPointIdentifier;	// IMP=0x00000000000211d3
- (_Bool)setUserElection:(unsigned char)arg1 error:(id *)arg2;	// IMP=0x0000000000021143
- (unsigned char)userElection;	// IMP=0x00000000000210c5
- (unsigned char)defaultUserElection;	// IMP=0x0000000000020f57
- (id)extensionSettingsKey;	// IMP=0x0000000000020cc7
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000020bf9
- (Class)classForCoder;	// IMP=0x0000000000020be8
- (id)initWithApplicationExtensionRecord:(id)arg1;	// IMP=0x0000000000020b45
- (id)initWithPlugInKitProxy:(id)arg1;	// IMP=0x0000000000020a50

@end

