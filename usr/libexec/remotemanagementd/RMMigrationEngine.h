//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RMMigrationEngine : NSObject
{
}

- (id)_fixFilePermissionsAndReadDataForURL:(id)arg1;	// IMP=0x0040000000065750
- (_Bool)_writeProcessedActions:(id)arg1 error:(id *)arg2;	// IMP=0x001000000006555f
- (id)_readMigrationStateReturningError:(id *)arg1;	// IMP=0x001000000006525d
- (id)_readProcessedActionsReturningError:(id *)arg1;	// IMP=0x00100000000650cd
- (id)_coreDataActions;	// IMP=0x0010000000065024
- (id)_startupActions;	// IMP=0x0010000000064f5e
- (_Bool)_migrateWithActions:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000646dc
- (_Bool)migrateWithCoreDataReturningError:(id *)arg1;	// IMP=0x001000000006461b
- (_Bool)migrateOnStartupReturningError:(id *)arg1;	// IMP=0x001000000006455a

@end

