//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKSQLiteExecutor, NSString;

@interface AKStoreMigrator : NSObject
{
    AKSQLiteExecutor *_executor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000b5c2b
@property(nonatomic) __weak AKSQLiteExecutor *executor; // @synthesize executor=_executor;
- (id)storeName;	// IMP=0x00100000000b5bbc
- (unsigned long long)currentSchemaVersion;	// IMP=0x00100000000b5b79
- (void)migrateSchemaFromVersion:(unsigned long long)arg1;	// IMP=0x00100000000b5b33
- (unsigned long long)_schemaVersion;	// IMP=0x00100000000b58a9
- (void)migrateSchemaIfNecessary;	// IMP=0x00100000000b57f1
- (id)initWithExecutor:(id)arg1;	// IMP=0x00100000000b578d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

