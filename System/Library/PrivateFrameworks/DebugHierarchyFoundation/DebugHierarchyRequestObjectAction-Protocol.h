//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DebugHierarchyFoundation/DebugHierarchyRequestAction-Protocol.h>

@class DebugHierarchyRequestExecutionContext;
@protocol DebugHierarchyObject;

@protocol DebugHierarchyRequestObjectAction <DebugHierarchyRequestAction>
- (_Bool)targetsObjectIdentifiers:(id *)arg1;
- (void)performInContext:(DebugHierarchyRequestExecutionContext *)arg1 withObject:(id <DebugHierarchyObject>)arg2;
@end

