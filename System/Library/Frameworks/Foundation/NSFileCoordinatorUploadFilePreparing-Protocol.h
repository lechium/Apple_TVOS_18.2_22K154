//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSProgress, NSURL;

@protocol NSFileCoordinatorUploadFilePreparing
- (NSProgress *)prepareFileForUploadingAtURL:(NSURL *)arg1 originalURLExtension:(NSData *)arg2 inDirectory:(NSURL *)arg3 destinationSandboxExtension:(NSData *)arg4 completionHandler:(void (^)(NSURL *, NSError *))arg5;
@end

