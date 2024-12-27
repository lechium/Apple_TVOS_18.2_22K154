//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "INImage.h"

@class NSData, NSUUID;

__attribute__((visibility("hidden")))
@interface _INDataImage : INImage
{
    NSUUID *_sha256HashUUID;	// 8 = 0x8
    struct os_unfair_lock_s _hashLock;	// 16 = 0x10
    NSData *_imageData;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000001445b7
- (void).cxx_destruct;	// IMP=0x0000000000144586
@property(readonly, copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001444cb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000014444e
- (id)_sha256HashUUID;	// IMP=0x0000000000144333
- (_Bool)_isEligibleForProxying;	// IMP=0x000000000014432b
- (void)_setImageData:(id)arg1;	// IMP=0x00000000001442b1
- (id)_imageData;	// IMP=0x000000000014429f
- (id)_copyWithSubclass:(Class)arg1;	// IMP=0x00000000001441d2
- (id)_dictionaryRepresentation;	// IMP=0x000000000014404a
- (id)_identifier;	// IMP=0x0000000000143ffa
- (void)_retrieveImageDataWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000143fe1
- (_Bool)_requiresRetrieval;	// IMP=0x0000000000143fae
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000143efd
- (id)initWithImageData:(id)arg1;	// IMP=0x0000000000143e7e
- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002ae9f1

@end

