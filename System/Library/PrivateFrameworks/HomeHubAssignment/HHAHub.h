//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HHAHubAttributes, HHAHubSwVersion, NSDate, NSDictionary, NSMutableSet, NSString, NSUUID;
@protocol HHAHubListener, HHATimer, HHATimerFactory, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HHAHub : NSObject
{
    _Bool _connectedToMesh;	// 8 = 0x8
    _Bool _debouncedPreferOthers;	// 9 = 0x9
    HHAHubAttributes *_attributes;	// 16 = 0x10
    unsigned long long _debounceTimeNsec;	// 24 = 0x18
    id <HHAHubListener> _listener;	// 32 = 0x20
    NSMutableSet *_assignedEndpoints;	// 40 = 0x28
    NSDate *_latestActivity;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    id <HHATimerFactory> _timerFactory;	// 64 = 0x40
    id <HHATimer> _preferOthersTimer;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000016d43
@property(readonly, nonatomic) id <HHATimer> preferOthersTimer; // @synthesize preferOthersTimer=_preferOthersTimer;
@property(readonly, nonatomic) id <HHATimerFactory> timerFactory; // @synthesize timerFactory=_timerFactory;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) _Bool debouncedPreferOthers; // @synthesize debouncedPreferOthers=_debouncedPreferOthers;
@property(readonly, nonatomic) NSDate *latestActivity; // @synthesize latestActivity=_latestActivity;
@property(readonly, nonatomic) NSMutableSet *assignedEndpoints; // @synthesize assignedEndpoints=_assignedEndpoints;
@property(nonatomic) __weak id <HHAHubListener> listener; // @synthesize listener=_listener;
@property(nonatomic) _Bool connectedToMesh; // @synthesize connectedToMesh=_connectedToMesh;
@property(nonatomic) unsigned long long debounceTimeNsec; // @synthesize debounceTimeNsec=_debounceTimeNsec;
@property(readonly, nonatomic) HHAHubAttributes *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) NSString *latestActivityDescription;
- (void)updateActivity;	// IMP=0x0000000000016bb3
@property(readonly, nonatomic) _Bool preferOthers;
@property(readonly, nonatomic) float baseScore;
@property(readonly, nonatomic) unsigned long long slotsRemaining;
@property(readonly, nonatomic) unsigned long long slotCount;
@property(readonly, nonatomic) NSUUID *hubIdentifier;
@property(readonly, nonatomic) HHAHubSwVersion *softwareVersion;
- (_Bool)hubAttributesChanged:(id)arg1;	// IMP=0x00000000000167a9
- (void)revokeEndpoint:(id)arg1;	// IMP=0x00000000000166a4
- (void)setAssignedEndpoints:(id)arg1;	// IMP=0x0000000000016677
- (void)assignEndpoint:(id)arg1;	// IMP=0x000000000001655f
@property(readonly, nonatomic) NSDictionary *descriptionDictionaryWithAttributes;
- (id)descriptionDictionaryWithLeaderId:(id)arg1;	// IMP=0x000000000001603d
- (long long)compare:(id)arg1;	// IMP=0x0000000000015e81
- (id)description;	// IMP=0x0000000000015df9
- (void)_preferOthersTimerExpired;	// IMP=0x0000000000015da5
- (void)invalidate;	// IMP=0x0000000000015d8f
- (id)initWithAttributes:(id)arg1 timerFactory:(id)arg2 queue:(id)arg3;	// IMP=0x0000000000015c74

@end

