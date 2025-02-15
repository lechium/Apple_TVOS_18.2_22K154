//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol _UIForcedOrientationTransactionHandler;

__attribute__((visibility("hidden")))
@interface _UIForcedOrientationTransactionToken : NSObject
{
    _Bool _disablesInterfaceAutorotation;	// 8 = 0x8
    long long _originalInterfaceOrientation;	// 16 = 0x10
    unsigned long long _state;	// 24 = 0x18
    NSString *_transactionReason;	// 32 = 0x20
    CDUnknownBlockType _commitCompletionBlock;	// 40 = 0x28
    id <_UIForcedOrientationTransactionHandler> _transactionHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000d06918
@property(readonly, nonatomic) _Bool disablesInterfaceAutorotation; // @synthesize disablesInterfaceAutorotation=_disablesInterfaceAutorotation;
@property(nonatomic) __weak id <_UIForcedOrientationTransactionHandler> transactionHandler; // @synthesize transactionHandler=_transactionHandler;
@property(copy, nonatomic) CDUnknownBlockType commitCompletionBlock; // @synthesize commitCompletionBlock=_commitCompletionBlock;
@property(readonly, nonatomic) NSString *transactionReason; // @synthesize transactionReason=_transactionReason;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) long long originalInterfaceOrientation; // @synthesize originalInterfaceOrientation=_originalInterfaceOrientation;
- (id)_orientationDebugDescription;	// IMP=0x0000000000d0689d
- (id)_orientationDebugDescriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000d0688b
- (id)_orientationDebugDescriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000d06879
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000d065e2
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000d06592
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000d06542
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000d06496
- (id)succinctDescription;	// IMP=0x0000000000d06446
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000d063e2
- (void)cancel;	// IMP=0x0000000000d062e1
- (void)didCommitOrientation;	// IMP=0x0000000000d061d5
- (void)commitAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000d05ff0
- (id)initWithOriginalOrientation:(long long)arg1 handler:(id)arg2 reason:(id)arg3 disablingInterfaceAutorotation:(_Bool)arg4;	// IMP=0x0000000000d05e9e
- (id)initWithOriginalOrientation:(long long)arg1 handler:(id)arg2 reason:(id)arg3;	// IMP=0x0000000000d05e86

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

