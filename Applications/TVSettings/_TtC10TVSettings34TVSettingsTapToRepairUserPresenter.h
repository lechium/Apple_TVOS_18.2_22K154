//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, TVSettingsTapToRepairUserPresenterConfiguration, TVSettingsUser;
@protocol _TtP10TVSettings42TVSettingsTapToRepairUserPresenterDelegate_;

@interface _TtC10TVSettings34TVSettingsTapToRepairUserPresenter : NSObject
{
    MISSING_TYPE *user;	// 8 = 0x8
    MISSING_TYPE *;	// 16 = 0x10
    MISSING_TYPE *instructionsViewController;	// 24 = 0x18
    MISSING_TYPE *presentingViewController;	// 32 = 0x20
    MISSING_TYPE *configuration;	// 40 = 0x28
    MISSING_TYPE *delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000011b540
- (id)init;	// IMP=0x001000000011c410
- (void)stopFlow;	// IMP=0x001000000011c0c0
- (void)startFlowWithPresentingViewController:(id)arg1;	// IMP=0x001000000011c070
- (void)dealloc;	// IMP=0x001000000011b4d0
- (id)initWithUser:(id)arg1 configuration:(id)arg2;	// IMP=0x001000000011b430
@property(nonatomic) __weak id <_TtP10TVSettings42TVSettingsTapToRepairUserPresenterDelegate_> delegate; // @synthesize delegate;
@property(nonatomic, readonly) TVSettingsTapToRepairUserPresenterConfiguration *configuration; // @synthesize configuration;
@property(nonatomic, readonly) TVSettingsUser *user; // @synthesize user;
- (void)proxRepairManager:(id)arg1 didFinishWithError:(id)arg2;	// IMP=0x001000000011c550
- (void)proxRepairManagerUserDidCancel:(id)arg1;	// IMP=0x001000000011c500
- (void)proxRepairManagerDidFinish:(id)arg1;	// IMP=0x001000000011c4b0
- (void)proxRepairManagerDidStart:(id)arg1;	// IMP=0x001000000011c460

@end

