//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface _CPLPrequeliteScopeIsEqual : NSObject
{
    NSString *_identifier;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x002000000017e199
- (void).cxx_destruct;	// IMP=0x002000000017e2aa
- (id)bindValuesToKeepAlive;	// IMP=0x001000000017e29c
- (int)bindWithStatement:(struct sqlite3_stmt *)arg1 startingAtIndex:(int)arg2;	// IMP=0x001000000017e280
@property(readonly, nonatomic) NSData *sql;
- (id)initWithIdentifier:(id)arg1;	// IMP=0x001000000017e1fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

