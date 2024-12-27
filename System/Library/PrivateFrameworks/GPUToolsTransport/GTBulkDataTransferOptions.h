//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GTBulkDataTransferOptions : NSObject
{
    unsigned long long _chunkSize;	// 8 = 0x8
    long long _compressionAlgorithm;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000974c
@property(nonatomic) long long compressionAlgorithm; // @synthesize compressionAlgorithm=_compressionAlgorithm;
@property(nonatomic) unsigned long long chunkSize; // @synthesize chunkSize=_chunkSize;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000009899
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000009828
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000009798
- (id)init;	// IMP=0x0000000000009754

@end

