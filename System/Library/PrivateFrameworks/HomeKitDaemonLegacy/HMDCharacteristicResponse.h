//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCharacteristicRequest, NSData, NSDate, NSError, NSNumber;

__attribute__((visibility("hidden")))
@interface HMDCharacteristicResponse : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMDCharacteristicRequest *_request;	// 16 = 0x10
    id _value;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    NSNumber *_stateNumber;	// 40 = 0x28
    NSDate *_valueUpdatedTime;	// 48 = 0x30
    NSData *_notificationContext;	// 56 = 0x38
}

+ (id)responsesWithRequests:(id)arg1 characteristicUpdateDictionary:(id)arg2;	// IMP=0x0060000000bb99ba
+ (id)responseWithRequest:(id)arg1 characteristicUpdateDictionary:(id)arg2;	// IMP=0x0060000000bb9834
+ (id)responsesWithRequests:(id)arg1 error:(id)arg2;	// IMP=0x0060000000bb9637
+ (id)responseWithRequest:(id)arg1 error:(id)arg2;	// IMP=0x0060000000bb95c9
- (void).cxx_destruct;	// IMP=0x0000000000bb9554
@property(readonly, nonatomic) NSData *notificationContext; // @synthesize notificationContext=_notificationContext;
@property(readonly, nonatomic) NSDate *valueUpdatedTime; // @synthesize valueUpdatedTime=_valueUpdatedTime;
@property(readonly, nonatomic) NSNumber *stateNumber; // @synthesize stateNumber=_stateNumber;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) HMDCharacteristicRequest *request; // @synthesize request=_request;
- (id)attributeDescriptions;	// IMP=0x0000000000bb8f29
- (id)characteristicUpdateDictionary;	// IMP=0x0000000000bb8aa4
- (void)setValue:(id)arg1 updatedTime:(id)arg2 stateNumber:(id)arg3 notificationContext:(id)arg4;	// IMP=0x0000000000bb8944
- (id)initWithRequest:(id)arg1 error:(id)arg2;	// IMP=0x0000000000bb884f

@end

