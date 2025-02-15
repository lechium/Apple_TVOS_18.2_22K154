//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessagePolicy.h>

__attribute__((visibility("hidden")))
@interface HMDConfigurationMessagePolicy : HMFMessagePolicy
{
    unsigned long long _operationTypes;	// 8 = 0x8
}

+ (id)policyWithOperationTypes:(unsigned long long)arg1;	// IMP=0x006000000024277a
@property(readonly) unsigned long long operationTypes; // @synthesize operationTypes=_operationTypes;
- (unsigned long long)hash;	// IMP=0x0000000000242757
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002426b1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002426a6
- (id)__initWithOperationTypes:(unsigned long long)arg1;	// IMP=0x0000000000242662
- (id)init;	// IMP=0x00000000002425ba

@end

