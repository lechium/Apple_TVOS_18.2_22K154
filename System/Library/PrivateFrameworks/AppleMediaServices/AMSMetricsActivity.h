//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol OS_nw_activity;

@interface AMSMetricsActivity : NSObject
{
    MISSING_TYPE *activity;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000426d9
- (id)init;	// IMP=0x00000000000426a6
- (void)completeAfter:(id)arg1;	// IMP=0x000000000004261d
- (void)activate;	// IMP=0x000000000004135a
- (id)initWithLabel:(long long)arg1 parent:(id)arg2;	// IMP=0x0000000000041313
- (id)initWithLabel:(long long)arg1;	// IMP=0x0000000000040f4c
@property(nonatomic, readonly) id <OS_nw_activity> nwActivity;

@end

