//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MLProbabilityDictionaryArrayStorage : NSObject
{
    NSArray *_array;	// 8 = 0x8
    unsigned long long _count;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002d220d
- (unsigned long long)count;	// IMP=0x00000000002d2203
- (unsigned long long)maxElementIndex;	// IMP=0x00000000002d20ce
- (id)probabilityAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002d203e
- (id)initWithArray:(id)arg1;	// IMP=0x00000000002d1f97

@end

