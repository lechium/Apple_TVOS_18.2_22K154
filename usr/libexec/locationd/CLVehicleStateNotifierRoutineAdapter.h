//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLVehicleStateNotifierRoutineAdapter : NSObject
{
    void *_vehicleStateNotifier;	// 8 = 0x8
    _Bool _valid;	// 16 = 0x10
}

@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void)onLowConfidenceVisit:(id)arg1;	// IMP=0x0010000001014eab
- (void)onVisit:(id)arg1;	// IMP=0x0010000001014b2c
- (id)initWithVehicleStateNotifier:(void *)arg1;	// IMP=0x0010000001014ae8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

