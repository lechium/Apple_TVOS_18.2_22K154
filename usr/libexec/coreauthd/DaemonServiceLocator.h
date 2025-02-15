//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol LACDarwinNotificationCenter, LACEnvironmentService, LACServiceLocator, LACSharedModeService, LACUserInterfaceController;

@interface DaemonServiceLocator : NSObject
{
    id <LACServiceLocator> _locator;	// 8 = 0x8
    NSMutableArray *_notificationObservers;	// 16 = 0x10
    id <LACDarwinNotificationCenter> _darwinNotificationCenter;	// 24 = 0x18
    id <LACEnvironmentService> _environment;	// 32 = 0x20
    id <LACSharedModeService> _sharedMode;	// 40 = 0x28
    id <LACUserInterfaceController> _uiController;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x002000000000fe34
- (void).cxx_destruct;	// IMP=0x0020000000010304
@property(readonly, nonatomic) id <LACUserInterfaceController> uiController; // @synthesize uiController=_uiController;
@property(readonly, nonatomic) id <LACSharedModeService> sharedMode; // @synthesize sharedMode=_sharedMode;
@property(readonly, nonatomic) id <LACEnvironmentService> environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) id <LACDarwinNotificationCenter> darwinNotificationCenter; // @synthesize darwinNotificationCenter=_darwinNotificationCenter;
- (id)serviceWithIdentifier:(id)arg1;	// IMP=0x00100000000102c6
- (void)registerService:(id)arg1 identifier:(id)arg2;	// IMP=0x00100000000102b0
- (void)_startEnvironment;	// IMP=0x001000000001029a
- (void)_startNotificationServices;	// IMP=0x0010000000010156
- (void)startServices;	// IMP=0x0010000000010128
- (id)init;	// IMP=0x001000000000fe89

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

