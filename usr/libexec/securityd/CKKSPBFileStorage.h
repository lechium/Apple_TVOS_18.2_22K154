//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol CKKSPBCodable;

@interface CKKSPBFileStorage : NSObject
{
    NSURL *_storageFile;	// 8 = 0x8
    Class _storageClass;	// 16 = 0x10
    id <CKKSPBCodable> _protobufStorage;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001a8730
@property(retain) id <CKKSPBCodable> protobufStorage; // @synthesize protobufStorage=_protobufStorage;
@property(retain) Class storageClass; // @synthesize storageClass=_storageClass;
@property(retain) NSURL *storageFile; // @synthesize storageFile=_storageFile;
- (void)setStorage:(id)arg1;	// IMP=0x00100000001a859c
- (id)storage;	// IMP=0x00100000001a8539
- (id)initWithStoragePath:(id)arg1 storageClass:(Class)arg2;	// IMP=0x00100000001a83b5

@end

