//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSURLSessionDelegate-Protocol.h"

@class NSString, NSURLResponse, NSURLSession, NSURLSessionTask;

@protocol NSURLSessionDelegate_Internal <NSURLSessionDelegate>

@optional
- (void)_URLSession:(NSURLSession *)arg1 openFileAtPath:(NSString *)arg2 mode:(int)arg3 completionHandler:(void (^)(int))arg4;
- (void)_URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 getAuthHeadersForResponse:(NSURLResponse *)arg3 completionHandler:(void (^)(_Bool, NSDictionary *, NSURLRequest *))arg4;
@end

