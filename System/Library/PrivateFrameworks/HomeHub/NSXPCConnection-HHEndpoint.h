//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSXPCConnection.h>

@interface NSXPCConnection (HHEndpoint)
+ (_Bool)_setInstanceOnConnection:(id)arg1 endpoint:(id)arg2;	// IMP=0x005000000000a0fc
+ (id)hh_xpcConnectionForCurrentContextWithMachServiceName:(id)arg1 targetQueue:(id)arg2 flags:(unsigned long long)arg3;	// IMP=0x0050000000009fca
+ (id)hh_xpcConnectionForEndpoint:(id)arg1 machServiceName:(id)arg2 targetQueue:(id)arg3 flags:(unsigned long long)arg4;	// IMP=0x0050000000009e31
+ (id)hh_connectionForCurrentContextWithMachServiceName:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0050000000009d09
+ (id)hh_connectionForEndpoint:(id)arg1 machServiceName:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x0050000000009b2f
@end

