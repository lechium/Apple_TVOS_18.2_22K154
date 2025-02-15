//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString;
@protocol ICDBackgroundTaskScheduling;

@interface ICDHandlerCoordinator : NSObject
{
    NSOperationQueue *_operationQueue;	// 8 = 0x8
    _Bool _setupCompleted;	// 16 = 0x10
    long long _libraryManagementPolicy;	// 24 = 0x18
    id <ICDBackgroundTaskScheduling> _taskScheduler;	// 32 = 0x20
}

+ (id)_managedHandlerClasses;	// IMP=0x00200000000fd70e
- (void).cxx_destruct;	// IMP=0x00200000000fc366
@property(readonly, nonatomic) __weak id <ICDBackgroundTaskScheduling> taskScheduler; // @synthesize taskScheduler=_taskScheduler;
@property(nonatomic) long long libraryManagementPolicy; // @synthesize libraryManagementPolicy=_libraryManagementPolicy;
- (void)_processActiveConfigurationChange:(id)arg1 initialSetup:(_Bool)arg2;	// IMP=0x00100000000fb925
- (void)_processSupportedConfigurationsChange:(id)arg1 initialSetup:(_Bool)arg2;	// IMP=0x00100000000fb2f5
- (void)_deauthenticateUnsupportedConfigurationsFromChange:(id)arg1 initialSetup:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000faceb
- (id)_configurationsToRemoveForChange:(id)arg1 initialSetup:(_Bool)arg2;	// IMP=0x00100000000faba3
- (id)_configurationsToActivateForChange:(id)arg1 initialSetup:(_Bool)arg2;	// IMP=0x00100000000faa5b
@property(nonatomic, getter=isSetupCompleted) _Bool setupCompleted; // @synthesize setupCompleted=_setupCompleted;
- (void)changeLibraryManagementPolicy:(long long)arg1 withAccountsStateChange:(id)arg2;	// IMP=0x00100000000fa891
- (void)enumerateHandlersForAccountState:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fa5c7
- (void)updateHandlersWithAccountStateChange:(id)arg1;	// IMP=0x00100000000fa4e9
- (void)setupHandlersWithAccountStateChange:(id)arg1;	// IMP=0x00100000000fa40b
@property(readonly, copy) NSString *description;
- (id)initWithLibraryManagementPolicy:(long long)arg1 backgroundTaskScheduler:(id)arg2;	// IMP=0x00100000000fa2fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

