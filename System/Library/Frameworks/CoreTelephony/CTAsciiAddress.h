//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CTAsciiAddress : NSObject
{
    NSString *_address;	// 8 = 0x8
}

+ (id)asciiAddressWithString:(id)arg1;	// IMP=0x001000000017e7ad
- (void).cxx_destruct;	// IMP=0x000000000017e8d2
@property(readonly) NSString *address; // @synthesize address=_address;
- (id)canonicalFormat;	// IMP=0x000000000017e8b0
- (id)encodedString;	// IMP=0x000000000017e8a2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017e869
- (id)initWithAddress:(id)arg1;	// IMP=0x000000000017e7f6

@end

