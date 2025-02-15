//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ManagedConfiguration/MCDependencyReader.h>

@class NSMutableDictionary;

@interface MCDependencyManager : MCDependencyReader
{
    NSMutableDictionary *_memberQueueSystemOrphansDict;	// 8 = 0x8
    NSMutableDictionary *_memberQueueUserOrphansDict;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x00400000000622b6
- (void).cxx_destruct;	// IMP=0x00200000000644ce
@property(retain, nonatomic) NSMutableDictionary *memberQueueUserOrphansDict; // @synthesize memberQueueUserOrphansDict=_memberQueueUserOrphansDict;
@property(retain, nonatomic) NSMutableDictionary *memberQueueSystemOrphansDict; // @synthesize memberQueueSystemOrphansDict=_memberQueueSystemOrphansDict;
- (void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4 fromSystem:(_Bool)arg5 user:(_Bool)arg6;	// IMP=0x00100000000642ba
- (void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4;	// IMP=0x001000000006429f
- (void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4 toSystem:(_Bool)arg5 user:(_Bool)arg6;	// IMP=0x001000000006409b
- (void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4;	// IMP=0x0010000000064080
- (void)memberQueueRemoveDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 fromSystem:(_Bool)arg4 user:(_Bool)arg5;	// IMP=0x0010000000063c7a
- (void)memberQueueRemoveDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3;	// IMP=0x0010000000063c52
- (void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 fromSystem:(_Bool)arg4 user:(_Bool)arg5;	// IMP=0x00100000000638ed
- (void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3;	// IMP=0x00100000000638c5
- (void)memberQueueAddDependent:(id)arg1 toParent:(id)arg2 inDomain:(id)arg3 toSystem:(_Bool)arg4 user:(_Bool)arg5;	// IMP=0x00100000000634f1
- (void)memberQueueAddDependent:(id)arg1 toParent:(id)arg2 inDomain:(id)arg3;	// IMP=0x00100000000634c9
- (void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3 toSystem:(_Bool)arg4 user:(_Bool)arg5;	// IMP=0x00100000000632bb
- (void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3;	// IMP=0x0010000000063293
- (id)memberQueueOrphanedParentsInUserDomain:(id)arg1;	// IMP=0x0010000000063219
- (id)memberQueueOrphanedParentsInSystemDomain:(id)arg1;	// IMP=0x001000000006319f
- (id)orphanedParentsForUserDomain:(id)arg1;	// IMP=0x0010000000062ff7
- (id)orphanedParentsForSystemDomain:(id)arg1;	// IMP=0x0010000000062e4f
- (id)orphanedParentsForDomain:(id)arg1;	// IMP=0x0010000000062ba8
- (void)memberQueueRemoveOrphanParent:(id)arg1 inDomain:(id)arg2 fromSystem:(_Bool)arg3 user:(_Bool)arg4;	// IMP=0x0010000000062918
- (void)memberQueueAddOrphanParent:(id)arg1 inDomain:(id)arg2 toSystem:(_Bool)arg3 user:(_Bool)arg4;	// IMP=0x001000000006265a
- (void)commitChangesCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000623f3
- (void)commitChanges;	// IMP=0x001000000006234b
- (id)_init;	// IMP=0x00100000000622c8

@end

