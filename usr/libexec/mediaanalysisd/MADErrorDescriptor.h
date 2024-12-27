//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MADErrorDescriptor : NSObject
{
    unsigned long long _errorCode;	// 8 = 0x8
    unsigned long long _count;	// 16 = 0x10
    unsigned long long _errorLine;	// 24 = 0x18
}

@property unsigned long long errorLine; // @synthesize errorLine=_errorLine;
@property unsigned long long count; // @synthesize count=_count;
@property unsigned long long errorCode; // @synthesize errorCode=_errorCode;
- (long long)compareByCount:(id)arg1;	// IMP=0x00100000000895db
- (id)initWithErrorCode:(unsigned long long)arg1 count:(unsigned long long)arg2 errorLine:(unsigned long long)arg3;	// IMP=0x0010000000089588

@end

