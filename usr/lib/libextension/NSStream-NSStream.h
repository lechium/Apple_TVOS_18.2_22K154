//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSStream.h>

@interface NSStream (NSStream)
+ (void)getStreamsToHost:(id)arg1 port:(long long)arg2 inputStream:(id *)arg3 outputStream:(id *)arg4;	// IMP=0x0080000000863112
+ (void)getStreamsToHostWithName:(id)arg1 port:(long long)arg2 inputStream:(id *)arg3 outputStream:(id *)arg4;	// IMP=0x008000000086305f
+ (void)getBoundStreamsWithBufferSize:(unsigned long long)arg1 inputStream:(id *)arg2 outputStream:(id *)arg3;	// IMP=0x0080000000863242
- (id)streamError;	// IMP=0x001000000086224c
- (unsigned long long)streamStatus;	// IMP=0x001000000086221b
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x00100000008621f0
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x00100000008621c5
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000862197
- (id)propertyForKey:(id)arg1;	// IMP=0x0010000000862169
- (void)setDelegate:(id)arg1;	// IMP=0x001000000086213e
- (id)delegate;	// IMP=0x0010000000862110
- (void)close;	// IMP=0x00100000008620e5
- (void)open;	// IMP=0x00100000008620ba
- (id)init;	// IMP=0x0010000000862013
@end

