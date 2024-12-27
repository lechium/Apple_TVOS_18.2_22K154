//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager;

__attribute__((visibility("hidden")))
@interface HMDCloudManagerDataSource : HMFObject
{
    HMDHomeManager *_homeManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000739583
@property(readonly) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (id)keyTransferAgent;	// IMP=0x000000000073951a
- (_Bool)supportsKeyTransferServer;	// IMP=0x00000000007394cf
- (id)queryDatabaseOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000007394b6
- (unsigned long long)dataMigrationOptions;	// IMP=0x00000000007394a8
- (_Bool)isKeychainSyncEnabled;	// IMP=0x000000000073945d
- (_Bool)isControllerKeyAvailable;	// IMP=0x00000000007393f5
- (id)initWithHomeManager:(id)arg1;	// IMP=0x000000000073938e

@end

