//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class INImage, INPortableImageLoader, INUserContext, NSSet, NSString, NSUUID;

@protocol INHServing
- (oneway void)storeUserContext:(INUserContext *)arg1 forBundleIdentifier:(NSString *)arg2;
- (oneway void)fetchShareExtensionIntentForExtensionContextUUID:(NSUUID *)arg1 completion:(void (^)(INIntent *))arg2;
- (oneway void)loadBundleURLsForBundleIdentifiers:(NSSet *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)loadSchemaURLsWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)loadSchemaURLsForBundleIdentifiers:(NSSet *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)purgeExpiredImagesInEphemeralStore;
- (oneway void)purgeImageWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)retrieveImageWithIdentifier:(NSString *)arg1 completion:(void (^)(INImage *, NSError *))arg2;
- (oneway void)storeImage:(INImage *)arg1 scaled:(_Bool)arg2 qualityOfService:(unsigned int)arg3 storeType:(unsigned long long)arg4 completion:(void (^)(NSString *, NSError *))arg5;
- (oneway void)filePathForImage:(INImage *)arg1 usingPortableImageLoader:(INPortableImageLoader *)arg2 completion:(void (^)(NSURL *, NSError *))arg3;
- (oneway void)loadDataImageForImage:(INImage *)arg1 scaledWidth:(double)arg2 scaledHeight:(double)arg3 usingPortableImageLoader:(INPortableImageLoader *)arg4 completion:(void (^)(INImage *, NSError *))arg5;
@end

