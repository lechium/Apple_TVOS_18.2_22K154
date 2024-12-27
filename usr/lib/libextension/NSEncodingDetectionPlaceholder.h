//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSEncodingDetectionPlaceholder : NSObject
{
    unsigned long long nsEncoding;	// 8 = 0x8
    unsigned int cfEncoding;	// 16 = 0x10
    NSString *string;	// 24 = 0x18
    char *bytes;	// 32 = 0x20
    unsigned long long bytesLength;	// 40 = 0x28
    char *bytesStart;	// 48 = 0x30
}

+ (id)placeholderForDetector:(id)arg1;	// IMP=0x0060000000738c4c
- (id)debugDescription;	// IMP=0x000000000073900f
- (void)dealloc;	// IMP=0x0000000000738bd8
@property(readonly) unsigned long long bytesLength;
@property(readonly) char *bytes;
@property(readonly) NSString *string;
@property(readonly) unsigned int cfEncoding;
@property(readonly) unsigned long long nsEncoding;

@end

