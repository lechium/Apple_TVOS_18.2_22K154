//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IXPromisedInMemoryDataSeed, NSData;

@interface IXSPromisedInMemoryData
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000046e17
@property(readonly, copy, nonatomic) NSData *data;
- (id)updatedPromiseWithData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000472a8
- (id)initWithSeed:(id)arg1 data:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000046e1f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000046d92
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000046d63

// Remaining properties
@property(readonly, copy, nonatomic) IXPromisedInMemoryDataSeed *clientSeed; // @dynamic clientSeed;
@property(retain, nonatomic) IXPromisedInMemoryDataSeed *seed; // @dynamic seed;

@end

