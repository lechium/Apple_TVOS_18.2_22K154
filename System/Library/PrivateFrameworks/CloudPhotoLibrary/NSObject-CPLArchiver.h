//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (CPLArchiver)
+ (Class)classForStoredClassName:(id)arg1 forCPLArchiver:(id)arg2;	// IMP=0x005000000008de70
+ (id)cplAllPropertyNames;	// IMP=0x005000000010fd3b
+ (void)cplDumpProperties;	// IMP=0x005000000010fc76
+ (id)_cplPropertyAttributeMap;	// IMP=0x005000000010fb98
+ (void)_addPropertyAttributeMapToPropertyMapLocked:(id)arg1;	// IMP=0x005000000010eee3
+ (_Bool)cplShouldIgnorePropertyForEquality:(id)arg1;	// IMP=0x005000000010eedb
+ (_Bool)cplShouldIgnorePropertyForCoding:(id)arg1;	// IMP=0x005000000010ee7b
+ (id)cplAdditionalSecureClassesForProperty:(id)arg1;	// IMP=0x005000000010ee73
- (id)initWithCPLArchiver:(id)arg1;	// IMP=0x001000000008beea
- (id)plistArchiveWithCPLArchiver:(id)arg1;	// IMP=0x001000000008be3a
- (id)storedClassNameForCPLArchiver:(id)arg1;	// IMP=0x001000000008be20
- (unsigned long long)cplSpecialHash;	// IMP=0x001000000010b4a6
- (_Bool)cplSpecialIsEqual:(id)arg1;	// IMP=0x001000000010b494
- (id)cplFullDescription;	// IMP=0x001000000010b478
- (void)cplCopyProperties:(id)arg1 fromObject:(id)arg2 withCopyBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000010b466
- (void)cplCopyPropertiesFromObject:(id)arg1 withCopyBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000010b44c
- (void)_cplCopyProperties:(id)arg1 fromOtherObject:(id)arg2 withCopyBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000010b06a
- (void)cplClearProperties:(id)arg1;	// IMP=0x001000000010ae41
- (unsigned long long)cplHash;	// IMP=0x001000000010ad4d
- (_Bool)cplProperties:(id)arg1 areEqualToPropertiesOf:(id)arg2 withEqualityBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000010ad35
- (_Bool)cplProperties:(id)arg1 areEqualToPropertiesOf:(id)arg2 diffTracker:(id)arg3 withEqualityBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000010aaf6
- (_Bool)cplIsEqual:(id)arg1 withEqualityBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000010aadc
- (_Bool)cplIsEqual:(id)arg1;	// IMP=0x001000000010aac8
- (void)cplDecodePropertiesFromCoder:(id)arg1;	// IMP=0x001000000010a9fc
- (void)cplEncodePropertiesWithCoder:(id)arg1;	// IMP=0x001000000010a930
- (id)cplDeepCopy;	// IMP=0x001000000010a8ea
@end

