//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface WFThreeWayMergingObjectGraph : NSObject
{
    CDUnknownBlockType _vertexComparator;	// 8 = 0x8
    NSMutableOrderedSet *_orderedVertexes;	// 16 = 0x10
    NSMapTable *_directSuccessorsForVertexes;	// 24 = 0x18
    NSMapTable *_directPredecessorsForVertexes;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000056d124
- (id)description;	// IMP=0x000000000056d09a

@end

