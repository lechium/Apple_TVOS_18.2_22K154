//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CKKSSQLWhereValue : NSObject
{
    unsigned long long _sqlOp;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

+ (id)op:(unsigned long long)arg1 value:(id)arg2;	// IMP=0x004000000002faf8
- (void).cxx_destruct;	// IMP=0x002000000002fae8
@property(retain) NSString *value; // @synthesize value=_value;
@property unsigned long long sqlOp; // @synthesize sqlOp=_sqlOp;
- (id)initWithOperation:(unsigned long long)arg1 value:(id)arg2;	// IMP=0x001000000002fa3a

@end

