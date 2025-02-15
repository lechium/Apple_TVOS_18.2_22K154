//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface NSPageData : NSData
{
    NSData *data;	// 8 = 0x8
    NSDate *_originalFileModDate;	// 16 = 0x10
    NSString *_originalFilePath;	// 24 = 0x18
}

+ (long long)_umask;	// IMP=0x00600000008e7e64
+ (void)initialize;	// IMP=0x00600000008e7e3b
- (id)data;	// IMP=0x00000000008e869b
- (id)initWithDataNoCopy:(id)arg1;	// IMP=0x00000000008e8674
- (id)deserializer;	// IMP=0x00000000008e85fe
- (id)initFromSerializerStream:(id)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000008e8595
- (unsigned long long)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(_Bool)arg4 hardLinkPath:(id)arg5;	// IMP=0x00000000008e824a
- (void)dealloc;	// IMP=0x00000000008e81c1
- (id)_mappedFile;	// IMP=0x00000000008e81b0
- (id)initWithContentsOfMappedFile:(id)arg1 withFileAttributes:(id)arg2;	// IMP=0x00000000008e80d4
- (id)initWithContentsOfMappedFile:(id)arg1;	// IMP=0x00000000008e80c0
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x00000000008e801e
- (void)_setOriginalFileInfoFromFileAttributes:(id)arg1;	// IMP=0x00000000008e7fc0
- (id)initWithData:(id)arg1;	// IMP=0x00000000008e7f81
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000008e7f33
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000008e7ee5
- (id)init;	// IMP=0x00000000008e7eab
- (const void *)bytes;	// IMP=0x00000000008e7e8e
- (unsigned long long)length;	// IMP=0x00000000008e7e71
- (unsigned long long)writeFile:(id)arg1;	// IMP=0x00000000008e8727
- (unsigned long long)writeFd:(long long)arg1;	// IMP=0x00000000008e86b9

@end

