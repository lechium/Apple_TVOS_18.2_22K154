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

+ (id)logCategory;	// IMP=0x0010000000398766
+ (id)_quotaErrorFromServerError:(id)arg1;	// IMP=0x00100000003985cd
+ (id)_quotaServerErrorFromServerError:(id)arg1;	// IMP=0x001000000039845d
+ (id)defaultManager;	// IMP=0x00100000003983cf
- (void).cxx_destruct;	// IMP=0x0000000000397b29
@property(readonly) id <HMDDatabase> database; // @synthesize database=_database;
- (id)logIdentifier;	// IMP=0x0000000000397a74
- (id)database:(id)arg1 willRemoveZoneWithName:(id)arg2 isPrivate:(_Bool)arg3;	// IMP=0x00000000003978e2
- (id)_addCodeOperationWithFunctionName:(id)arg1 request:(id)arg2 responseClass:(Class)arg3;	// IMP=0x00000000003977bd
- (id)disableCloudStorageForZoneWithName:(id)arg1;	// IMP=0x0000000000397595
- (id)enableCloudStorageForZoneWithName:(id)arg1;	// IMP=0x00000000003973c9
- (id)fetchNamesForZonesWithEnabledCloudStorage;	// IMP=0x0000000000397236
- (void)synchronize;	// IMP=0x0000000000397168
- (id)initWithDatabase:(id)arg1;	// IMP=0x00000000003970ea
- (id)init;	// IMP=0x0000000000397090

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

