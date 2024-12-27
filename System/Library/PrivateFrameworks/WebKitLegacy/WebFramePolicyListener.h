//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebFramePolicyListener : NSObject
{
    struct RefPtr<WebCore::LocalFrame, WTF::RawPtrTraits<WebCore::LocalFrame>, WTF::DefaultRefDerefTraits<WebCore::LocalFrame>> _frame;	// 8 = 0x8
    struct CompletionHandler<void (WebCore::PolicyAction)> _policyFunction;	// 16 = 0x10
    unsigned char _defaultPolicy;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x0010000000089240
- (id).cxx_construct;	// IMP=0x00000000000897e0
- (void).cxx_destruct;	// IMP=0x0000000000089720
- (void)continue;	// IMP=0x0000000000089700
- (void)use;	// IMP=0x00000000000896e0
- (void)download;	// IMP=0x00000000000896c0
- (void)ignore;	// IMP=0x00000000000896a0
- (void)receivedPolicyDecision:(unsigned char)arg1;	// IMP=0x00000000000895c0
- (void)dealloc;	// IMP=0x0000000000089410
- (void)invalidate;	// IMP=0x0000000000089340
- (id)initWithFrame:(NakedPtr_9be60511)arg1 policyFunction:(void *)arg2 defaultPolicy:(unsigned char)arg3;	// IMP=0x0000000000089250

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

