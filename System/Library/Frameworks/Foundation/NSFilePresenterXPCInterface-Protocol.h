//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileCoordinationDebugInfoXPCInterface-Protocol.h>

@class NSSet, NSString, NSURLPromisePair;

@protocol NSFilePresenterXPCInterface <NSFileCoordinationDebugInfoXPCInterface>
- (oneway void)logSuspensionWarning;
- (oneway void)setProviderPurposeIdentifier:(NSString *)arg1;
- (oneway void)updateLastEventID:(unsigned long long)arg1;
- (oneway void)observePresenterChange:(_Bool)arg1 forSubitemAtURL:(NSURLPromisePair *)arg2;
- (oneway void)observeVersionChangeOfKind:(NSString *)arg1 toItemAtURL:(NSURLPromisePair *)arg2 withClientID:(NSString *)arg3 name:(NSString *)arg4;
- (oneway void)observeChangeOfUbiquityAttributes:(NSSet *)arg1;
- (oneway void)observeSharingChangeWithSubitemURL:(NSURLPromisePair *)arg1;
- (oneway void)observeUbiquityChangeWithSubitemURL:(NSURLPromisePair *)arg1;
- (oneway void)observeReconnection;
- (oneway void)observeDisconnection;
- (oneway void)observeMoveToURL:(NSURLPromisePair *)arg1 withSubitemURL:(NSURLPromisePair *)arg2 byWriterWithPurposeID:(NSString *)arg3 withFSID:(struct fsid)arg4 andFileID:(unsigned long long)arg5;
- (oneway void)observeChangeWithSubitemURL:(NSURLPromisePair *)arg1;
- (void)accommodateDeletionOfSubitemAtURL:(NSURLPromisePair *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)saveChangesWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)reacquireFromWritingClaimForID:(NSString *)arg1 completionHandler:(void (^)(void))arg2;
- (void)relinquishToWritingClaimWithID:(NSString *)arg1 options:(unsigned long long)arg2 purposeID:(NSString *)arg3 subitemURL:(NSURLPromisePair *)arg4 completionHandler:(void (^)(NSError *))arg5;
- (oneway void)reacquireFromReadingClaimForID:(NSString *)arg1;
- (void)relinquishToReadingClaimWithID:(NSString *)arg1 options:(unsigned long long)arg2 purposeID:(NSString *)arg3 completionHandler:(void (^)(NSError *))arg4;
@end

