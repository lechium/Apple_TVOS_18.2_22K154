//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MSMSASServiceConnection : NSObject
{
    NSMutableDictionary *_foregroundPingTimerByPersonID;	// 8 = 0x8
    NSMutableDictionary *_XPCForegroundRequestByPersonID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000889b
@property(retain, nonatomic) NSMutableDictionary *XPCForegroundRequestByPersonID; // @synthesize XPCForegroundRequestByPersonID=_XPCForegroundRequestByPersonID;
@property(retain, nonatomic) NSMutableDictionary *foregroundPingTimerByPersonID; // @synthesize foregroundPingTimerByPersonID=_foregroundPingTimerByPersonID;
- (void)XPCNSServiceConnectionDidDisconnect:(id)arg1;	// IMP=0x00100000000087f0
- (void)XPCNSServiceConnection:(id)arg1 didReceiveRequest:(id)arg2 sequenceNumber:(unsigned long long)arg3;	// IMP=0x00100000000086ae
- (void)_handleFocusAlbum:(id)arg1;	// IMP=0x00100000000085d3
- (void)_foregroundPingTimerDidExpire:(id)arg1;	// IMP=0x00100000000083ca
- (void)_handleForegroundPing:(id)arg1 request:(id)arg2;	// IMP=0x001000000000800d
- (id)workQueue;	// IMP=0x0010000000007fdd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

