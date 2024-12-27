//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMCloudKitSyncEngine, BMDistributedSyncMultiStreamManager, BMRapportSyncEngine, BMSyncDatabase, BMSyncScheduler, NSString;
@protocol BMAccessAssertion, OS_dispatch_queue;

@interface BMSyncCore : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    unsigned long long _state;	// 16 = 0x10
    id <BMAccessAssertion> _accessAssertion;	// 24 = 0x18
    id <BMAccessAssertion> _sharedSyncAccessAssertion;	// 32 = 0x20
    BMSyncDatabase *_primaryDatabase;	// 40 = 0x28
    BMDistributedSyncMultiStreamManager *_primaryUserSyncStreamManager;	// 48 = 0x30
    BMRapportSyncEngine *_rapportSyncEngine;	// 56 = 0x38
    BMCloudKitSyncEngine *_cloudKitSyncEngine;	// 64 = 0x40
    BMSyncScheduler *_syncScheduler;	// 72 = 0x48
}

+ (void)resetEagerExitTimer;	// IMP=0x002000000000ec31
- (void).cxx_destruct;	// IMP=0x002000000000ef3b
@property(retain, nonatomic) BMSyncScheduler *syncScheduler; // @synthesize syncScheduler=_syncScheduler;
@property(retain, nonatomic) BMCloudKitSyncEngine *cloudKitSyncEngine; // @synthesize cloudKitSyncEngine=_cloudKitSyncEngine;
@property(retain, nonatomic) BMRapportSyncEngine *rapportSyncEngine; // @synthesize rapportSyncEngine=_rapportSyncEngine;
@property(retain, nonatomic) BMDistributedSyncMultiStreamManager *primaryUserSyncStreamManager; // @synthesize primaryUserSyncStreamManager=_primaryUserSyncStreamManager;
@property(retain, nonatomic) BMSyncDatabase *primaryDatabase; // @synthesize primaryDatabase=_primaryDatabase;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (_Bool)shouldCacheConnectionToMachService:(unsigned long long)arg1 domain:(unsigned long long)arg2 useCase:(id)arg3;	// IMP=0x001000000000ee09
- (_Bool)start;	// IMP=0x001000000000ed92
- (id)initWithQueue:(id)arg1;	// IMP=0x001000000000ed27

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

