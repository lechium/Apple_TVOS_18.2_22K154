//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PLLibraryRepairSupportRegistration : NSObject
{
}

+ (void)_enqueueSocialGroupAssetContainmentOperationWithLSM:(id)arg1 library:(id)arg2 serverTransaction:(id)arg3;	// IMP=0x004000000000d54d
+ (void)_enqueueDrawAssetPersonEdgesOperationWithLSM:(id)arg1 library:(id)arg2 serverTransaction:(id)arg3;	// IMP=0x001000000000d3f1
+ (void)_enqueueSocialGroupDeduplicationOperationWithLSM:(id)arg1 library:(id)arg2 serverTransaction:(id)arg3;	// IMP=0x001000000000d2c5
+ (void)enqueueOutstandingTransactionCrashRecoveryOperationsIfNecessary:(id)arg1;	// IMP=0x001000000000d0f7
+ (void)installPeriodicMaintenanceActivity;	// IMP=0x001000000000cfe0
+ (long long)checkLibraryIsReadyForProcessing:(id)arg1 libraryBundle:(id *)arg2;	// IMP=0x001000000000c8f0
+ (void)_updateXPCActivityProperties:(id)arg1;	// IMP=0x001000000000c8ea
+ (void)registerXPCActivityHandler:(const char *)arg1 description:(id)arg2 executionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000000c82d
+ (_Bool)_shouldSuppressPeriodicMaintenanceTasks;	// IMP=0x001000000000c746

@end

