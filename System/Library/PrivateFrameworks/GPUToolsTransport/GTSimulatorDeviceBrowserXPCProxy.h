//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTServiceConnection, NSSet;

__attribute__((visibility("hidden")))
@interface GTSimulatorDeviceBrowserXPCProxy : NSObject
{
    GTServiceConnection *_connection;	// 8 = 0x8
    NSSet *_ignoreMethods;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000001c68
- (id)deviceProperties:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000001b4e
- (_Bool)isSimulatorDevice:(id)arg1;	// IMP=0x0000000000001a72
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000019ed
- (id)initWithConnection:(id)arg1 remoteProperties:(id)arg2;	// IMP=0x00000000000017e0

@end

