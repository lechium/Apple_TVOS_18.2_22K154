//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUTWeakReference, NSDate;

@interface IMDInconsistency : NSObject
{
    CUTWeakReference *_contextWeakReference;	// 8 = 0x8
    NSDate *_firstOccurrence;	// 16 = 0x10
    unsigned long long _count;	// 24 = 0x18
}

@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly) NSDate *firstOccurrence; // @synthesize firstOccurrence=_firstOccurrence;
- (_Bool)shouldJettison:(id *)arg1;	// IMP=0x0000000000140644
@property(nonatomic) __weak id context;
- (id)init;	// IMP=0x0000000000140584

@end

