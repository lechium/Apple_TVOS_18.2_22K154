//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSArray, NSUUID;

@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable <NSObject>
+ (Class)cd_modelClass;

@optional
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSUUID",?,R,C,N

@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSUUID",?,R,C,N

- (NSArray *)hmd_modelsWithChangeType:(unsigned long long)arg1 detached:(_Bool)arg2 createManagedObject:(_Bool)arg3 error:(id *)arg4;
- (NSArray *)hmd_modelsWithChangeType:(unsigned long long)arg1 detached:(_Bool)arg2 error:(id *)arg3;
@end

