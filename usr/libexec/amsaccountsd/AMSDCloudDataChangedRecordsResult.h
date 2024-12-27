//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AMSDCloudDataChangedRecordsResult : NSObject
{
    NSDictionary *_changedRecords;	// 8 = 0x8
    NSDictionary *_changeTokens;	// 16 = 0x10
    NSDictionary *_deletedRecords;	// 24 = 0x18
    NSDictionary *_errors;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000c07d
@property(readonly, nonatomic) NSDictionary *errors; // @synthesize errors=_errors;
@property(readonly, nonatomic) NSDictionary *deletedRecords; // @synthesize deletedRecords=_deletedRecords;
@property(readonly, nonatomic) NSDictionary *changeTokens; // @synthesize changeTokens=_changeTokens;
@property(readonly, nonatomic) NSDictionary *changedRecords; // @synthesize changedRecords=_changedRecords;
@property(readonly, nonatomic) NSString *hashedDescription;
- (id)initWithChangedRecords:(id)arg1 deletedRecords:(id)arg2 errors:(id)arg3 changeTokens:(id)arg4;	// IMP=0x001000000000bd9f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

