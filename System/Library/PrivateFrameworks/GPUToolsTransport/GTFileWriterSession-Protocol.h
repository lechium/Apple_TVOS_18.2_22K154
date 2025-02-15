//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GPUToolsTransport/NSObject-Protocol.h>

@class GTFileTransferOptions, NSArray, NSData, NSURL;
@protocol GTFileWriterSession;

@protocol GTFileWriterSession <NSObject>
+ (id <GTFileWriterSession>)sessionWithFileEntries:(NSArray *)arg1 relativeToURL:(NSURL *)arg2 options:(GTFileTransferOptions *)arg3 error:(id *)arg4;
- (_Bool)finish:(id *)arg1;
- (void)writeFileData:(NSData *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (id)initWithFileEntries:(NSArray *)arg1 relativeToURL:(NSURL *)arg2 options:(GTFileTransferOptions *)arg3 error:(id *)arg4;
- (id)init;
@end

