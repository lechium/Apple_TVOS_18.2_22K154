//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface WFLibraryQuery : NSObject
{
    MISSING_TYPE *performer;	// 8 = 0x8
    MISSING_TYPE *identity;	// 32 = 0x20
    MISSING_TYPE *queryDescription;	// 72 = 0x48
    MISSING_TYPE *type;	// 88 = 0x58
}

+ (id)deletedFolders;	// IMP=0x00100000002799ed
+ (id)sortedVisibleFolders;	// IMP=0x001000000027999f
+ (id)sortedGroupings;	// IMP=0x0010000000279953
+ (id)sortedWorkflowsWithQuery:(id)arg1 hasTombstonedConflicts:(_Bool)arg2;	// IMP=0x00100000002798b7
+ (id)sortedWorkflowsWithQuery:(id)arg1 sortByName:(_Bool)arg2 nameEqualing:(id)arg3;	// IMP=0x00100000002797a9
+ (id)sortedWorkflowsWithQuery:(id)arg1 sortByName:(_Bool)arg2 nameContaining:(id)arg3 limit:(long long)arg4;	// IMP=0x001000000027966f
+ (id)sortedWorkflowsWithQuery:(id)arg1 sortByName:(_Bool)arg2 associatedAppBundleIdentifier:(id)arg3;	// IMP=0x001000000027954c
+ (id)sortedWorkflowsWithQuery:(id)arg1 sortByName:(_Bool)arg2 limit:(long long)arg3;	// IMP=0x0010000000279462
+ (id)sortedWorkflowsWithQuery:(id)arg1;	// IMP=0x0010000000279384
- (void).cxx_destruct;	// IMP=0x000000000027ba6b
- (id)init;	// IMP=0x000000000027b9eb
@property(nonatomic, readonly) NSString *description;
- (id)copyWithZone:(void *)arg1;	// IMP=0x000000000027b7be
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000027b6e9
- (id)performReturningShortcutsIn:(id)arg1 database:(id)arg2 error:(id *)arg3;	// IMP=0x000000000027b489
- (id)performReturningCollectionsIn:(id)arg1 database:(id)arg2 error:(id *)arg3;	// IMP=0x000000000027b3ca
@property(nonatomic, readonly) long long type; // @synthesize type;

@end

