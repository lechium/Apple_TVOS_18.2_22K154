//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <KnowledgeGraphKit/NSObject-Protocol.h>

@class MAEdgeFilter, MANode, MANodeFilter;

@protocol MANodeImplementationProtocol <NSObject>
- (void)enumerateNeighborEdgesAndNodesThroughEdgesOfType:(unsigned long long)arg1 matchingFilter:(MAEdgeFilter *)arg2 usingBlock:(void (^)(MAEdge *, MANode *, _Bool *))arg3;
- (void)enumerateNeighborNodesThroughEdgesOfType:(unsigned long long)arg1 matchingFilter:(MAEdgeFilter *)arg2 usingBlock:(void (^)(MANode *, _Bool *))arg3;
- (void)enumerateNeighborEdgesAndNodesMatchingFilter:(MANodeFilter *)arg1 usingBlock:(void (^)(MAEdge *, MANode *, _Bool *))arg2;
- (void)enumerateNeighborNodesMatchingFilter:(MANodeFilter *)arg1 usingBlock:(void (^)(MANode *, _Bool *))arg2;
- (void)enumerateEdgesOfType:(unsigned long long)arg1 withNode:(MANode *)arg2 usingBlock:(void (^)(MAEdge *, _Bool *))arg3;
- (_Bool)hasEdgeOfType:(unsigned long long)arg1 withNode:(MANode *)arg2;
- (void)enumerateEdgesOfType:(unsigned long long)arg1 matchingFilter:(MAEdgeFilter *)arg2 usingBlock:(void (^)(MAEdge *, _Bool *))arg3;
- (_Bool)hasEdgeOfType:(unsigned long long)arg1 matchingFilter:(MAEdgeFilter *)arg2;
- (unsigned long long)countOfEdgesOfType:(unsigned long long)arg1 matchingFilter:(MAEdgeFilter *)arg2;
@end

