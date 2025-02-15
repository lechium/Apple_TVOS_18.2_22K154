//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface __NSSKGraph : NSObject
{
    struct edge *_edges;	// 8 = 0x8
    struct vertex *_vertices;	// 16 = 0x10
    unsigned long long _numV;	// 24 = 0x18
    unsigned long long _numE;	// 32 = 0x20
    unsigned long long _currE;	// 40 = 0x28
    unsigned long long _dump;	// 48 = 0x30
    unsigned long long _l_end;	// 56 = 0x38
}

- (struct edge **)isAcyclic;	// IMP=0x00000000001806e7
- (unsigned long long)numOfEdges;	// IMP=0x00000000001806e2
- (_Bool)isEmpty;	// IMP=0x00000000001806d6
- (_Bool)addEdgeWithH1:(unsigned long long)arg1 withH2:(unsigned long long)arg2;	// IMP=0x00000000001804d1
- (void)dealloc;	// IMP=0x0000000000180430
- (id)initWithNumberOfVertices:(long long)arg1 numberOfEdges:(long long)arg2;	// IMP=0x0000000000180388

@end

