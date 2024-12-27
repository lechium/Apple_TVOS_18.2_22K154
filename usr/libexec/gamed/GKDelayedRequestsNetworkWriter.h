//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKDataTransport, NSString;

@interface GKDelayedRequestsNetworkWriter : NSObject
{
    NSString *_bagKey;	// 8 = 0x8
    GKDataTransport *_transport;	// 16 = 0x10
}

+ (id)writerWithTransport:(id)arg1 forBagKey:(id)arg2;	// IMP=0x00200000000e27b7
- (void).cxx_destruct;	// IMP=0x00200000000e2c5c
@property(retain, nonatomic) GKDataTransport *transport; // @synthesize transport=_transport;
@property(retain, nonatomic) NSString *bagKey; // @synthesize bagKey=_bagKey;
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e28c7
- (id)initWithTransport:(id)arg1 forBagKey:(id)arg2;	// IMP=0x00100000000e2829

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

