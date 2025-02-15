//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDaemonRequestTimer, NSString;

@interface IDSAppleCareDaemonResponseListener : NSObject
{
    IDSDaemonRequestTimer *_requestTimer;	// 8 = 0x8
    CDUnknownBlockType _disconnectedBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004b5cc
- (void)daemonDisconnected;	// IMP=0x000000000004b5b9
- (void)applecareResponseForRequestID:(id)arg1 withError:(id)arg2;	// IMP=0x000000000004b47d
- (id)initWithDisconnectedBlockAndNoTimeout:(CDUnknownBlockType)arg1;	// IMP=0x000000000004b40a
- (id)initWithRequestTimer:(id)arg1;	// IMP=0x000000000004b39f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

