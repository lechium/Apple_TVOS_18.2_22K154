//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CallDBManager.h"

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface CallDBManagerClient : CallDBManager
{
    NSXPCConnection *_helperConnection;	// 8 = 0x8
    id _syncHelperReadyNotificationRef;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000f5dc
@property(retain) id syncHelperReadyNotificationRef; // @synthesize syncHelperReadyNotificationRef=_syncHelperReadyNotificationRef;
@property(retain) NSXPCConnection *helperConnection; // @synthesize helperConnection=_helperConnection;
- (id)permDBLocation:(unsigned char *)arg1;	// IMP=0x000000000000f56b
- (id)tempDBLocation:(unsigned char *)arg1;	// IMP=0x000000000000f545
- (void)pokeSyncHelperToInitDB;	// IMP=0x000000000000f0dc
- (void)moveCallsFromTempDatabase;	// IMP=0x000000000000f043
- (_Bool)validateTempDatabase;	// IMP=0x000000000000ef80
- (_Bool)validatePermDatabase;	// IMP=0x000000000000eec0
- (void)createTemporary;	// IMP=0x000000000000ea11
- (void)createPermanent;	// IMP=0x000000000000e57c
- (void)createHelperConnection;	// IMP=0x000000000000e121
- (void)handlePermanentCreated;	// IMP=0x000000000000e091
- (_Bool)willMoveCallsFromTempDatabase;	// IMP=0x000000000000dbba

@end

