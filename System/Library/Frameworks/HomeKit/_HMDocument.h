//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface _HMDocument : NSObject
{
    NSString *_stringValue;	// 8 = 0x8
    NSAttributedString *_attributedString;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002ad12a
@property(readonly, copy) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(readonly, copy) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002ad0f7
- (id)description;	// IMP=0x00000000002ad0e5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002ad00a
- (unsigned long long)hash;	// IMP=0x00000000002acfc6
- (id)initWithURL:(id)arg1 fileManager:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002acddf
- (id)initWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002acd5b
- (id)initWithData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002acc70
- (id)initWithString:(id)arg1;	// IMP=0x00000000002acbd2

@end

