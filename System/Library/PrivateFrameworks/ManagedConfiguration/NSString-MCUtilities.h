//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (MCUtilities)
+ (id)MCMakeUUID;	// IMP=0x008000000001decd
- (unsigned int)MCHash;	// IMP=0x001000000001dd54
- (id)MCSHA256DigestWithSalt:(id)arg1;	// IMP=0x001000000001dc19
- (id)MCSHA256DigestWithPasscodeSalt;	// IMP=0x001000000001db93
- (id)MCOldStyleSafeFilenameHashWithExtension:(id)arg1;	// IMP=0x001000000001da43
- (id)MCOldStyleSafeFilenameHash;	// IMP=0x001000000001da2f
- (id)MCHashedIdentifier;	// IMP=0x001000000001d9dd
- (id)MCHashedFilenameWithPrefix:(id)arg1 extension:(id)arg2;	// IMP=0x001000000001d8e8
- (id)MCHashedFilenameWithExtension:(id)arg1;	// IMP=0x001000000001d8cc
- (id)MCRemoveAppExternalVersionIDParameter;	// IMP=0x001000000009bff4
- (id)MCAppendGreenteaSuffix;	// IMP=0x001000000009bf61
@end

