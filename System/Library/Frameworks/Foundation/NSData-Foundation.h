//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (Foundation)
+ (_Bool)_readBytesAndEncodingFromPath:(id)arg1 maxLength:(long long)arg2 encoding:(unsigned long long *)arg3 bytes:(void **)arg4 length:(long long *)arg5 didMap:(_Bool *)arg6 options:(unsigned long long)arg7 reportProgress:(_Bool)arg8 error:(id *)arg9;	// IMP=0x0000000000133990
+ (_Bool)_readBytesFromPath:(id)arg1 maxLength:(long long)arg2 bytes:(void **)arg3 length:(long long *)arg4 didMap:(_Bool *)arg5 options:(unsigned long long)arg6 reportProgress:(_Bool)arg7 error:(id *)arg8;	// IMP=0x00000000001338f0
+ (_Bool)_writeDataToPath:(id)arg1 data:(id)arg2 options:(unsigned long long)arg3 stringEncodingAttributeData:(id)arg4 reportProgress:(_Bool)arg5 error:(id *)arg6;	// IMP=0x0000000000473b50
+ (_Bool)_writeDataToPath:(id)arg1 data:(id)arg2 options:(unsigned long long)arg3 reportProgress:(_Bool)arg4 error:(id *)arg5;	// IMP=0x0000000000473ab0
+ (_Bool)_base64DecodingAlwaysSucceedsForOptions:(unsigned long long)arg1;	// IMP=0x000000000076e36b
+ (id)_newZeroingDataWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 deallocator:(CDUnknownBlockType)arg3;	// IMP=0x000000000076dc7a
+ (id)_newZeroingDataWithBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000076dc3e
+ (id)dataWithData:(id)arg1;	// IMP=0x000000000076d211
+ (id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000000076d1c9
+ (id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000076d186
+ (id)dataWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000076d143
+ (id)dataWithContentsOfMappedFile:(id)arg1;	// IMP=0x000000000076d114
+ (id)dataWithContentsOfURL:(id)arg1;	// IMP=0x000000000076d0e5
+ (id)dataWithContentsOfFile:(id)arg1;	// IMP=0x000000000076d0b6
+ (id)dataWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;	// IMP=0x000000000076d073
+ (id)dataWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000076d03f
+ (id)dataWithBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000076d00b
+ (id)data;	// IMP=0x000000000076cfe5
+ (id)_alloc;	// IMP=0x000000000076cf91
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000076cf70
+ (_Bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;	// IMP=0x000000000076bdba
- (_Bool)_providesConcreteBacking;	// IMP=0x001000000076f177
- (id)base64Encoding;	// IMP=0x001000000076f12d
- (id)initWithBase64Encoding:(id)arg1;	// IMP=0x001000000076f098
- (id)base64EncodedDataWithOptions:(unsigned long long)arg1;	// IMP=0x001000000076f04e
- (id)initWithBase64EncodedData:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x001000000076efbe
- (id)base64EncodedStringWithOptions:(unsigned long long)arg1;	// IMP=0x001000000076ef71
- (id)initWithBase64EncodedString:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x001000000076eee1
- (id)_base64EncodingAsString:(_Bool)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x001000000076e7bf
- (id)_initWithBase64EncodedObject:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x001000000076e38d
- (_Bool)_decodeBase64EncodedCharacterBuffer:(const char *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 buffer:(char *)arg4 bufferLength:(unsigned long long)arg5 state:(CDStruct_6243051c *)arg6;	// IMP=0x001000000076e0d6
- (id)_createDispatchData;	// IMP=0x001000000076dfd7
- (struct _NSRange)rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;	// IMP=0x001000000076dcbf
- (id)initWithData:(id)arg1;	// IMP=0x001000000076dbaa
- (id)initWithContentsOfFile:(id)arg1 error:(id *)arg2;	// IMP=0x001000000076db93
- (id)initWithContentsOfMappedFile:(id)arg1 error:(id *)arg2;	// IMP=0x001000000076db79
- (id)initWithContentsOfMappedFile:(id)arg1;	// IMP=0x001000000076dac9
- (id)initWithContentsOfURL:(id)arg1;	// IMP=0x001000000076d939
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000076d91d
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000076d901
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x001000000076d6a2
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x001000000076d531
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x001000000076d39e
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(_Bool)arg3 deallocator:(CDUnknownBlockType)arg4;	// IMP=0x001000000076d386
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 deallocator:(CDUnknownBlockType)arg3;	// IMP=0x001000000076d36e
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;	// IMP=0x001000000076d346
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x001000000076d31b
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x001000000076d2f0
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(_Bool)arg3 freeWhenDone:(_Bool)arg4 bytesAreVM:(_Bool)arg5;	// IMP=0x001000000076d2bc
- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2;	// IMP=0x001000000076cee4
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;	// IMP=0x001000000076ce49
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000076cdec
- (_Bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000076cc8f
- (_Bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000076cb50
- (id)subdataWithRange:(struct _NSRange)arg1;	// IMP=0x001000000076c8eb
- (_Bool)isEqualToData:(id)arg1;	// IMP=0x001000000076c4bc
- (_Bool)_isCompact;	// IMP=0x001000000076c382
- (_Bool)_isDispatchData;	// IMP=0x001000000076c37a
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;	// IMP=0x001000000076c131
- (void)enumerateByteRangesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000076c092
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x001000000076bf9e
- (void)getBytes:(void *)arg1;	// IMP=0x001000000076beb2
- (_Bool)_allowsDirectEncoding;	// IMP=0x001000000076be9d
- (id)replacementObjectForCoder:(id)arg1;	// IMP=0x001000000076be00
- (_Bool)_canReplaceWithDispatchDataForXPCCoder;	// IMP=0x001000000076bdc2
- (Class)classForCoder;	// IMP=0x001000000076bda9
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000076bae8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000076ba02
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000076b901
- (_Bool)_copyWillRetain;	// IMP=0x001000000076b8f9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000076b860
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000076b7f7
- (unsigned long long)hash;	// IMP=0x001000000076b783
- (id)_asciiDescription;	// IMP=0x001000000076b6a8
- (id)debugDescription;	// IMP=0x001000000076b3f8
- (id)description;	// IMP=0x001000000076b120
- (unsigned long long)_cfTypeID;	// IMP=0x001000000076b116
- (const void *)bytes;	// IMP=0x001000000076b0c4
- (unsigned long long)length;	// IMP=0x001000000076b072
- (id)_compressedDataUsingCompressionAlgorithm:(int)arg1 error:(id *)arg2;	// IMP=0x0010000000773ee9
- (id)_decompressedDataUsingCompressionAlgorithm:(int)arg1 error:(id *)arg2;	// IMP=0x0010000000773cbf
- (id)compressedDataUsingAlgorithm:(long long)arg1 error:(id *)arg2;	// IMP=0x0010000000773c91
- (id)decompressedDataUsingAlgorithm:(long long)arg1 error:(id *)arg2;	// IMP=0x0010000000773beb
- (void)_produceDataWithCompressionOperation:(int)arg1 algorithm:(int)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000007739e4
- (_Bool)_getBPlistMarker:(char *)arg1 offset:(unsigned long long *)arg2 trailer:(CDStruct_f10e9336 *)arg3;	// IMP=0x0010000000774415
- (id)_replaceCString:(const char *)arg1 withCString:(const char *)arg2;	// IMP=0x0010000000774f82
- (id)_web_parseRFC822HeaderFields;	// IMP=0x00100000007749d7
- (id)_web_guessedMIMETypeForExtension:(id)arg1;	// IMP=0x0010000000774952
- (id)_web_guessedMIMEType;	// IMP=0x00100000007746cf
- (id)_web_guessedMIMETypeForXML;	// IMP=0x0010000000774565
- (_Bool)isNSData__;	// IMP=0x00100000008334aa
- (id)replacementObjectForPortCoder:(id)arg1;	// IMP=0x00100000008f29c5
@end

