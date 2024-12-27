//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CCDataResourceWriteAccess, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface CCAdminConnection : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    CCDataResourceWriteAccess *_writeAccess;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000012dfc
- (oneway void)removeAllSets:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012b91
- (oneway void)performMaintenanceOnAllSets:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012a0d
- (CDUnknownBlockType)_shouldDeferActivityBlock;	// IMP=0x00000000000127f0
- (id)initWithConnection:(id)arg1 writeAccess:(id)arg2;	// IMP=0x0000000000012757

@end

