//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSDate, NSSet, NSString;
@protocol HMDDoorbellChimeControllerContext;

__attribute__((visibility("hidden")))
@interface HMDDoorbellChimeController : HMFObject
{
    id <HMDDoorbellChimeControllerContext> _context;	// 8 = 0x8
    NSSet *_availableCharacteristics;	// 16 = 0x10
    NSDate *_lastUnidentifiedChimeDate;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x00100000006aef06
- (void).cxx_destruct;	// IMP=0x00000000006ae9e0
@property(retain) NSDate *lastUnidentifiedChimeDate; // @synthesize lastUnidentifiedChimeDate=_lastUnidentifiedChimeDate;
@property(copy) NSSet *availableCharacteristics; // @synthesize availableCharacteristics=_availableCharacteristics;
@property(readonly) id <HMDDoorbellChimeControllerContext> context; // @synthesize context=_context;
- (void)listener:(id)arg1 didUpdateAvailableCharacteristics:(id)arg2;	// IMP=0x00000000006ae894
- (id)logIdentifier;	// IMP=0x00000000006ae7f3
- (void)handleCharacteristicsValueUpdatedNotification:(id)arg1;	// IMP=0x00000000006ae618
- (unsigned long long)_numHomePodsWithDoorbellChimeEnabled;	// IMP=0x00000000006ae50f
- (void)notifyAccessoriesViaCoordinationFreePathWithDelay:(double)arg1 home:(id)arg2 shouldPlayChime:(_Bool)arg3 personIdentificationText:(id)arg4 accessoriesToNotify:(id)arg5 logEvent:(id)arg6 accessoryUUID:(id)arg7;	// IMP=0x00000000006ae269
- (void)_notifyAllAccessoriesForDoorbellPressAndPlayChimeSound:(_Bool)arg1 attemptCloudPullIfNoPersonsFound:(_Bool)arg2;	// IMP=0x00000000006ad57c
- (void)_handleCharacteristicsValueUpdatedNotification:(id)arg1;	// IMP=0x00000000006ad23c
- (id)clientIdentifier;	// IMP=0x00000000006ad165
- (void)handleUpdatedPersonIdentificationInformation;	// IMP=0x00000000006acfc6
- (void)configure;	// IMP=0x00000000006ace5a
- (void)dealloc;	// IMP=0x00000000006acd5f
- (id)initWithContext:(id)arg1;	// IMP=0x00000000006accbf
- (id)initWithWorkQueue:(id)arg1 accessory:(id)arg2;	// IMP=0x00000000006acc09

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

