//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, _UIDebugLogNode;

__attribute__((visibility("hidden")))
@interface _UIDebugLogStack : NSObject
{
    NSMutableArray *_stack;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000010672b8
- (void)performWithPushedNode:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000001066fac
- (id)popNode;	// IMP=0x0000000001066ee1
- (void)pushNode:(id)arg1;	// IMP=0x0000000001066dd5
- (void)addMessage:(id)arg1;	// IMP=0x0000000001066cda
@property(readonly, nonatomic) _UIDebugLogNode *rootNode;
- (id)_topNode;	// IMP=0x0000000001066cae
- (id)init;	// IMP=0x0000000001066c13

@end

