//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSSet;

__attribute__((visibility("hidden")))
@interface UIGestureGraph : NSObject
{
    NSMapTable *_nodesByLabel;	// 8 = 0x8
    NSMapTable *_edgesByLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000a898a8
- (void)traverseGraphBreadthFirstFromNode:(id)arg1 directed:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a89276
- (void)traverseGraphDepthFirstFromNode:(id)arg1 directed:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a88c2a
- (void)removeAllObjects;	// IMP=0x0000000000a88bef
- (id)_edgesForLabel:(id)arg1;	// IMP=0x0000000000a88bad
- (id)_allEdges;	// IMP=0x0000000000a88a49
- (void)enumerateEdgesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a887b3
- (void)enumerateEdgesWithLabel:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a8863c
@property(readonly, nonatomic) NSSet *edgeLabels;
- (unsigned long long)edgeCountForLabel:(id)arg1;	// IMP=0x0000000000a885a3
@property(readonly, nonatomic) unsigned long long edgeCount;
- (id)addUniqueEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 directed:(_Bool)arg4 properties:(id)arg5;	// IMP=0x0000000000a8819d
- (id)edgesForLabel:(id)arg1 properties:(id)arg2;	// IMP=0x0000000000a87fbb
- (id)edgesForLabel:(id)arg1;	// IMP=0x0000000000a87f64
- (void)removeEdges:(id)arg1;	// IMP=0x0000000000a87e33
- (void)removeEdge:(id)arg1;	// IMP=0x0000000000a87d3a
- (id)addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 directed:(_Bool)arg4;	// IMP=0x0000000000a87cc6
- (void)_addEdge:(id)arg1;	// IMP=0x0000000000a87aa4
- (id)_nodesForLabel:(id)arg1;	// IMP=0x0000000000a87a62
- (id)_allNodes;	// IMP=0x0000000000a878fe
- (void)enumerateNodesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a87668
- (void)enumerateNodesWithLabel:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a874f1
@property(readonly, nonatomic) NSSet *nodeLabels;
@property(readonly, nonatomic) unsigned long long nodeCount;
- (id)addUniqueNodeWithLabel:(id)arg1 properties:(id)arg2;	// IMP=0x0000000000a87272
- (id)nodesForLabel:(id)arg1 properties:(id)arg2;	// IMP=0x0000000000a87090
- (unsigned long long)nodeCountForLabel:(id)arg1;	// IMP=0x0000000000a8704c
- (id)nodesForLabel:(id)arg1;	// IMP=0x0000000000a8703a
- (void)removeNodes:(id)arg1;	// IMP=0x0000000000a86f09
- (void)removeNode:(id)arg1;	// IMP=0x0000000000a86e7e
- (void)removeNodeEdges:(id)arg1;	// IMP=0x0000000000a86d39
- (id)addNodeWithLabel:(id)arg1 properties:(id)arg2;	// IMP=0x0000000000a86ccf
- (id)addNodeWithLabel:(id)arg1;	// IMP=0x0000000000a86c77
- (void)_addNode:(id)arg1;	// IMP=0x0000000000a86b91
- (id)description;	// IMP=0x0000000000a86728
- (id)init;	// IMP=0x0000000000a8668b

@end

