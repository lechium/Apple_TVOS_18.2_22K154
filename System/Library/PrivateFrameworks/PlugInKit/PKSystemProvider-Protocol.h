//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PlugInKit/NSObject-Protocol.h>

@protocol PKSystemProvider <NSObject>
- (void)xpc_transaction_interrupt_clean_exit;
- (void)xpc_transaction_exit_clean;
- (int)access:(const char *)arg1 amode:(int)arg2;
- (int)getpid;
- (struct passwd *)getpwuid:(unsigned int)arg1;
- (unsigned int)getuid;
- (const char *)getenv:(const char *)arg1;
- (void)CFRunLoopRun;
- (void)exit:(int)arg1;
@end

