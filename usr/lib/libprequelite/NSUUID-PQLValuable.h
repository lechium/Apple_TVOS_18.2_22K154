//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUUID.h>

@class NSString;

@interface NSUUID (PQLValuable)
+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;	// IMP=0x0010000000003c9e
+ (id)newFromSqliteStatement:(struct sqlite3_stmt *)arg1 atIndex:(int)arg2;	// IMP=0x0010000000003bae
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;	// IMP=0x0010000000003b41

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

