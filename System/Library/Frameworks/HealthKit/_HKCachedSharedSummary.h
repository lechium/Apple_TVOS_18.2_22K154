//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKSharedSummary;

__attribute__((visibility("hidden")))
@interface _HKCachedSharedSummary : NSObject
{
    HKSharedSummary *_summary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000017701f
@property(readonly, nonatomic) HKSharedSummary *summary; // @synthesize summary=_summary;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000176e0c
- (unsigned long long)hash;	// IMP=0x0000000000176d7b
- (id)initWithSummary:(id)arg1;	// IMP=0x0000000000176d10

@end

