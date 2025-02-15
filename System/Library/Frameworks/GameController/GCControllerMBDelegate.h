//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer;

__attribute__((visibility("hidden")))
@interface GCControllerMBDelegate : NSObject
{
    struct BTSessionImpl *_session;	// 8 = 0x8
    struct BTPairingAgentImpl *_pairingAgent;	// 16 = 0x10
    struct BTDiscoveryAgentImpl *_discoveryAgent;	// 24 = 0x18
    NSTimer *_timer;	// 32 = 0x20
    CDUnknownBlockType _completionHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000cc2e6
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)stopScan;	// IMP=0x00000000000cbe20
- (void)startScan;	// IMP=0x00000000000cb8ed
- (void)scanTimeout:(id)arg1;	// IMP=0x00000000000cb8bf
- (void)fireCompletionHandler;	// IMP=0x00000000000cb81b
- (void)dealloc;	// IMP=0x00000000000cb78c

@end

