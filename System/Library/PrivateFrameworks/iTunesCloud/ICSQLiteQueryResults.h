//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICSQLiteStatement, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface ICSQLiteQueryResults : NSObject
{
    ICSQLiteStatement *_statement;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000016adc7
- (int)clearBindings;	// IMP=0x000000000016adb1
- (void)bindStringCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x000000000016ad9b
- (void)bindString:(id)arg1 atPosition:(int)arg2;	// IMP=0x000000000016ad85
- (void)bindDataCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x000000000016ad6f
- (void)bindData:(id)arg1 atPosition:(int)arg2;	// IMP=0x000000000016ad59
- (void)bindNumber:(id)arg1 atPosition:(int)arg2;	// IMP=0x000000000016ad43
- (void)bindNullAtPosition:(int)arg1;	// IMP=0x000000000016ad2d
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;	// IMP=0x000000000016ad17
- (void)bindInt:(int)arg1 atPosition:(int)arg2;	// IMP=0x000000000016ad01
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;	// IMP=0x000000000016aceb
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;	// IMP=0x000000000016acd5
@property(readonly, copy, nonatomic) NSString *firstStringValue;
@property(readonly, copy, nonatomic) NSNumber *firstNumberValue;
@property(readonly, nonatomic) long long firstInt64Value;
- (void)enumerateRowsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000016a837
- (id)initWithStatement:(id)arg1;	// IMP=0x000000000016a7cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

