//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface GTCallstackFrame : NSObject
{
    unsigned int _line;	// 8 = 0x8
    unsigned int _column;	// 12 = 0xc
    NSURL *_file;	// 16 = 0x10
    NSString *_functionName;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000014e9a
- (void).cxx_destruct;	// IMP=0x00000000000150a1
@property(copy, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(nonatomic) unsigned int column; // @synthesize column=_column;
@property(nonatomic) unsigned int line; // @synthesize line=_line;
@property(copy, nonatomic) NSURL *file; // @synthesize file=_file;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000014faf
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000014ea2

@end

