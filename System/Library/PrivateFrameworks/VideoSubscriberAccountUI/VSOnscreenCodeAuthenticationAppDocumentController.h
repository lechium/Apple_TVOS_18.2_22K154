//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IKViewElement, NSString;

__attribute__((visibility("hidden")))
@interface VSOnscreenCodeAuthenticationAppDocumentController
{
    IKViewElement *_buttonLockupViewElement;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001bd74
@property(retain, nonatomic) IKViewElement *buttonLockupViewElement; // @synthesize buttonLockupViewElement=_buttonLockupViewElement;
- (_Bool)_updateViewModel:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001bc02
- (id)_newViewModel;	// IMP=0x000000000001bbce
- (void)onscreenCodeViewModelButtonLockupPressed;	// IMP=0x000000000001bb6e
- (_Bool)_updateOnscreenCodeViewModel:(id)arg1 withTemplate:(id)arg2;	// IMP=0x000000000001b399
- (_Bool)_updateOnscreenCodeViewModel:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001b2a4
- (id)_onscreenCodeViewModelWithViewModel:(id)arg1;	// IMP=0x000000000001b1e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

