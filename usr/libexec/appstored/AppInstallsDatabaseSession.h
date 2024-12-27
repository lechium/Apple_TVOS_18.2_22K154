//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SQLiteConnection;
@protocol AppInstallPipeline;

@interface AppInstallsDatabaseSession : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
    id <AppInstallPipeline> _pipeline;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000209be5
@property(readonly) SQLiteConnection *connection; // @synthesize connection=_connection;
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000209080

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

