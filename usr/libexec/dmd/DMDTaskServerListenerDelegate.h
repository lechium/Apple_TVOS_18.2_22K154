//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CATTaskServer, NSString;

@interface DMDTaskServerListenerDelegate : NSObject
{
    CATTaskServer *_taskServer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000771b9
@property(readonly, nonatomic) CATTaskServer *taskServer; // @synthesize taskServer=_taskServer;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000770b3
- (id)initWithTaskServer:(id)arg1;	// IMP=0x0010000000077048

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

