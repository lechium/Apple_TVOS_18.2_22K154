//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <InstallCoordination/NSObject-Protocol.h>
#import <InstallCoordination/NSSecureCoding-Protocol.h>
#import <InstallCoordination/STExtractor-Protocol.h>

@class NSData, NSError, NSString;
@protocol SZExtractorDelegate;

@protocol SZExtractor <NSObject, NSSecureCoding, STExtractor>
@property(nonatomic) __weak id <SZExtractorDelegate> extractorDelegate;
- (void)terminateStreamWithError:(NSError *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)finishStreamWithCompletionBlock:(void (^)(NSError *))arg1;
- (void)suspendStreamWithCompletionBlock:(void (^)(unsigned long long, NSError *))arg1;
- (void)supplyBytes:(NSData *)arg1 withCompletionBlock:(void (^)(NSError *, _Bool))arg2;
- (void)prepareForExtractionToPath:(NSString *)arg1 completionBlock:(void (^)(unsigned long long, NSError *))arg2;
- (void)prepareForExtraction:(void (^)(unsigned long long, NSError *))arg1;

@optional
@property(readonly, nonatomic) _Bool doesConsumeExtractedData;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@end

