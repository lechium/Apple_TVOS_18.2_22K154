//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface PFScheduledOperationScheduler : NSObject
{
    MISSING_TYPE *schedule;	// 8 = 0x8
    MISSING_TYPE *storage;	// 16 = 0x10
}

+ (id)weeklyScheduler;	// IMP=0x0040000000158b50
- (void).cxx_destruct;	// IMP=0x0000000000158fc0
- (id)init;	// IMP=0x0000000000158f70
- (void)evaluateOperationWithIdentifier:(id)arg1 evaluationHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000158ec0
- (id)initWithSchedule:(id)arg1 scheduleStorage:(id)arg2;	// IMP=0x0000000000158c20

@end

