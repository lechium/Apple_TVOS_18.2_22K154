//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MSOID;

@interface MSCMSTimestampAttributeInternal : NSObject
{
    MISSING_TYPE *attributeType;	// 8 = 0x8
    MISSING_TYPE *tstinfo;	// 16 = 0x10
    MISSING_TYPE *signedData;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000000450a0
- (id)init;	// IMP=0x0000000000045bf0
- (id)timestampToken;	// IMP=0x0000000000045b30
- (id)encodeAttributeWithError:(id *)arg1;	// IMP=0x0000000000045a50
- (_Bool)verifyTimestamp:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000045950
- (id)initWithTimestampToken:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000456e0
- (id)initWithAttribute:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000045450
- (void)dealloc;	// IMP=0x0000000000045020
@property(nonatomic, retain) MSOID *attributeType; // @synthesize attributeType;

@end

