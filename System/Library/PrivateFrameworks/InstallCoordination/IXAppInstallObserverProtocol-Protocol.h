//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <InstallCoordination/NSObject-Protocol.h>

@class IXAppInstallCoordinatorSeed, IXApplicationIdentity, LSRecordPromise, NSError, NSString;

@protocol IXAppInstallObserverProtocol <NSObject>
- (oneway void)_client_coordinatorWithSeed:(IXAppInstallCoordinatorSeed *)arg1 didCancelWithReason:(NSError *)arg2 client:(unsigned long long)arg3;
- (oneway void)_client_coordinatorDidCompleteSuccessfullyWithSeed:(IXAppInstallCoordinatorSeed *)arg1 forRecordPromise:(LSRecordPromise *)arg2;
- (oneway void)_client_coordinatorShouldBeginPostProcessingWithSeed:(IXAppInstallCoordinatorSeed *)arg1 forRecordPromise:(LSRecordPromise *)arg2;
- (oneway void)_client_coordinatorDidInstallPlaceholderWithSeed:(IXAppInstallCoordinatorSeed *)arg1 forRecordPromise:(LSRecordPromise *)arg2;
- (oneway void)_client_coordinatorShouldBeginRestoringUserDataWithSeed:(IXAppInstallCoordinatorSeed *)arg1;
- (oneway void)_client_coordinatorWithSeed:(IXAppInstallCoordinatorSeed *)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
- (oneway void)_client_coordinatorShouldPauseWithSeed:(IXAppInstallCoordinatorSeed *)arg1;
- (oneway void)_client_coordinatorShouldResumeWithSeed:(IXAppInstallCoordinatorSeed *)arg1;
- (oneway void)_client_shouldPrioritizeAppWithIdentity:(IXApplicationIdentity *)arg1;
- (oneway void)_client_shouldPrioritizeAppWithBundleID:(NSString *)arg1;
- (oneway void)_client_coordinatorShouldPrioritizeWithSeed:(IXAppInstallCoordinatorSeed *)arg1;
@end

