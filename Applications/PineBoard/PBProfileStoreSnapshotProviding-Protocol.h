//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UPProfileStoreSnapshot, UPUpdateProfileRequest;

@protocol PBProfileStoreSnapshotProviding
@property(readonly, nonatomic) UPProfileStoreSnapshot *snapshot;
- (_Bool)updateWithUpdateProfileRequest:(UPUpdateProfileRequest *)arg1 error:(out id *)arg2;
- (_Bool)updateWithAddProfileRequests:(NSArray *)arg1 updateProfileRequests:(NSArray *)arg2 removeProfileRequests:(NSArray *)arg3 error:(out id *)arg4;
@end

