//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSXPCConnection.h>

@class NSString;

@interface NSXPCConnection (BMXPCListener)
+ (id)bm_connectionWithServiceName:(id)arg1 queue:(id)arg2;	// IMP=0x00200000000047a7
+ (id)bm_connectionWithMachServiceName:(id)arg1 queue:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x00200000000046fe
+ (id)bm_connectionWithListenerEndpoint:(id)arg1 queue:(id)arg2;	// IMP=0x0020000000004657
- (id)bm_transport;	// IMP=0x0010000000003d6a
@property(retain, nonatomic) NSString *bm_exportedUseCase;
@property(readonly, nonatomic) NSString *bm_remoteUseCase;
@end

