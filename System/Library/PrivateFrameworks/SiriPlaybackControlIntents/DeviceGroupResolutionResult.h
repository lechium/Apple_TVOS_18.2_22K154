//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObjectResolutionResult.h>

@interface DeviceGroupResolutionResult : INObjectResolutionResult
{
}

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;	// IMP=0x006000000020be79
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;	// IMP=0x006000000020be0c
+ (id)successWithResolvedObject:(id)arg1;	// IMP=0x006000000020bdb6
+ (id)confirmationRequiredWithDeviceGroupToConfirm:(id)arg1;	// IMP=0x006000000020bd22
+ (id)disambiguationWithDeviceGroupsToDisambiguate:(id)arg1;	// IMP=0x006000000020bccf
+ (id)successWithResolvedDeviceGroup:(id)arg1;	// IMP=0x006000000020bc88
- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;	// IMP=0x000000000020bfb9

@end

