//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CSSiriAssertionMonitor;

@protocol CSSiriAssertionMonitorDelegate <NSObject>

@optional
- (void)CSSiriAssertionMonitor:(CSSiriAssertionMonitor *)arg1 didReceiveBacklightOnEnabled:(_Bool)arg2 atHostTime:(unsigned long long)arg3;
- (void)CSSiriAssertionMonitor:(CSSiriAssertionMonitor *)arg1 didReceiveEnabled:(_Bool)arg2;
@end

