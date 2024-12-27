//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <KnowledgeGraphKit/KGElement-Protocol.h>

@class NSDictionary, NSSet;
@protocol KGNode;

@protocol KGEdge <KGElement>
@property(readonly, nonatomic) id <KGNode> sourceNode;
@property(readonly, nonatomic) id <KGNode> targetNode;
- (id)initWithIdentifier:(unsigned long long)arg1 labels:(NSSet *)arg2 properties:(NSDictionary *)arg3 sourceNode:(id <KGNode>)arg4 targetNode:(id <KGNode>)arg5;
@end

