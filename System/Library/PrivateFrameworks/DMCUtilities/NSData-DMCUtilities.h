//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (DMCUtilities)
+ (id)_DMCCreateFolderExistError;	// IMP=0x008000000000a852
+ (id)DMCDataWithCFData:(struct __CFData *)arg1;	// IMP=0x008000000000a80b
- (_Bool)DMCAtomicWriteToURL:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000a7b2
- (_Bool)DMCAtomicWriteToPath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000a277
- (id)DMCSHA256Hash;	// IMP=0x001000000000a1d7
- (id)DMCHexString;	// IMP=0x001000000000a0e7
@end

