//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContainerManagerCommon/NSObject-Protocol.h>

@class MCMContainerClassPathCache, MCMLibraryRepair, MCMManagedPathRegistry, MCMPOSIXUser, NSArray, NSURL;
@protocol MCMContainerClassIterator, MCMStaticConfiguration;

@protocol MCMGlobalConfiguration <NSObject>
@property(readonly, nonatomic) _Bool kernelUpcallEnabled;
@property(readonly, nonatomic) MCMLibraryRepair *libraryRepair;
@property(readonly, nonatomic) MCMManagedPathRegistry *managedPathRegistry;
@property(readonly, nonatomic) MCMContainerClassPathCache *classPathCache;
@property(readonly, nonatomic) MCMPOSIXUser *systemContainerOwner;
@property(readonly, nonatomic) MCMPOSIXUser *bundleContainerOwner;
@property(readonly, nonatomic) unsigned int systemContainerMode;
@property(readonly, nonatomic) unsigned int bundleContainerMode;
@property(readonly, nonatomic) unsigned int userContainerMode;
@property(readonly, nonatomic) unsigned int runmode;
@property(readonly, nonatomic) _Bool isInternalImage;
@property(readonly, nonatomic) MCMPOSIXUser *currentUser;
@property(readonly, nonatomic) MCMPOSIXUser *defaultUser;
@property(readonly, nonatomic) NSArray *excludedFromAppUserData;
@property(readonly, nonatomic) NSArray *appUserDataItemNames;
@property(readonly, nonatomic) NSURL *sharedContainersDirectory;
@property(readonly, nonatomic) id <MCMContainerClassIterator> classIterator;
@property(readonly, nonatomic) id <MCMStaticConfiguration> staticConfig;
- (void)signpostFirstContainerClass:(unsigned long long)arg1;
- (_Bool)handlesUserContainers;
- (_Bool)handlesGlobalContainers;
- (unsigned int)dispositionForContainerClass:(unsigned long long)arg1 forUser:(MCMPOSIXUser *)arg2;
- (unsigned int)dispositionForContainerClass:(unsigned long long)arg1;
- (_Bool)isGlobalContainerClass:(unsigned long long)arg1;
- (_Bool)isUnsupportedBundleContainerWithContainerClass:(unsigned long long)arg1;
- (_Bool)isUserBundleContainerWithContainerClass:(unsigned long long)arg1;
- (_Bool)isPerUserBundleContainerWithContainerClass:(unsigned long long)arg1;
- (_Bool)isGlobalBundleContainerWithContainerClass:(unsigned long long)arg1;
- (_Bool)isUnsupportedSystemContainerWithContainerClass:(unsigned long long)arg1;
- (_Bool)isUserSystemContainerWithContainerClass:(unsigned long long)arg1;
- (_Bool)isGlobalSystemContainerWithContainerClass:(unsigned long long)arg1;
@end

