//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SDActivityEncryptionKey
{
}

+ (id)newEncryptionKey;	// IMP=0x00400000000fecb4
- (unsigned char)getTagWhileEncryptingBytesInPlace:(unsigned char [10])arg1 counterValue:(unsigned char [2])arg2 forAdvertisementWithVersion:(unsigned char)arg3;	// IMP=0x00400000000fee8e
- (void)prepareForNewEncryptionRequest;	// IMP=0x00100000000fee31

@end

