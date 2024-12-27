//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNQuickAction.h"

@class CNContactAction, NSString;
@protocol CNQuickContactActionDelegate;

__attribute__((visibility("hidden")))
@interface CNQuickContactAction : CNQuickAction
{
    CNContactAction *_contactAction;	// 96 = 0x60
    id <CNQuickContactActionDelegate> _delegate;	// 104 = 0x68
    CDUnknownBlockType _completionBlock;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000018887
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) __weak id <CNQuickContactActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CNContactAction *contactAction; // @synthesize contactAction=_contactAction;
- (void)actionWasCanceled:(id)arg1;	// IMP=0x000000000001876e
- (void)actionDidFinish:(id)arg1;	// IMP=0x0000000000018696
- (id)storeForAction:(id)arg1;	// IMP=0x000000000001868e
- (void)action:(id)arg1 pushViewController:(id)arg2 sender:(id)arg3;	// IMP=0x0000000000018688
- (void)action:(id)arg1 prepareChildContactViewController:(id)arg2 sender:(id)arg3;	// IMP=0x0000000000018682
- (void)action:(id)arg1 dismissViewController:(id)arg2 sender:(id)arg3;	// IMP=0x0000000000018666
- (void)action:(id)arg1 presentViewController:(id)arg2 sender:(id)arg3;	// IMP=0x00000000000185aa
- (void)actionDidUpdate:(id)arg1;	// IMP=0x000000000001850d
- (void)performWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001841b
- (id)initWithContactAction:(id)arg1;	// IMP=0x000000000001839d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

