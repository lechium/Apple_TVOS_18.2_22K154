//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObjectResolutionResult.h>

@interface DeviceQueryResolutionResult : INObjectResolutionResult
{
}

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;	// IMP=0x006000000020a85c
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;	// IMP=0x006000000020a7ef
+ (id)successWithResolvedObject:(id)arg1;	// IMP=0x006000000020a799
+ (id)confirmationRequiredWithDeviceQueryToConfirm:(id)arg1;	// IMP=0x006000000020a705
+ (id)disambiguationWithDeviceQuerysToDisambiguate:(id)arg1;	// IMP=0x006000000020a66e
+ (id)successWithResolvedDeviceQuery:(id)arg1;	// IMP=0x006000000020a539
- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;	// IMP=0x000000000020a99c

@end

