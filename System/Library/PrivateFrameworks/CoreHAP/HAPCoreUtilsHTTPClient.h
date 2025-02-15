//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HAPCoreUtilsHTTPClient : NSObject
{
    struct HTTPClientPrivate *_httpClient;	// 8 = 0x8
}

- (void)dealloc;	// IMP=0x00000000000f9cd3
- (int)getPeerAddress:(void *)arg1 maxLength:(unsigned long long)arg2 outLength:(unsigned long long *)arg3;	// IMP=0x00000000000f9cb0
- (int)sendMessage:(struct HTTPMessagePrivate *)arg1;	// IMP=0x00000000000f9c9f
- (void)invalidate;	// IMP=0x00000000000f9c70
- (void)setDebugDelegate:(const CDStruct_098be855 *)arg1;	// IMP=0x00000000000f9c5f
- (void)setTransportDelegate:(const CDStruct_41bb28a7 *)arg1;	// IMP=0x00000000000f9c4e
- (void)setDelegate:(const CDStruct_41bb28a7 *)arg1;	// IMP=0x00000000000f9c3d
- (int)setDestination:(const char *)arg1 port:(int)arg2;	// IMP=0x00000000000f9c2a
- (void)setTimeoutInSeconds:(int)arg1;	// IMP=0x00000000000f9c1a
- (void)setFlags:(unsigned int)arg1 mask:(unsigned int)arg2;	// IMP=0x00000000000f9c08
- (void)setDispatchQueue:(id)arg1;	// IMP=0x00000000000f9bf7
- (int)setProperty:(struct __CFString *)arg1 value:(void *)arg2;	// IMP=0x00000000000f9be3
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000000f9b40

@end

