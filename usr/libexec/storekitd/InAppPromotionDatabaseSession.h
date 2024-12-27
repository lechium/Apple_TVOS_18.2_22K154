//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SQLiteConnection;

@interface InAppPromotionDatabaseSession : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000004b8e
@property(readonly) SQLiteConnection *connection; // @synthesize connection=_connection;
- (id)promotionInfoForProductIdentifiers:(id)arg1 bundleID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000469f
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000004634

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

