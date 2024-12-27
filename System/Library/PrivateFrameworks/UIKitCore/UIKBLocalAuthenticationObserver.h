//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;
@protocol UIKeyInput;

__attribute__((visibility("hidden")))
@interface UIKBLocalAuthenticationObserver : NSObject
{
    _Bool _isListeningForLAUINotifications;	// 8 = 0x8
    _Bool _localAuthenticationPresented;	// 9 = 0x9
    _Bool _isRestoringPreLocalAuthenticationDelegate;	// 10 = 0xa
    _Bool _inputUIResuming;	// 11 = 0xb
    _Bool _isRestoringInputViews;	// 12 = 0xc
    id <UIKeyInput> _delegateResignedDuringLocalAuthentication;	// 16 = 0x10
    NSUUID *_uuidOfDelegateResignedDuringLocalAuthentication;	// 24 = 0x18
    NSUUID *_uuidOfSessionEndedDuringLocalAuthentication;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000017c344c
@property(nonatomic) _Bool isRestoringInputViews; // @synthesize isRestoringInputViews=_isRestoringInputViews;
@property(nonatomic) _Bool inputUIResuming; // @synthesize inputUIResuming=_inputUIResuming;
@property(nonatomic) _Bool isRestoringPreLocalAuthenticationDelegate; // @synthesize isRestoringPreLocalAuthenticationDelegate=_isRestoringPreLocalAuthenticationDelegate;
@property(retain, nonatomic) NSUUID *uuidOfSessionEndedDuringLocalAuthentication; // @synthesize uuidOfSessionEndedDuringLocalAuthentication=_uuidOfSessionEndedDuringLocalAuthentication;
@property(retain, nonatomic) NSUUID *uuidOfDelegateResignedDuringLocalAuthentication; // @synthesize uuidOfDelegateResignedDuringLocalAuthentication=_uuidOfDelegateResignedDuringLocalAuthentication;
@property(nonatomic) __weak id <UIKeyInput> delegateResignedDuringLocalAuthentication; // @synthesize delegateResignedDuringLocalAuthentication=_delegateResignedDuringLocalAuthentication;
@property _Bool localAuthenticationPresented; // @synthesize localAuthenticationPresented=_localAuthenticationPresented;
- (void)_stopListeningForLAUINotifications;	// IMP=0x00000000017c339f
- (void)_startListeningForLAUINotificationsIfNeeded;	// IMP=0x00000000017c3399
- (_Bool)localAuthenticationPresentedOrBeingRecoveredFrom;	// IMP=0x00000000017c3338
- (void)_applicationResumed:(id)arg1;	// IMP=0x00000000017c32cc
- (void)_localAuthenticationDismissed;	// IMP=0x00000000017c313d
- (void)_localAuthenticationPresented;	// IMP=0x00000000017c3014
- (_Bool)_applicationStateIsActive;	// IMP=0x00000000017c2fa9
- (void)inputDelegateWillTeardown:(id)arg1 sessionUUID:(id)arg2;	// IMP=0x00000000017c2ef2
- (void)didTryToBecomeFirstResponder:(id)arg1;	// IMP=0x00000000017c2de8
- (void)willTryToBecomeFirstResponder:(id)arg1;	// IMP=0x00000000017c2cdb
- (id)sessionIDForInputDelegate:(id)arg1;	// IMP=0x00000000017c2c46
- (void)dealloc;	// IMP=0x00000000017c2c08
- (id)init;	// IMP=0x00000000017c2b12

@end

