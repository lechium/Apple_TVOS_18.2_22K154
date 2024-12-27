//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (Foundation)
+ (id)newWithContentsOf:(id)arg1 immutable:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00500000007806c5
+ (id)newWithContentsOf:(id)arg1 immutable:(_Bool)arg2;	// IMP=0x0050000000780528
+ (id)dictionaryWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x00500000007804f4
+ (id)dictionaryWithContentsOfURL:(id)arg1;	// IMP=0x00500000007804c5
+ (id)dictionaryWithContentsOfFile:(id)arg1;	// IMP=0x0050000000780496
+ (_Bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;	// IMP=0x005000000077ff5e
+ (_Bool)supportsSecureCoding;	// IMP=0x005000000077f835
- (id)__swift_objectForKeyedSubscript:(id)arg1;	// IMP=0x0010000000437640
- (id)__swiftInitWithDictionary_NSDictionary:(id)arg1;	// IMP=0x0010000000437c80
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x00100000007808e1
- (id)initWithContentsOfURL:(id)arg1;	// IMP=0x00100000007808aa
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x0010000000780873
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000780393
- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2;	// IMP=0x0010000000780290
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;	// IMP=0x0010000000780139
- (id)_stringToWrite;	// IMP=0x00100000007800df
- (id)descriptionInStringsFileFormat;	// IMP=0x001000000077ff66
- (Class)classForCoder;	// IMP=0x001000000077ff4d
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000077f83d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000077f2df
- (id)_web_objectForMIMEType:(id)arg1;	// IMP=0x0010000000780b22
- (id)_web_numberForKey:(id)arg1;	// IMP=0x0010000000780af2
- (id)_web_stringForKey:(id)arg1;	// IMP=0x0010000000780ac2
- (int)_web_intForKey:(id)arg1;	// IMP=0x0010000000780a97
- (id)fileGroupOwnerAccountID;	// IMP=0x00100000007932c3
- (id)fileOwnerAccountID;	// IMP=0x00100000007932aa
- (id)fileCreationDate;	// IMP=0x0010000000793291
- (_Bool)fileIsAppendOnly;	// IMP=0x001000000079325f
- (_Bool)fileIsImmutable;	// IMP=0x001000000079322d
- (unsigned int)fileHFSTypeCode;	// IMP=0x00100000007931fb
- (unsigned int)fileHFSCreatorCode;	// IMP=0x00100000007931c9
- (_Bool)fileExtensionHidden;	// IMP=0x0010000000793197
- (unsigned long long)fileSystemFileNumber;	// IMP=0x0010000000793165
- (long long)fileSystemNumber;	// IMP=0x0010000000793133
- (unsigned long long)fileGroupOwnerAccountNumber;	// IMP=0x001000000079312b
- (id)fileGroupOwnerAccountName;	// IMP=0x0010000000793112
- (unsigned long long)fileOwnerAccountNumber;	// IMP=0x001000000079310a
- (id)fileOwnerAccountName;	// IMP=0x00100000007930f1
- (unsigned long long)filePosixPermissions;	// IMP=0x00100000007930bc
- (id)fileType;	// IMP=0x00100000007930a3
- (id)fileModificationDate;	// IMP=0x001000000079308a
- (unsigned long long)fileSize;	// IMP=0x0010000000793058
- (id)valueForKeyPath:(id)arg1;	// IMP=0x00100000007c5600
- (id)valueForKey:(id)arg1;	// IMP=0x00100000007c5508
- (id)replacementObjectForPortCoder:(id)arg1;	// IMP=0x00100000008f29d7
@end

