//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class STAlarm;

@interface ADAlarmQuery : NSObject
{
    STAlarm *_criteria;	// 8 = 0x8
    long long _searchOptions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001aa6c5
- (long long)searchOptions;	// IMP=0x00100000001aa6bb
- (id)criteria;	// IMP=0x00100000001aa6ad
- (id)initWithCriteria:(id)arg1 searchOptions:(long long)arg2;	// IMP=0x00100000001aa62f
- (_Bool)matchesAlarm:(id)arg1;	// IMP=0x00100000001aa6d5

@end

