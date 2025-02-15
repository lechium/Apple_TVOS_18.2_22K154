//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _PFExternalReferenceData : NSData
{
    _Atomic id _originalData;	// 8 = 0x8
    void *_bytesPtrForStore;	// 16 = 0x10
    unsigned long long _bytesLengthForStore;	// 24 = 0x18
    void *_bytesPtrForExternalReference;	// 32 = 0x20
    unsigned long long _bytesLengthForExternalReference;	// 40 = 0x28
    NSString *_externalReferenceLocation;	// 48 = 0x30
    NSString *_safeguardLocation;	// 56 = 0x38
    id _ubiquitousLocation;	// 64 = 0x40
    struct __externalDataFlags {
        unsigned int _cleanupOnDealloc:1;
        unsigned int _dataProtectionLevel:3;
        unsigned int _createdByUbiquityImport:1;
        unsigned int _reserved:3;
    } _externalDataFlags;	// 72 = 0x48
    _Atomic _Bool _isStoredExternally;	// 76 = 0x4c
    _Atomic _Bool _hasMappedData;	// 77 = 0x4d
    _Atomic _Bool _isStoredUbiquitously;	// 78 = 0x4e
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x001000000024cb5e
- (_Bool)_createdByUbiquityImport;	// IMP=0x000000000024d96d
- (_Bool)isEqualToData:(id)arg1;	// IMP=0x000000000024d89c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000024d854
- (id)subdataWithRange:(struct _NSRange)arg1;	// IMP=0x000000000024d5f2
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000024d486
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000024d46f
- (void)doCleanupOnDealloc;	// IMP=0x000000000024d45e
- (id)UUID;	// IMP=0x000000000024d441
- (id)databaseValue;	// IMP=0x000000000024d40f
- (id)externalReferenceLocationString;	// IMP=0x000000000024d3f1
- (int)preferredProtectionLevel;	// IMP=0x000000000024d3dc
- (id)_safeguardLocationString;	// IMP=0x000000000024d3be
- (const char *)_safeguardLocation;	// IMP=0x000000000024d3a1
- (const char *)_externalReferenceLocation;	// IMP=0x000000000024d384
- (unsigned long long)_bytesLengthForExternalReference;	// IMP=0x000000000024d373
- (const void *)_bytesPtrForExternalReference;	// IMP=0x000000000024d369
- (unsigned long long)_bytesLengthForStore;	// IMP=0x000000000024d358
- (const void *)_bytesPtrForStore;	// IMP=0x000000000024d347
- (unsigned long long)length;	// IMP=0x000000000024d335
- (const void *)bytes;	// IMP=0x000000000024d32b
- (id)description;	// IMP=0x000000000024d2b5
- (_Bool)hasExternalReferenceContent;	// IMP=0x000000000024d2a3
- (void)_deleteExternalReferenceFromPermanentLocation;	// IMP=0x000000000024d27f
- (void)_moveExternalReferenceToPermanentLocation;	// IMP=0x000000000024d1eb
- (void)_writeExternalReferenceToInterimLocation;	// IMP=0x000000000024d1b9
- (void)_setBytesForExternalReference:(const void *)arg1;	// IMP=0x000000000024cd27
- (id)_originalData;	// IMP=0x000000000024cd16
- (id)mutableCopy;	// IMP=0x000000000024ccc2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000024ccb0
- (id)copy;	// IMP=0x000000000024cca5
- (void)dealloc;	// IMP=0x000000000024cb6f
- (Class)classForCoder;	// IMP=0x000000000024cb4d
- (id)initWithStoreBytes:(const void *)arg1 length:(unsigned long long)arg2 externalLocation:(id)arg3 safeguardLocation:(id)arg4 protectionLevel:(int)arg5;	// IMP=0x000000000024c9cc
- (id)initForExternalLocation:(id)arg1 safeguardLocation:(id)arg2 data:(id)arg3 protectionLevel:(int)arg4;	// IMP=0x000000000024c787
- (id)initForUbiquityDictionary:(id)arg1 store:(id)arg2;	// IMP=0x000000000024c42f

@end

