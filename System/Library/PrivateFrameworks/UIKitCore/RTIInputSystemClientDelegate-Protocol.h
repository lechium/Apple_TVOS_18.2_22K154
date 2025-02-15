//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString, RTIDocumentRequest, RTITextOperations;

@protocol RTIInputSystemClientDelegate <NSObject>

@optional
- (void)connectionInterrupted:(NSString *)arg1;
- (void)connectionInvalidated:(NSString *)arg1;
- (void)performDocumentRequest:(RTIDocumentRequest *)arg1 completion:(void (^)(RTIDocumentState *))arg2;
- (void)defaultDocumentRequestDidChange:(RTIDocumentRequest *)arg1;
- (void)performTextOperations:(RTITextOperations *)arg1 resultHandler:(void (^)(unsigned long long))arg2;
- (void)performTextOperations:(RTITextOperations *)arg1;
@end

