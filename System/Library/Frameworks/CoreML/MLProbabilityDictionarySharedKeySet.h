//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSEnumerator;

__attribute__((visibility("hidden")))
@interface MLProbabilityDictionarySharedKeySet : NSObject
{
    NSDictionary *_labelToIndex;	// 8 = 0x8
    NSArray *_labels;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002d16b2
@property(readonly, nonatomic) NSEnumerator *labelEnumerator;
- (id)labelAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002d1686
@property(readonly, nonatomic) unsigned long long uniqueLabelCount;
@property(readonly, nonatomic) unsigned long long count;
- (unsigned long long)indexOfLabel:(id)arg1;	// IMP=0x00000000002d15ee
- (id)initWithLabels:(id)arg1;	// IMP=0x00000000002d12e4

@end

