//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSUUID;
@protocol HHAMeshProxy;

@protocol HHAMeshMessageDelegate
- (void)meshProxy:(id <HHAMeshProxy>)arg1 didReceiveRequest:(NSDictionary *)arg2 fromHub:(NSUUID *)arg3 withResponseHandler:(void (^)(NSDictionary *, NSUUID *, NSError *))arg4;
@end

