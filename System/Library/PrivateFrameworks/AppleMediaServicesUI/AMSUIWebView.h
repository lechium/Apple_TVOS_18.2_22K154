//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSUICommonView.h"

@class AMSBinaryPromise, AMSUIWebClientContext, NSArray, NSString, WKWebView;

__attribute__((visibility("hidden")))
@interface AMSUIWebView : AMSUICommonView
{
    _Bool _contentLoaded;	// 8 = 0x8
    WKWebView *_underlyingWebView;	// 16 = 0x10
    NSArray *_baseScripts;	// 24 = 0x18
    AMSBinaryPromise *_contentRulesPromise;	// 32 = 0x20
    AMSUIWebClientContext *_context;	// 40 = 0x28
    AMSBinaryPromise *_currentLoadPromise;	// 48 = 0x30
}

+ (id)_getSetCookiesForResponse:(id)arg1;	// IMP=0x00100000000bb1ce
- (void).cxx_destruct;	// IMP=0x00000000000bd913
@property(retain, nonatomic) AMSBinaryPromise *currentLoadPromise; // @synthesize currentLoadPromise=_currentLoadPromise;
@property(nonatomic) __weak AMSUIWebClientContext *context; // @synthesize context=_context;
@property(retain, nonatomic) AMSBinaryPromise *contentRulesPromise; // @synthesize contentRulesPromise=_contentRulesPromise;
@property(retain, nonatomic) NSArray *baseScripts; // @synthesize baseScripts=_baseScripts;
@property(readonly, nonatomic) WKWebView *underlyingWebView; // @synthesize underlyingWebView=_underlyingWebView;
@property(readonly, nonatomic) _Bool contentLoaded; // @synthesize contentLoaded=_contentLoaded;
- (id)_setupContentRulesForWebView:(id)arg1 context:(id)arg2;	// IMP=0x00000000000bca11
- (void)_receiveJSObject:(id)arg1 logKey:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000bbf48
- (id)_prepareWithURL:(id)arg1 loadBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bbb45
- (id)_parseRequestError:(id)arg1 logKey:(id)arg2;	// IMP=0x00000000000bb711
- (void)_openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bb527
- (id)_jsonLogStringWithDictionary:(id)arg1;	// IMP=0x00000000000bb40e
- (void)_finishedLoading;	// IMP=0x00000000000bb169
- (void)_addScriptsToContentController:(id)arg1 additionalScripts:(id)arg2;	// IMP=0x00000000000ba9f0
- (void)_webView:(id)arg1 contentRuleListWithIdentifier:(id)arg2 performedAction:(id)arg3 forURL:(id)arg4;	// IMP=0x00000000000ba87c
- (void)_webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 userInfo:(id)arg4;	// IMP=0x00000000000ba728
- (void)_webView:(id)arg1 navigation:(id)arg2 didFailProvisionalLoadInSubframe:(id)arg3 withError:(id)arg4;	// IMP=0x00000000000ba5b6
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x00000000000ba3af
- (void)_webView:(id)arg1 navigationDidFinishDocumentLoad:(id)arg2;	// IMP=0x00000000000ba259
- (void)_webView:(id)arg1 navigation:(id)arg2 didSameDocumentNavigation:(long long)arg3;	// IMP=0x00000000000ba103
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;	// IMP=0x00000000000b9fa7
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;	// IMP=0x00000000000b9e51
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;	// IMP=0x00000000000b9c87
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b9609
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b8ec6
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b8db8
- (void)updateUserScriptsWithScripts:(id)arg1;	// IMP=0x00000000000b8748
- (void)takeSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b8543
- (id)sendJSRequest:(id)arg1;	// IMP=0x00000000000b77cc
- (id)loadRequest:(id)arg1;	// IMP=0x00000000000b74eb
- (id)loadRequest:(id)arg1 response:(id)arg2 responseData:(id)arg3;	// IMP=0x00000000000b6f87
@property(nonatomic) double topInset;
@property(nonatomic) double bottomInset;
- (void)dealloc;	// IMP=0x00000000000b6efe
- (id)initWithContext:(id)arg1 additionalScripts:(id)arg2;	// IMP=0x00000000000b68cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

