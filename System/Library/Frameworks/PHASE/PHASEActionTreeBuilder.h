//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface PHASEActionTreeBuilder : NSObject
{
    NSMutableArray *_rootNodes;	// 8 = 0x8
    NSMutableSet *_parameters;	// 16 = 0x10
    NSMutableSet *_mixNodes;	// 24 = 0x18
    unsigned int _nextNodeId;	// 32 = 0x20
}

+ (id)getParamArray:(id)arg1 globalParamUIDs:(id)arg2 outError:(id *)arg3;	// IMP=0x006000000017939e
- (void).cxx_destruct;	// IMP=0x000000000017e0f7
- (id)createParseableDictionaryWithUID:(id)arg1 rootNodes:(id)arg2 globalParamUIDs:(id)arg3 assetRegistry:(id)arg4 outError:(id *)arg5;	// IMP=0x000000000017bfe8
- (_Bool)checkNodeForValidChannelLayouts:(id)arg1 assetRegistry:(id)arg2 outError:(id *)arg3;	// IMP=0x000000000017b41c
- (void)fillOutDirectivityFieldsWithParams:(id)arg1 dictionary:(id)arg2 isListener:(_Bool)arg3;	// IMP=0x000000000017a931
- (void)fillOutDistanceFieldsWithParams:(id)arg1 dictionary:(id)arg2;	// IMP=0x000000000017a30e
- (_Bool)processNode:(id)arg1 withArray:(id)arg2 assetRegistry:(id)arg3 outError:(id *)arg4;	// IMP=0x00000000001790a7
- (id)generateNodeDictionary:(id)arg1 outError:(id *)arg2;	// IMP=0x0000000000175d03
- (void)fillGeneratorNodeEntries:(id)arg1 dictionary:(id)arg2;	// IMP=0x000000000017587e
- (_Bool)addParameter:(id)arg1;	// IMP=0x0000000000175768
- (_Bool)addRootNode:(id)arg1;	// IMP=0x000000000017574f
- (id)init;	// IMP=0x0000000000175688

@end

