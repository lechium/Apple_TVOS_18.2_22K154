//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKit/NSObject-Protocol.h>

@class NSString, NSURL, WKWebView, _WKInspectorExtension;

@protocol _WKInspectorExtensionHost <NSObject>

@optional
@property(readonly, nonatomic) WKWebView *extensionHostWebView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"WKWebView",?,R,N

- (void)navigateExtensionTabWithIdentifier:(NSString *)arg1 toURL:(NSURL *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)showExtensionTabWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)unregisterExtension:(_WKInspectorExtension *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)registerExtensionWithID:(NSString *)arg1 extensionBundleIdentifier:(NSString *)arg2 displayName:(NSString *)arg3 completionHandler:(void (^)(NSError *, _WKInspectorExtension *))arg4;
@end

