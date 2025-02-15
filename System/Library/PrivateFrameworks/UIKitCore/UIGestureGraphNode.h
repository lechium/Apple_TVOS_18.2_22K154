//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface UIGestureGraphNode
{
    NSMutableSet *_inEdges;	// 8 = 0x8
    NSMutableSet *_outEdges;	// 16 = 0x10
    NSMutableSet *_inOutEdges;	// 24 = 0x18
    NSMapTable *_edgesByLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000a8dee4
- (id)_edgesForType:(unsigned long long)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x0000000000a8de6e
- (void)_removeEdge:(id)arg1;	// IMP=0x0000000000a8dd99
- (void)_addEdge:(id)arg1;	// IMP=0x0000000000a8dc34
- (id)description;	// IMP=0x0000000000a8db1b
- (void)enumerateNeighborNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a8d945
@property(readonly, nonatomic) NSSet *inOutEdges;
@property(readonly, nonatomic) NSSet *outEdges;
@property(readonly, nonatomic) NSSet *inEdges;
@property(readonly, nonatomic) NSSet *allEdges;
- (id)edgesForLabel:(id)arg1;	// IMP=0x0000000000a8d7c8
- (void)enumerateEdgesBetweenNode:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a8d5fa
- (void)enumerateEdgesFromNode:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a8d434
- (void)enumerateEdgesTowardNode:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a8d26e
- (_Bool)isInOutEdge:(id)arg1;	// IMP=0x0000000000a8d1b8
- (_Bool)isOutEdge:(id)arg1;	// IMP=0x0000000000a8d159
- (_Bool)isInEdge:(id)arg1;	// IMP=0x0000000000a8d0fa
- (unsigned long long)typeOfEdge:(id)arg1;	// IMP=0x0000000000a8d0ba
- (_Bool)hasEdgeBetweenNode:(id)arg1;	// IMP=0x0000000000a8cf42
- (_Bool)hasEdgeFromNode:(id)arg1;	// IMP=0x0000000000a8cdd8
- (_Bool)hasEdgeTowardNode:(id)arg1;	// IMP=0x0000000000a8cc6e
- (unsigned long long)edgeCountForLabel:(id)arg1;	// IMP=0x0000000000a8cc09
@property(readonly, nonatomic) unsigned long long edgeCount;

@end

