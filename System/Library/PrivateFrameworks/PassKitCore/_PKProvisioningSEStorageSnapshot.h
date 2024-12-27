//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _PKProvisioningSEStorageSnapshot : NSObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000012e560
+ (id)purpleTrustAirAliroAppletType;	// IMP=0x001000000012e8a0
+ (id)purpleTrustAirAccessAppletType;	// IMP=0x001000000012e890
+ (id)purpleTrustAirHomeAppletType;	// IMP=0x001000000012e500
- (id)init;	// IMP=0x000000000012e690
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000012e610
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000012e580
- (long long)requiredStorageForAppletTypes:(id)arg1;	// IMP=0x000000000012e4d0
- (long long)totalUsage;	// IMP=0x000000000012e4c0
- (long long)totalStorage;	// IMP=0x000000000012e4b0
- (long long)usageOfAppletType:(id)arg1;	// IMP=0x000000000012e4a0
- (long long)totalUsageOfAppletType:(id)arg1;	// IMP=0x000000000012e490
- (id)appletTypesForAppletIDs:(id)arg1;	// IMP=0x000000000012e470
- (void)reset;	// IMP=0x000000000012e450
- (void)removeFromSnapshotWithAppletTypes:(id)arg1;	// IMP=0x000000000012e440
- (_Bool)addToSnapshotWithAppletTypes:(id)arg1;	// IMP=0x000000000012e430
- (_Bool)canFitWithAppletTypes:(id)arg1;	// IMP=0x000000000012e420

@end

