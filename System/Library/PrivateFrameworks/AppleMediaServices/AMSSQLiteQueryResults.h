//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSSQLiteStatement, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface AMSSQLiteQueryResults : NSObject
{
    AMSSQLiteStatement *_statement;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000004ca88f
- (int)clearBindings;	// IMP=0x00000000004ca879
- (void)bindURL:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004ca863
- (void)bindStringCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004ca84d
- (void)bindString:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004ca837
- (void)bindNumber:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004ca821
- (void)bindNullableString:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004ca80b
- (void)bindNullAtPosition:(int)arg1;	// IMP=0x00000000004ca7f5
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;	// IMP=0x00000000004ca7df
- (void)bindInt:(int)arg1 atPosition:(int)arg2;	// IMP=0x00000000004ca7c9
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;	// IMP=0x00000000004ca7b3
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;	// IMP=0x00000000004ca79d
- (void)bindDictionary:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004ca787
- (void)bindDate:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004ca771
- (void)bindDataCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004ca75b
- (void)bindData:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004ca745
- (void)bindArray:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004ca72f
@property(readonly, nonatomic) _Bool hasRows;
@property(readonly, copy, nonatomic) NSNumber *firstNumberValue;
@property(readonly, nonatomic) long long firstInt64Value;
- (void)enumerateRowsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000004ca2ae
- (id)initWithStatement:(id)arg1;	// IMP=0x00000000004ca243

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

