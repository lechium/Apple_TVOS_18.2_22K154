//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServicesCore/NSObject-Protocol.h>

@class NSArray, NSString, PLAbstractEncodableObject;
@protocol PLCapturePhotoSettings;

@protocol PLAssetsdResourceInternalServiceProtocol <NSObject>
- (void)cancelAllPrewarmingWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)prewarmWithCapturePhotoSettings:(PLAbstractEncodableObject<PLCapturePhotoSettings> *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)asynchronousMasterThumbnailForAssetUUID:(NSString *)arg1 reply:(void (^)(_Bool, NSData *, NSError *))arg2;
- (void)batchSaveAssetJobs:(NSArray *)arg1 reply:(void (^)(NSArray *))arg2;
@end

