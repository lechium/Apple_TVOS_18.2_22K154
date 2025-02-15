//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CLMobilityWalkingBoutServiceProtocol;

@interface CLMobilityHealthKitWriter : NSObject
{
    id <CLMobilityWalkingBoutServiceProtocol> _delegate;	// 8 = 0x8
}

- (void)dataCollectorDidRequestCollectionThroughDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0020000000ffe1c6
- (_Bool)areWalkingSteadinessNotificationsEnabled;	// IMP=0x0010000000ffe1be
- (_Bool)isWalkingSteadinessAvailable;	// IMP=0x0010000000ffe1b6
- (void)_writeToHealthKitType:(int)arg1 value:(double)arg2 startDate:(id)arg3 endDate:(id)arg4 metadata:(id)arg5;	// IMP=0x0010000000ffe1b0
- (void)writeToHealthKitType:(int)arg1 value:(double)arg2 startDate:(id)arg3 endDate:(id)arg4;	// IMP=0x0010000000ffe1aa
- (void)writeToHealthKitType:(int)arg1 value:(double)arg2 startDate:(id)arg3 endDate:(id)arg4 deviceSide:(unsigned char)arg5;	// IMP=0x0010000000ffe1a4
- (void)writeSteadinessEvent:(int)arg1 startDate:(id)arg2 endDate:(id)arg3 source:(id)arg4;	// IMP=0x0010000000ffe19e
- (void)writeToHealthKitAppleWalkingSteadiness:(double)arg1 startDate:(id)arg2 endDate:(id)arg3 source:(id)arg4;	// IMP=0x0010000000ffe198
- (void)dealloc;	// IMP=0x0010000000ffe169
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000ffe12c

@end

