//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSURL;

@interface IXPromisedOutOfBandStreamingZipTransferSeed
{
    unsigned long long _archiveBytesConsumed;	// 8 = 0x8
    unsigned long long _archiveSizeBytes;	// 16 = 0x10
    NSURL *_extractionPath;	// 24 = 0x18
    NSDictionary *_szOptions;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000004804d
- (void).cxx_destruct;	// IMP=0x00200000000481cb
@property(copy, nonatomic) NSDictionary *szOptions; // @synthesize szOptions=_szOptions;
@property(retain, nonatomic) NSURL *extractionPath; // @synthesize extractionPath=_extractionPath;
@property(nonatomic) unsigned long long archiveSizeBytes; // @synthesize archiveSizeBytes=_archiveSizeBytes;
@property(nonatomic) unsigned long long archiveBytesConsumed; // @synthesize archiveBytesConsumed=_archiveBytesConsumed;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000048055
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000047ede
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000047d65

@end

