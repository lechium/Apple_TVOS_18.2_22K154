//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSDate, NSManagedObjectContext, NSProgress, NSString, PLInternalResource, PLResourceLocalAvailabilityRequestOptions, PLSyndicationResourcePrefetchEngine;

@protocol PLSyndicationResourcePrefetchEngineDelegate <NSObject>
@property(readonly, nonatomic) _Bool isNetworkAccessAllowed;
@property(readonly, nonatomic) NSString *name;
- (NSProgress *)requestLocalAvailabilityChangeForPrefetchManager:(PLSyndicationResourcePrefetchEngine *)arg1 resource:(PLInternalResource *)arg2 options:(PLResourceLocalAvailabilityRequestOptions *)arg3 completion:(void (^)(NSError *, long long, NSURL *))arg4;
- (void)performTransactionForPrefetchManager:(PLSyndicationResourcePrefetchEngine *)arg1 synchronous:(_Bool)arg2 block:(void (^)(NSManagedObjectContext *))arg3;
- (void)prefetchManager:(PLSyndicationResourcePrefetchEngine *)arg1 receivedNewDownloadThrottlingDate:(NSDate *)arg2 managedObjectContext:(NSManagedObjectContext *)arg3;
- (NSDate *)downloadThrottlingDateForPrefetchManager:(PLSyndicationResourcePrefetchEngine *)arg1;
@end

