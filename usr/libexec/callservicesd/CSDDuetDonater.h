//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CSDDuetDonater : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *maxDuration;	// 16 = 0x10
    MISSING_TYPE *silenceUnknownCallersEnabledObserver;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0040000000260d99
- (id)init;	// IMP=0x0010000000261182
- (void)reportingController:(id)arg1 statusChangedForCall:(id)arg2 totalCallCount:(unsigned long long)arg3;	// IMP=0x00100000002610fc
- (void)reportingController:(id)arg1 addedActivatedLink:(id)arg2;	// IMP=0x0010000000260f1b
- (void)dealloc;	// IMP=0x0010000000260d7c
- (id)initWithQueue:(id)arg1;	// IMP=0x0010000000260cf4

@end

