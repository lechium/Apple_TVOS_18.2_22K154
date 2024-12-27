//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKit/NSObject-Protocol.h>

@class NSString, NSURL, WKSnapshotConfiguration, WKWebExtensionContext, WKWebExtensionTabConfiguration, WKWebView;
@protocol WKWebExtensionTab, WKWebExtensionWindow;

@protocol WKWebExtensionTab <NSObject>

@optional
- (_Bool)shouldGrantPermissionsOnUserGestureForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (void)closeForWebExtensionContext:(WKWebExtensionContext *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)duplicateUsingConfiguration:(WKWebExtensionTabConfiguration *)arg1 forWebExtensionContext:(WKWebExtensionContext *)arg2 completionHandler:(void (^)(id <WKWebExtensionTab>, NSError *))arg3;
- (void)setSelected:(_Bool)arg1 forWebExtensionContext:(WKWebExtensionContext *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (_Bool)isSelectedForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (void)activateForWebExtensionContext:(WKWebExtensionContext *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)goForwardForWebExtensionContext:(WKWebExtensionContext *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)goBackForWebExtensionContext:(WKWebExtensionContext *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)reloadFromOrigin:(_Bool)arg1 forWebExtensionContext:(WKWebExtensionContext *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)loadURL:(NSURL *)arg1 forWebExtensionContext:(WKWebExtensionContext *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)takeSnapshotUsingConfiguration:(WKSnapshotConfiguration *)arg1 forWebExtensionContext:(WKWebExtensionContext *)arg2 completionHandler:(void (^)(UIImage *, NSError *))arg3;
- (void)detectWebpageLocaleForWebExtensionContext:(WKWebExtensionContext *)arg1 completionHandler:(void (^)(NSLocale *, NSError *))arg2;
- (_Bool)isLoadingCompleteForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (NSURL *)pendingURLForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (NSURL *)urlForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (void)setZoomFactor:(double)arg1 forWebExtensionContext:(WKWebExtensionContext *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (double)zoomFactorForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (struct CGSize)sizeForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (void)setMuted:(_Bool)arg1 forWebExtensionContext:(WKWebExtensionContext *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (_Bool)isMutedForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (_Bool)isPlayingAudioForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (void)setReaderModeActive:(_Bool)arg1 forWebExtensionContext:(WKWebExtensionContext *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (_Bool)isReaderModeActiveForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (_Bool)isReaderModeAvailableForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (void)setPinned:(_Bool)arg1 forWebExtensionContext:(WKWebExtensionContext *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (_Bool)isPinnedForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (NSString *)titleForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (WKWebView *)webViewForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (void)setParentTab:(id <WKWebExtensionTab>)arg1 forWebExtensionContext:(WKWebExtensionContext *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (id <WKWebExtensionTab>)parentTabForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (unsigned long long)indexInWindowForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (id <WKWebExtensionWindow>)windowForWebExtensionContext:(WKWebExtensionContext *)arg1;
@end

