//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSError, NSString;

@protocol MDSearchQueryResultProcessor
- (void)didFinishWithError:(NSError *)arg1;
- (void)didReturnResults:(long long)arg1 resultsData:(NSData *)arg2 oidData:(NSData *)arg3 protectionClass:(NSString *)arg4 completionHandler:(void (^)(void))arg5;
@end

