//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface __IOGCFastPathRoyaReplayClient
{
    const struct IOCFPlugInInterfaceStruct *_IOCFPlugInVTBL;	// 48 = 0x30
    const struct IOGCFastPathClientInterface *_IOGCFastPathClientVTBL;	// 56 = 0x38
    struct os_unfair_lock_s _lock;	// 64 = 0x40
    NSDictionary *_propertyTable;	// 72 = 0x48
    unsigned long long _providerID;	// 80 = 0x50
}

- (int)queryInterface:(CDStruct_bd2f613f)arg1 outInterface:(void **)arg2;	// IMP=0x000000000001850e
- (unsigned long long)_cfTypeID;	// IMP=0x0000000000018504

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

