//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSData, NSDictionary, NSURL, PLPhotoLibrarySearchCriteria;

@protocol PLAssetsdLibraryManagementServiceProtocol <NSObject>
- (void)createManagedPhotoLibraryWithOptions:(NSDictionary *)arg1 sandboxExtension:(NSData *)arg2 reply:(void (^)(NSURL *, NSError *))arg3;
- (void)findPhotoLibraryIdentifiersMatchingSearchCriteria:(PLPhotoLibrarySearchCriteria *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)getPhotoLibraryIdentifierWithLibraryURL:(NSURL *)arg1 reply:(void (^)(PLPhotoLibraryIdentifier *, NSError *))arg2;
- (void)filesystemSizeForLibraryURL:(NSURL *)arg1 reply:(void (^)(unsigned long long, unsigned long long, unsigned long long, unsigned long long, NSError *))arg2;
- (void)resetSyndicationLibraryWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)closePhotoLibraryAtURL:(NSURL *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)closeAndDeletePhotoLibraryAtURL:(NSURL *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)getPhotoLibraryURLsWithLibraryURL:(NSURL *)arg1 reply:(void (^)(NSURL *, NSURL *, NSArray *, NSError *))arg2;
- (void)setSystemPhotoLibraryURL:(NSURL *)arg1 sandboxExtension:(NSData *)arg2 options:(unsigned short)arg3 reply:(void (^)(NSError *))arg4;
@end

