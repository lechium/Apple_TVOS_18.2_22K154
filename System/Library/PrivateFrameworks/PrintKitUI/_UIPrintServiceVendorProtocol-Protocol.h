//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrintKitUI/NSObject-Protocol.h>

@class NSDictionary, NSHTTPURLResponse, NSURLRequest;

@protocol _UIPrintServiceVendorProtocol <NSObject>
- (void)_apOp:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)_authenticatedRequestForRequest:(NSURLRequest *)arg1 challengeResponse:(NSHTTPURLResponse *)arg2 reply:(void (^)(NSURLRequest *))arg3;
- (void)_gatherPrintersForPrintInfo:(NSDictionary *)arg1 reply:(void (^)(NSArray *))arg2;
@end

