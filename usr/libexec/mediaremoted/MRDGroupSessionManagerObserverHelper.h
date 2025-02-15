//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface MRDGroupSessionManagerObserverHelper : NSObject
{
    CDUnknownBlockType _didStartHostedGroupSession;	// 8 = 0x8
    CDUnknownBlockType _didEndHostedGroupSession;	// 16 = 0x10
    CDUnknownBlockType _didJoinRemoteGroupSession;	// 24 = 0x18
    CDUnknownBlockType _didLeaveRemoteGroupSession;	// 32 = 0x20
    CDUnknownBlockType _discoveredSessionsDidChange;	// 40 = 0x28
    CDUnknownBlockType _activeSessionDidChange;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000012324
@property(copy, nonatomic) CDUnknownBlockType activeSessionDidChange; // @synthesize activeSessionDidChange=_activeSessionDidChange;
@property(copy, nonatomic) CDUnknownBlockType discoveredSessionsDidChange; // @synthesize discoveredSessionsDidChange=_discoveredSessionsDidChange;
@property(copy, nonatomic) CDUnknownBlockType didLeaveRemoteGroupSession; // @synthesize didLeaveRemoteGroupSession=_didLeaveRemoteGroupSession;
@property(copy, nonatomic) CDUnknownBlockType didJoinRemoteGroupSession; // @synthesize didJoinRemoteGroupSession=_didJoinRemoteGroupSession;
@property(copy, nonatomic) CDUnknownBlockType didEndHostedGroupSession; // @synthesize didEndHostedGroupSession=_didEndHostedGroupSession;
@property(copy, nonatomic) CDUnknownBlockType didStartHostedGroupSession; // @synthesize didStartHostedGroupSession=_didStartHostedGroupSession;
- (void)manager:(id)arg1 discoveredSessionsDidChange:(id)arg2;	// IMP=0x0010000000012275
- (void)manager:(id)arg1 didLeaveRemoteGroupSession:(id)arg2;	// IMP=0x001000000001225c
- (void)manager:(id)arg1 didJoinRemoteGroupSession:(id)arg2;	// IMP=0x0010000000012243
- (void)manager:(id)arg1 didEndHostedGroupSession:(id)arg2;	// IMP=0x001000000001222a
- (void)manager:(id)arg1 didStartHostedGroupSession:(id)arg2;	// IMP=0x0010000000012211
- (void)manager:(id)arg1 activeSessionDidChange:(id)arg2;	// IMP=0x00100000000121f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

