//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSDate, NSString;

@interface FSFStreamQuery : NSObject
{
    MISSING_TYPE *startDate;	// 134393 = 0x20cf9
    MISSING_TYPE *endDate;	// 9408 = 0x24c0
    MISSING_TYPE *interactionIds;	// 0 = 0x0
    MISSING_TYPE *taskId;	// 2147484672 = 0x80000400
}

- (void).cxx_destruct;	// IMP=0x000000000001322a
- (id)init;	// IMP=0x00000000000131f5
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, copy) NSArray *interactionIds;
@property(nonatomic, copy) NSDate *endDate;
@property(nonatomic, copy) NSDate *startDate;

@end

