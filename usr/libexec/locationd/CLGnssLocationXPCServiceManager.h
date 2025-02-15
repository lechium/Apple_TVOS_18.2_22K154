//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSXPCConnection;

@interface CLGnssLocationXPCServiceManager : NSObject
{
    _Bool fRavenCurrentlyRunning;	// 8 = 0x8
    _Bool fConnectionInterruptedAfterRavenConfiguration;	// 9 = 0x9
    NSData *fRavenPlatformInfoData;	// 16 = 0x10
    NSString *fRavenParametersString;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
}

@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)shutdown;	// IMP=0x00100000002a2e02
- (void)reset;	// IMP=0x00100000002a2c48
- (void)raiseRavenEventsFromData:(id)arg1;	// IMP=0x00100000002a2bfe
- (void)getRavenSolutionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000002a29fa
- (void)getRavenSolutionAtMCTime:(double)arg1 WithReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000002a27c9
- (void)pauseResetAndFreeRavenSupervisorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002a25b0
- (void)configureInitializeAndStartRavenSupervisorWithPlatformInfo:(id)arg1 withParametersOverrideString:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002a23c1
- (id)getSynchronousRemoteObjectProxy;	// IMP=0x00100000002a21d5
- (void)reconfigureRavenIfNeeded;	// IMP=0x00100000002a1e1c
- (void)dealloc;	// IMP=0x00100000002a1c19
- (id)getConnection;	// IMP=0x00100000002a169c
- (id)init;	// IMP=0x00100000002a13b2

@end

