//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface SFAnalyticsEvent : NSObject
{
    NSDictionary *_record;	// 8 = 0x8
    NSNumber *_timestamp;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007180f
@property(readonly, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSDictionary *record; // @synthesize record=_record;
- (id)initFromRow:(id)arg1;	// IMP=0x0000000000071709

@end

