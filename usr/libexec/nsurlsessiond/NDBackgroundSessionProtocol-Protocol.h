//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSDictionary, NSFileHandle, NSString, NSURL, NSURLRequest, NSUUID, __NSCFResumableUploadState;

@protocol NDBackgroundSessionProtocol <NSObject>
- (void)avAggregateAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 serializedMediaSelections:(NSArray *)arg2 assetTitle:(NSString *)arg3 assetArtworkData:(NSData *)arg4 options:(NSDictionary *)arg5 assetOptions:(NSDictionary *)arg6 childDownloadSessionIdentifier:(NSString *)arg7 identifier:(unsigned long long)arg8 uniqueIdentifier:(NSUUID *)arg9 reply:(void (^)(_Bool))arg10;
- (void)avAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 URL:(NSURL *)arg2 destinationURL:(NSURL *)arg3 temporaryDestinationURL:(NSURL *)arg4 assetTitle:(NSString *)arg5 assetArtworkData:(NSData *)arg6 options:(NSDictionary *)arg7 assetOptions:(NSDictionary *)arg8 identifier:(unsigned long long)arg9 uniqueIdentifier:(NSUUID *)arg10 taskKind:(unsigned long long)arg11 enableSPIDelegateCallbacks:(_Bool)arg12 reply:(void (^)(_Bool))arg13;
- (void)setPropertyOnStreamWithIdentifier:(unsigned long long)arg1 propDict:(NSDictionary *)arg2 propKey:(NSString *)arg3 withReply:(void (^)(_Bool))arg4;
- (void)invalidateWithReply:(void (^)(void))arg1;
- (void)resetStorageWithReply:(void (^)(void))arg1;
- (void)setTLSSessionCachePrefix:(NSString *)arg1;
- (void)setDiscretionaryOverride:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;
- (void)setTLSMaximumSupportedProtocolVersion:(unsigned short)arg1 forTaskWithIdentifier:(unsigned long long)arg2;
- (void)setTLSMinimumSupportedProtocolVersion:(unsigned short)arg1 forTaskWithIdentifier:(unsigned long long)arg2;
- (void)setExpectedProgressTarget:(unsigned long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;
- (void)setBytesPerSecondLimit:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;
- (void)setLoadingPoolPriority:(double)arg1 forTaskWithIdentifier:(unsigned long long)arg2;
- (void)setPriority:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;
- (void)setDescription:(NSString *)arg1 forTask:(unsigned long long)arg2;
- (void)resumeTaskWithIdentifier:(unsigned long long)arg1 withProperties:(NSDictionary *)arg2;
- (void)suspendTaskWithIdentifier:(unsigned long long)arg1;
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1 byProducingResumeData:(void (^)(NSData *))arg2;
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1;
- (void)uploadTaskWithResumableUploadState:(__NSCFResumableUploadState *)arg1 request:(NSURLRequest *)arg2 originalRequest:(NSURLRequest *)arg3 fromFile:(NSFileHandle *)arg4 sandboxExtensionData:(NSData *)arg5 identifier:(unsigned long long)arg6 uniqueIdentifier:(NSUUID *)arg7 potentialCredentials:(NSDictionary *)arg8 reply:(void (^)(_Bool))arg9;
- (void)downloadTaskWithResumeData:(NSData *)arg1 identifier:(unsigned long long)arg2 uniqueIdentifier:(NSUUID *)arg3 reply:(void (^)(_Bool))arg4;
- (void)dataTaskWithRequest:(NSURLRequest *)arg1 originalRequest:(NSURLRequest *)arg2 identifier:(unsigned long long)arg3 uniqueIdentifier:(NSUUID *)arg4 reply:(void (^)(_Bool))arg5;
- (void)uploadTaskWithRequest:(NSURLRequest *)arg1 originalRequest:(NSURLRequest *)arg2 fromFile:(NSFileHandle *)arg3 sandboxExtensionData:(NSData *)arg4 identifier:(unsigned long long)arg5 uniqueIdentifier:(NSUUID *)arg6 potentialCredentials:(NSDictionary *)arg7 reply:(void (^)(_Bool))arg8;
- (void)downloadTaskWithRequest:(NSURLRequest *)arg1 originalRequest:(NSURLRequest *)arg2 downloadFilePath:(NSString *)arg3 identifier:(unsigned long long)arg4 uniqueIdentifier:(NSUUID *)arg5 reply:(void (^)(_Bool))arg6;
- (void)pingForXPCObjectValidityWithReply:(void (^)(void))arg1;
@end

