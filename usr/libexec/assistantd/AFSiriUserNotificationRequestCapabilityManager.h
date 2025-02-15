//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol AFAnnouncementRequestCapabilityProviding, OS_dispatch_queue;

@interface AFSiriUserNotificationRequestCapabilityManager : NSObject
{
    NSHashTable *_observers;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <AFAnnouncementRequestCapabilityProviding> _capabilityProvider;	// 24 = 0x18
    long long _platform;	// 32 = 0x20
}

+ (_Bool)supportedByApplicationWithBundleID:(id)arg1;	// IMP=0x0020000000250102
+ (Class)_classForPlatform:(long long)arg1;	// IMP=0x001000000024ffdc
+ (id)sharedManager;	// IMP=0x001000000024ff79
- (void).cxx_destruct;	// IMP=0x002000000024fcee
- (void)provider:(id)arg1 availableAnnouncementRequestTypesChanged:(unsigned long long)arg2;	// IMP=0x001000000024fca1
- (void)provider:(id)arg1 eligibleAnnouncementRequestTypesChanged:(unsigned long long)arg2;	// IMP=0x001000000024fc54
- (void)notifyObserversOfCurrentRequestCanBeHandledState:(_Bool)arg1 onPlatform:(long long)arg2;	// IMP=0x001000000024fa1c
- (void)notifyObserversOfCurrentEligibleSetupState:(_Bool)arg1 onPlatform:(long long)arg2;	// IMP=0x001000000024f889
- (void)removeObserver:(id)arg1;	// IMP=0x001000000024f873
- (void)addObserver:(id)arg1;	// IMP=0x001000000024f85d
- (_Bool)requestCanBeHandled;	// IMP=0x001000000024f509
- (void)fetchRequestCanBeHandledStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000024f472
- (_Bool)hasEligibleSetup;	// IMP=0x001000000024f161
- (void)fetchEligibleSetupStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000024f0ca
- (id)_initWithPlatform:(long long)arg1;	// IMP=0x001000000024efae

@end

