//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSURL;

@protocol PLAssetsdNonBindingDebugServiceProtocol <NSObject>
- (void)getPhotosXPCEndpointWithReply:(void (^)(_Bool, NSXPCListenerEndpoint *, NSError *))arg1;
- (void)getExistingPhotoLibraryIdentifierWithLibraryURL:(NSURL *)arg1 reply:(void (^)(PLPhotoLibraryIdentifier *, NSError *))arg2;
- (void)getBoundServicesForLibrary:(NSURL *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)getActivePhotoLibrariesWithReply:(void (^)(NSSet *, NSError *))arg1;
@end

