//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface CarbonComponentScannerXPCClient : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002ddbee
- (void)rescan:(id)arg1 added:(void *)arg2 removed:(void *)arg3;	// IMP=0x00000000002dd49b
- (struct AudioComponentVector)initialScan:(id)arg1;	// IMP=0x00000000002dcdf4
- (void)handleConnectionError:(_Bool)arg1;	// IMP=0x00000000002dccc1
- (id)xpcConnection;	// IMP=0x00000000002dcb13
- (id)init;	// IMP=0x00000000002dcac5

@end

