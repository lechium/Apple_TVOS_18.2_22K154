//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TVTopShelfRottenTomatoesRating;

__attribute__((visibility("hidden")))
@interface HBTopShelfRottenTomatoesRating : NSObject
{
    TVTopShelfRottenTomatoesRating *_topShelfRating;	// 8 = 0x8
}

+ (long long)_freshnessTypeFromTopShelfFreshnessType:(unsigned long long)arg1;	// IMP=0x0010000000048a0b
- (void).cxx_destruct;	// IMP=0x0000000000048a3c
@property(retain, nonatomic) TVTopShelfRottenTomatoesRating *topShelfRating; // @synthesize topShelfRating=_topShelfRating;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double score;
@property(readonly, nonatomic) long long freshness;
- (id)initWithTopShelfRottenTomatoesRating:(id)arg1;	// IMP=0x0000000000048808

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

