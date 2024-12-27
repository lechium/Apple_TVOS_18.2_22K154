//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKDatabaseConnection, NSString;

@interface GKRemoveGamesCacheReader : NSObject
{
    GKDatabaseConnection *_connection;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
}

+ (id)readerWithDatabaseConnection:(id)arg1 bundleID:(id)arg2;	// IMP=0x00200000000d9d4e
- (void).cxx_destruct;	// IMP=0x00200000000db169
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)readResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000da30a
- (id)removeGamesForExecutedStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x00100000000da19d
- (void)bindParametersForStatement:(struct sqlite3_stmt *)arg1 playerID:(id)arg2 bundleID:(id)arg3;	// IMP=0x00100000000da114
- (id)getAllRemoveGamesRequestIDsStatement;	// IMP=0x00100000000da006
- (id)getRemoveGamesDescriptorsStatement;	// IMP=0x00100000000d9eb7
@property(readonly, nonatomic) GKDatabaseConnection *databaseConnection;
- (id)initWithDatabaseConnection:(id)arg1 bundleID:(id)arg2;	// IMP=0x00100000000d9ddb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

