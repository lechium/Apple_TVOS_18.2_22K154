//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HPSAccessorySettingService, NSString;

__attribute__((visibility("hidden")))
@interface HPAccessorySettingServiceMediator : NSObject
{
    HPSAccessorySettingService *_settingsInterface;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000ce1a
@property(readonly, nonatomic) __weak HPSAccessorySettingService *settingsInterface; // @synthesize settingsInterface=_settingsInterface;
- (void)didUpdateHH2State:(_Bool)arg1;	// IMP=0x000000000000cc7d
- (void)notifyDidUpdateSetting:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x000000000000cbf2
- (id)initWithInterface:(id)arg1;	// IMP=0x000000000000cb8e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

