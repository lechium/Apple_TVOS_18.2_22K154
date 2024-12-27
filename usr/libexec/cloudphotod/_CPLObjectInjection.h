//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableArray, NSString;

@interface _CPLObjectInjection : NSObject
{
    NSMutableArray *_bindValuesToKeepAlive;	// 8 = 0x8
    NSArray *_variables;	// 16 = 0x10
    id _object;	// 24 = 0x18
    NSData *_sql;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001a1719
@property(readonly, nonatomic) NSData *sql; // @synthesize sql=_sql;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
@property(readonly, nonatomic) NSArray *variables; // @synthesize variables=_variables;
- (id)bindValuesToKeepAlive;	// IMP=0x00100000001a16ed
- (int)bindWithStatement:(struct sqlite3_stmt *)arg1 startingAtIndex:(int)arg2;	// IMP=0x00100000001a1416
- (id)initWithVariables:(id)arg1 object:(id)arg2 sql:(id)arg3;	// IMP=0x00100000001a135e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

