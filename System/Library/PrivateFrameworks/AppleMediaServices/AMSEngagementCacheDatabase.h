//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSSQLiteConnection, NSString;

__attribute__((visibility("hidden")))
@interface AMSEngagementCacheDatabase : NSObject
{
    AMSSQLiteConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000038fe33
@property(retain, nonatomic) AMSSQLiteConnection *connection; // @synthesize connection=_connection;
- (void)_performTransaction:(CDUnknownBlockType)arg1;	// IMP=0x000000000038fc58
- (_Bool)connectionNeedsResetForCorruption:(id)arg1;	// IMP=0x000000000038f871
- (_Bool)openAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000000038f656
- (_Bool)selectWithExpirationDate:(id)arg1 handler:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x000000000038f21f
- (_Bool)insertResponseData:(id)arg1 filterData:(id)arg2 expiration:(id)arg3 error:(id *)arg4;	// IMP=0x000000000038ef8e
- (_Bool)collectGarbageWithError:(id *)arg1;	// IMP=0x000000000038edde
- (_Bool)closeWithError:(id *)arg1;	// IMP=0x000000000038ec2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

