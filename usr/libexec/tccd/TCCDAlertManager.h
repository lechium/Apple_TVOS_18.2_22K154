//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface TCCDAlertManager : NSObject
{
    NSMutableArray *_alerts;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_displayQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000004b5dd
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *displayQueue; // @synthesize displayQueue=_displayQueue;
@property(readonly, nonatomic) NSMutableArray *alerts; // @synthesize alerts=_alerts;
- (void)displayAlertForCondition:(long long)arg1 withCustomUserInfo:(id)arg2;	// IMP=0x001000000004b339
- (id)initWithAlerts:(id)arg1;	// IMP=0x001000000004b2a5

@end

