//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMMDateProvider, NSString;

__attribute__((visibility("hidden")))
@interface HMDLogEventWeekBasedFilter : NSObject
{
    HMMDateProvider *_dateProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000a682b7
@property(readonly, nonatomic) HMMDateProvider *dateProvider; // @synthesize dateProvider=_dateProvider;
- (_Bool)isEventInSample:(id)arg1;	// IMP=0x0000000000a6816b
- (unsigned long long)resultHashWithEvent:(id)arg1;	// IMP=0x0000000000a67f97
- (id)initWithDateProvider:(id)arg1;	// IMP=0x0000000000a67f2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

