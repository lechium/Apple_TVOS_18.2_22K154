//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterBoardUIServices/BSInvalidatable-Protocol.h>

@class NSPredicate, PRUISPosterSnapshotBundle, PRUISPosterSnapshotRequest;

@protocol PRUISPosterSnapshotCache <BSInvalidatable>
- (void)cleanup;
- (void)discardSnapshotsForPostersMatchingPredicate:(NSPredicate *)arg1;
- (_Bool)cacheSnapshotBundle:(PRUISPosterSnapshotBundle *)arg1 forRequest:(PRUISPosterSnapshotRequest *)arg2 completion:(void (^)(NSError *))arg3;
- (_Bool)cacheSnapshotBundle:(PRUISPosterSnapshotBundle *)arg1 forRequest:(PRUISPosterSnapshotRequest *)arg2;
- (PRUISPosterSnapshotBundle *)latestSnapshotBundleForRequest:(PRUISPosterSnapshotRequest *)arg1 error:(out id *)arg2;
- (_Bool)checkCacheIsReachable:(out id *)arg1;
@end

