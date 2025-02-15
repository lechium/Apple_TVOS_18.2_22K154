//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTServiceConnection, NSSet;

@interface GTLoopbackServiceXPCProxy : NSObject
{
    GTServiceConnection *_connection;	// 8 = 0x8
    NSSet *_ignoreMethods;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002475b
- (void)echo:(id)arg1 repeat:(unsigned long long)arg2 callback:(CDUnknownBlockType)arg3 complete:(CDUnknownBlockType)arg4;	// IMP=0x0000000000024517
- (void)echo:(id)arg1 repeat:(unsigned long long)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x00000000000243fc
- (void)echo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000242b8
- (id)echo:(id)arg1;	// IMP=0x0000000000024200
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000002417b
- (id)initWithConnection:(id)arg1 remoteProperties:(id)arg2;	// IMP=0x0000000000024032

@end

