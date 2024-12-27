//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _WKAttributedStringNavigationDelegate : NSObject
{
    CDUnknownBlockType _webContentProcessDidTerminate;	// 8 = 0x8
    CDUnknownBlockType _decidePolicyForNavigationAction;	// 16 = 0x10
    CDUnknownBlockType _didFailProvisionalNavigation;	// 24 = 0x18
    CDUnknownBlockType _didFailNavigation;	// 32 = 0x20
    CDUnknownBlockType _didFinishNavigation;	// 40 = 0x28
}

@property(copy, nonatomic) CDUnknownBlockType didFinishNavigation; // @synthesize didFinishNavigation=_didFinishNavigation;
@property(copy, nonatomic) CDUnknownBlockType didFailNavigation; // @synthesize didFailNavigation=_didFailNavigation;
@property(copy, nonatomic) CDUnknownBlockType didFailProvisionalNavigation; // @synthesize didFailProvisionalNavigation=_didFailProvisionalNavigation;
@property(copy, nonatomic) CDUnknownBlockType decidePolicyForNavigationAction; // @synthesize decidePolicyForNavigationAction=_decidePolicyForNavigationAction;
@property(copy, nonatomic) CDUnknownBlockType webContentProcessDidTerminate; // @synthesize webContentProcessDidTerminate=_webContentProcessDidTerminate;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;	// IMP=0x000000000025fb69
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x000000000025fb4a
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x000000000025fb2b
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000025fb02
- (void)webViewWebContentProcessDidTerminate:(id)arg1;	// IMP=0x000000000025fae9
- (void)dealloc;	// IMP=0x000000000025fa6f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

