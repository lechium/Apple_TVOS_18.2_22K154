//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_HKCFGNode.h"

@class NSArray, _HKCFGReplacementRule;

__attribute__((visibility("hidden")))
@interface _HKCFGNonTerminalNode : _HKCFGNode
{
    NSArray *_nodes;	// 24 = 0x18
    id _value;	// 32 = 0x20
    _HKCFGReplacementRule *_rule;	// 40 = 0x28
}

+ (id)nodeWithChildren:(id)arg1 rule:(id)arg2 rangeOfString:(struct _NSRange)arg3;	// IMP=0x006000000001a261
- (void).cxx_destruct;	// IMP=0x000000000001a3d3
@property(readonly, nonatomic) _HKCFGReplacementRule *rule; // @synthesize rule=_rule;
- (id)evaluate;	// IMP=0x000000000001a428

@end

