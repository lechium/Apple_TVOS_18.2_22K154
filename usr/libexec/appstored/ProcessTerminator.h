//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSConditionLock, NSString, RBSTerminationAssertion;

@interface ProcessTerminator : NSObject
{
    NSConditionLock *_condition;	// 8 = 0x8
    RBSTerminationAssertion *_assertion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001731c8
- (void)assertionTargetProcessDidExit:(id)arg1;	// IMP=0x0010000000173185
- (void)dealloc;	// IMP=0x0010000000172f85

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

