//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;

@interface GDScoreRankedPersonEntityTagsInner : NSObject
{
    MISSING_TYPE *id;	// 8 = 0x8
    MISSING_TYPE *inferenceEventId;	// 16 = 0x10
    MISSING_TYPE *scoredPersonEntityTags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e2801
- (id)init;	// IMP=0x00000000000e27e7
@property(nonatomic, readonly) long long inferenceEventIdValue;
@property(nonatomic, readonly) NSArray *scoredPersonEntityTags;
@property(nonatomic, readonly) unsigned long long idValue;
- (id)initWithIdValue:(long long)arg1 scoredPersonEntityTags:(id)arg2 inferenceEventIdValue:(long long)arg3;	// IMP=0x00000000000e2684

@end

