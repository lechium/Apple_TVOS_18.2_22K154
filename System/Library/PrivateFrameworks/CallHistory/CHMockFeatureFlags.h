//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CHMockFeatureFlags : NSObject
{
    _Bool _mockKeepCallsEnabled;	// 8 = 0x8
}

@property(nonatomic, getter=keepCallsEnabled) _Bool mockKeepCallsEnabled; // @synthesize mockKeepCallsEnabled=_mockKeepCallsEnabled;
@property(readonly, nonatomic) _Bool keepCallsEnabled; // @dynamic keepCallsEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

