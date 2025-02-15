//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ASAssetMetadataUpdatePolicy : NSObject
{
}

+ (id)policy;	// IMP=0x008000000028897c
- (double)automaticMetadataUpdateIntervalForAssetType:(id)arg1;	// IMP=0x00000000002891d8
- (double)defaultNetworkTimeout;	// IMP=0x00000000002891ca
- (id)checkPreferencesForOverride:(id)arg1;	// IMP=0x00000000002890ad
- (id)getSystemAppURL:(id)arg1;	// IMP=0x0000000000288fd9
- (id)serverURLForAssetType:(id)arg1;	// IMP=0x0000000000288dc3
- (char *)trainName;	// IMP=0x0000000000288ae3
- (id)_stringPreferenceValueForKey:(id)arg1;	// IMP=0x0000000000288a21
- (void)getDelay:(double *)arg1 andGracePeriod:(double *)arg2 forUpdateError:(id)arg3;	// IMP=0x0000000000288a0b
- (void)getDelay:(double *)arg1 andGracePeriod:(double *)arg2 forUpdateInterval:(double)arg3;	// IMP=0x00000000002889d1

@end

