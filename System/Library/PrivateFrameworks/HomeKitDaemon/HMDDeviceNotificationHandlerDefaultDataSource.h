//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDHome, NSString;

__attribute__((visibility("hidden")))
@interface HMDDeviceNotificationHandlerDefaultDataSource : NSObject
{
    HMDHome *_home;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000341fa3
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
- (id)timerWithType:(unsigned char)arg1;	// IMP=0x0000000000341ecf
- (id)initWithHome:(id)arg1;	// IMP=0x0000000000341e6b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

