//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UIViewController;

__attribute__((visibility("hidden")))
@interface _TtC12PhotosUICore28LegacyPersonBannerModelProxy : NSObject
{
    MISSING_TYPE *model;	// 8 = 0x8
    MISSING_TYPE *canPushViewController;	// 24 = 0x18
    MISSING_TYPE *canPresentPopovers;	// 25 = 0x19
}

- (void).cxx_destruct;	// IMP=0x00000000003e42e0
- (id)init;	// IMP=0x00000000003e4280
- (void)dismissAlertWithToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003e4230
- (id)presentAlertWithConfigurationHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003e41e0
- (_Bool)popToViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000003e4190
- (_Bool)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000003e4140
@property(nonatomic, readonly) _Bool canPresentPopovers; // @synthesize canPresentPopovers;
@property(nonatomic, readonly) _Bool canPushViewController; // @synthesize canPushViewController;
@property(nonatomic, readonly) UIViewController *presentingViewController;
- (void)dismissViewController:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003e4060
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003e3f50
- (id)presentationEnvironmentForPhotosBannerProvider:(id)arg1;	// IMP=0x00000000003e3f40

@end

