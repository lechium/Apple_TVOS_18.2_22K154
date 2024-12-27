//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Blackbeard/NSObject-Protocol.h>

@class AMSAuthenticateRequest, AMSDialogRequest, AMSPurchaseResult, AMSUIWebViewController, NSDictionary, NSError, NSMutableURLRequest;

@protocol AMSUIWebDelegate <NSObject>

@optional
- (void)webViewController:(AMSUIWebViewController *)arg1 didFinishPurchaseWithResult:(AMSPurchaseResult *)arg2 error:(NSError *)arg3;
- (void)webViewController:(AMSUIWebViewController *)arg1 didEncodeNetworkRequest:(NSMutableURLRequest *)arg2;
- (void)webViewController:(AMSUIWebViewController *)arg1 didResolveWithResult:(NSDictionary *)arg2 error:(NSError *)arg3 completion:(void (^)(id, NSError *))arg4;
- (void)webViewController:(AMSUIWebViewController *)arg1 handleDialogRequest:(AMSDialogRequest *)arg2 completion:(void (^)(AMSDialogResult *, NSError *))arg3;
- (_Bool)webViewController:(AMSUIWebViewController *)arg1 handleDelegateAction:(NSDictionary *)arg2 completion:(void (^)(id, NSError *))arg3;
- (void)webViewController:(AMSUIWebViewController *)arg1 handleAuthenticateRequest:(AMSAuthenticateRequest *)arg2 completion:(void (^)(AMSAuthenticateResult *, NSError *))arg3;
@end

