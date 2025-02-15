//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDNotificationRegistryCoreDataCharacteristicsRequest, NSArray;

__attribute__((visibility("hidden")))
@interface HMDNotificationRegistryCoreDataCharacteristicsRequestResult : HMFObject
{
    _Bool _didSucceed;	// 8 = 0x8
    _Bool _didModify;	// 9 = 0x9
    _Bool _didModifyThresholdOnly;	// 10 = 0xa
    HMDNotificationRegistryCoreDataCharacteristicsRequest *_coreDataRequest;	// 16 = 0x10
    NSArray *_modifiedCharacteristics;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000ce1329
@property(readonly) NSArray *modifiedCharacteristics; // @synthesize modifiedCharacteristics=_modifiedCharacteristics;
@property(readonly) _Bool didModifyThresholdOnly; // @synthesize didModifyThresholdOnly=_didModifyThresholdOnly;
@property(readonly) _Bool didModify; // @synthesize didModify=_didModify;
@property(readonly) _Bool didSucceed; // @synthesize didSucceed=_didSucceed;
@property(readonly) HMDNotificationRegistryCoreDataCharacteristicsRequest *coreDataRequest; // @synthesize coreDataRequest=_coreDataRequest;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ce120d
- (id)initWithCoreDataRequest:(id)arg1 didSucceed:(_Bool)arg2 didModify:(_Bool)arg3 didModifyThresholdOnly:(_Bool)arg4 modifiedCharacteristics:(id)arg5;	// IMP=0x0000000000ce1137

@end

