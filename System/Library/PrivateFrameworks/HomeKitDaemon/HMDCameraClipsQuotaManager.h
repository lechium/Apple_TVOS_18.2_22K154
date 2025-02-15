//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol HMDDatabase;

__attribute__((visibility("hidden")))
@interface HMDCameraClipsQuotaManager : NSObject
{
    id <HMDDatabase> _database;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x001000000051907a
+ (id)_quotaErrorFromServerError:(id)arg1;	// IMP=0x0010000000518ee1
+ (id)_quotaServerErrorFromServerError:(id)arg1;	// IMP=0x0010000000518d71
+ (id)defaultManager;	// IMP=0x0010000000518ce3
- (void).cxx_destruct;	// IMP=0x000000000051843d
@property(readonly) id <HMDDatabase> database; // @synthesize database=_database;
- (id)logIdentifier;	// IMP=0x0000000000518388
- (id)database:(id)arg1 willRemoveZoneWithName:(id)arg2 isPrivate:(_Bool)arg3;	// IMP=0x00000000005181f6
- (id)_addCodeOperationWithFunctionName:(id)arg1 request:(id)arg2 responseClass:(Class)arg3;	// IMP=0x00000000005180d1
- (id)disableCloudStorageForZoneWithName:(id)arg1;	// IMP=0x0000000000517ea9
- (id)enableCloudStorageForZoneWithName:(id)arg1;	// IMP=0x0000000000517cdd
- (id)fetchNamesForZonesWithEnabledCloudStorage;	// IMP=0x0000000000517b4a
- (void)synchronize;	// IMP=0x0000000000517a7c
- (id)initWithDatabase:(id)arg1;	// IMP=0x00000000005179fe
- (id)init;	// IMP=0x00000000005179a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

