//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOABAssignmentResponse, GEOPDDatasetABStatus, NSDictionary, NSString;
@protocol GEOExperimentServerProxyDelegate;

@protocol GEOExperimentServerProxy <NSObject>
@property(readonly, nonatomic) GEOABAssignmentResponse *experimentsInfo;
@property(nonatomic) __weak id <GEOExperimentServerProxyDelegate> delegate;
- (void)_debug_setBucketIdDictionaryRepresentation:(NSDictionary *)arg1;
- (void)_debug_setActiveExperimentBranchDictionaryRepresentation:(NSDictionary *)arg1;
- (void)_debug_fetchAllAvailableExperiments:(void (^)(GEOABAssignmentResponse *, NSError *))arg1;
- (void)_debug_setQuerySubstring:(NSString *)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;
- (void)abAssignUUIDWithSyncCompletionHandler:(void (^)(NSString *, NSDate *, NSError *))arg1;
- (void)abAssignUUIDWithCompletionHandler:(void (^)(NSString *, NSDate *, NSError *))arg1;
- (void)refreshDatasetABStatus:(GEOPDDatasetABStatus *)arg1;
- (void)forceUpdate:(id)arg1;
- (void)forceUpdate;
- (id)initWithDelegate:(id <GEOExperimentServerProxyDelegate>)arg1;
@end

