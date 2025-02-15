//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, NSString;

@interface BKNamespaceNode : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSObject *_object;	// 16 = 0x10
    NSMutableOrderedSet *_subnodes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000080f52
@property(retain, nonatomic) NSMutableOrderedSet *subnodes; // @synthesize subnodes=_subnodes;
@property(retain, nonatomic) NSObject *object; // @synthesize object=_object;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_dumpNodeTree:(id)arg1 level:(long long)arg2;	// IMP=0x0010000000080c5c
- (id)_enumerateKeyPathNodesByComponent:(id)arg1 options:(long long)arg2 ifFound:(CDUnknownBlockType)arg3 ifMissing:(CDUnknownBlockType)arg4;	// IMP=0x001000000008084e
- (void)_enumerateNodesWithOptions:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000806c4
- (void)dumpNodeTree;	// IMP=0x00100000000806ac
- (id)enumerateKeyPathNodes:(id)arg1 options:(long long)arg2 ifFound:(CDUnknownBlockType)arg3 ifMissing:(CDUnknownBlockType)arg4;	// IMP=0x0010000000080602
- (void)enumerateNodesWithOptions:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000805f0
- (id)setObject:(id)arg1 atKeyPath:(id)arg2;	// IMP=0x0010000000080570
- (id)objectAtKeyPath:(id)arg1;	// IMP=0x0010000000080520
- (id)nodeAtKeyPath:(id)arg1;	// IMP=0x0010000000080506
- (void)removeNodeAtKeyPath:(id)arg1;	// IMP=0x00100000000803cc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000802c2
- (unsigned long long)hash;	// IMP=0x00100000000802ac
- (id)description;	// IMP=0x0010000000080298
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000080167
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000080117
- (id)succinctDescriptionBuilder;	// IMP=0x00100000000800fb
- (id)succinctDescription;	// IMP=0x00100000000800ab
- (id)init;	// IMP=0x0010000000080055

@end

