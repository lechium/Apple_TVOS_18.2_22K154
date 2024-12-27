//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDFamiliarFacesBulletinLogEvent : HMMLogEvent
{
    _Bool _containsFaceClassification;	// 8 = 0x8
    _Bool _doorbellPressed;	// 9 = 0x9
    long long _numberOfKnownPersons;	// 16 = 0x10
    long long _numberOfUnknownPersons;	// 24 = 0x18
    NSString *_bulletinReason;	// 32 = 0x20
    double _secondsFromDoorbellToFaceClassification;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000a6d32
@property(readonly) double secondsFromDoorbellToFaceClassification; // @synthesize secondsFromDoorbellToFaceClassification=_secondsFromDoorbellToFaceClassification;
@property(readonly) _Bool doorbellPressed; // @synthesize doorbellPressed=_doorbellPressed;
@property(readonly, copy) NSString *bulletinReason; // @synthesize bulletinReason=_bulletinReason;
@property(readonly) long long numberOfUnknownPersons; // @synthesize numberOfUnknownPersons=_numberOfUnknownPersons;
@property(readonly) long long numberOfKnownPersons; // @synthesize numberOfKnownPersons=_numberOfKnownPersons;
@property(readonly) _Bool containsFaceClassification; // @synthesize containsFaceClassification=_containsFaceClassification;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithContainsFaceClassification:(_Bool)arg1 numberOfKnownPersons:(long long)arg2 numberOfUnknownPersons:(long long)arg3 bulletinReason:(id)arg4 doorbellPressed:(_Bool)arg5 secondsFromDoorbellToFaceClassification:(double)arg6;	// IMP=0x00000000000a68e2

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSUUID",?,R,N

@property(readonly) Class superclass;

@end

