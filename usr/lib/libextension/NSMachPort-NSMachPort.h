//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMachPort.h>

@interface NSMachPort (NSMachPort)
+ (_Bool)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned int)arg6 reserved:(unsigned long long)arg7;	// IMP=0x008000000082a34e
+ (void)parseMachMessage:(void *)arg1 localPort:(id *)arg2 remotePort:(id *)arg3 msgid:(unsigned int *)arg4 components:(id *)arg5;	// IMP=0x0080000000829f7d
+ (void)_fixNSMachPortLeak;	// IMP=0x0080000000829931
+ (id)portWithMachPort:(unsigned int)arg1 options:(unsigned long long)arg2;	// IMP=0x0080000000829847
+ (id)portWithMachPort:(unsigned int)arg1;	// IMP=0x008000000082981a
+ (id)port;	// IMP=0x00800000008297f8
+ (void)resetAllPorts;	// IMP=0x00800000008297f2
- (id)init;	// IMP=0x001000000082b2b7
- (id)initWithMachPort:(unsigned int)arg1;	// IMP=0x001000000082b2a0
- (id)initWithMachPort:(unsigned int)arg1 options:(unsigned long long)arg2;	// IMP=0x001000000082af82
- (void)handlePortMessage:(id)arg1;	// IMP=0x001000000082ac9d
- (void)addConnection:(id)arg1 toRunLoop:(id)arg2 forMode:(id)arg3;	// IMP=0x001000000082ac31
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x001000000082ab6e
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x001000000082aaab
- (_Bool)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5;	// IMP=0x001000000082aa3f
- (_Bool)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4;	// IMP=0x001000000082a9d4
- (_Bool)sendBeforeTime:(double)arg1 streamData:(void *)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned int)arg5;	// IMP=0x001000000082a95f
- (id)delegate;	// IMP=0x0010000000829eca
- (void)setDelegate:(id)arg1;	// IMP=0x0010000000829dfe
- (unsigned int)machPort;	// IMP=0x0010000000829db2
- (void)invalidate;	// IMP=0x0010000000829c95
- (_Bool)isValid;	// IMP=0x0010000000829c42
- (_Bool)isMemberOfClass:(Class)arg1;	// IMP=0x0010000000829ba9
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x0010000000829b10
- (unsigned long long)retainCount;	// IMP=0x0010000000829ac0
- (_Bool)_tryRetain;	// IMP=0x0010000000829ab8
- (_Bool)_isDeallocating;	// IMP=0x0010000000829ab0
- (oneway void)release;	// IMP=0x00100000008299ae
- (id)retain;	// IMP=0x0010000000829937
- (unsigned long long)hash;	// IMP=0x00100000008298e2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000829885
- (unsigned long long)_cfTypeID;	// IMP=0x001000000082987b
@end

