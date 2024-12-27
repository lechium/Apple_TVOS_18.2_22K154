//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISystemShellApplication.h>

@class PREIdleSleepManager;

@interface PREApplication : UISystemShellApplication
{
    PREIdleSleepManager *_idleSleepManager;	// 8 = 0x8
}

+ (double)systemIdleSleepInterval;	// IMP=0x0040000000004783
+ (_Bool)registerAsSystemApp;	// IMP=0x001000000000477b
+ (_Bool)shouldCheckInWithBackboard;	// IMP=0x0010000000004773
+ (id)_newApplicationInitializationContext;	// IMP=0x00100000000044f5
+ (id)sharedApplication;	// IMP=0x00100000000043b4
- (void).cxx_destruct;	// IMP=0x00200000000047c2
@property(retain, nonatomic) PREIdleSleepManager *idleSleepManager; // @synthesize idleSleepManager=_idleSleepManager;
- (void)applicationDidOrderOutContext:(id)arg1 screen:(id)arg2;	// IMP=0x0010000000004797
- (void)applicationWillOrderInContext:(id)arg1 windowLevel:(float)arg2 screen:(id)arg3;	// IMP=0x0010000000004791
- (void)sendEvent:(id)arg1;	// IMP=0x00100000000046cc
- (_Bool)_isSpringBoard;	// IMP=0x00100000000046c4
- (_Bool)disablesFrontBoardImplicitWindowScenes;	// IMP=0x00100000000046bc
- (void)_createStatusBarWithRequestedStyle:(long long)arg1 orientation:(long long)arg2 hidden:(_Bool)arg3;	// IMP=0x00100000000046b6
- (id)init;	// IMP=0x00100000000043cd

@end

