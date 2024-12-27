//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSPort.h>

@interface NSPort (NSPort)
+ (id)portWithMachPort:(unsigned int)arg1;	// IMP=0x00500000008294f7
+ (id)port;	// IMP=0x00500000008294d5
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00500000008294a8
- (void)removeConnection:(id)arg1 fromRunLoop:(id)arg2 forMode:(id)arg3;	// IMP=0x0010000000829796
- (void)addConnection:(id)arg1 toRunLoop:(id)arg2 forMode:(id)arg3;	// IMP=0x001000000082973a
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x0010000000829734
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x001000000082972e
- (_Bool)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5;	// IMP=0x001000000082970f
- (_Bool)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4;	// IMP=0x00100000008296e1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000008296db
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000829687
- (Class)classForCoder;	// IMP=0x0010000000829619
- (Class)classForPortCoder;	// IMP=0x0010000000829608
- (id)replacementObjectForCoder:(id)arg1;	// IMP=0x0010000000829600
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000008295f5
- (unsigned long long)reservedSpaceLength;	// IMP=0x00100000008295ed
- (id)delegate;	// IMP=0x00100000008295bf
- (void)setDelegate:(id)arg1;	// IMP=0x0010000000829594
- (unsigned int)machPort;	// IMP=0x001000000082958c
- (_Bool)isValid;	// IMP=0x001000000082955e
- (void)invalidate;	// IMP=0x0010000000829533
- (id)initWithMachPort:(unsigned int)arg1;	// IMP=0x001000000082952b
@end

