//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (SecureBackup)
- (void)recordIDAndClientMetadataForSilentAttemptFromRecords:(id)arg1 passphraseLength:(unsigned long long)arg2 platform:(int)arg3 sosCompatibilityModeEnabled:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000000b8d6
- (long long)compare:(id)arg1 with:(id)arg2;	// IMP=0x001000000000b199
- (id)keysOfEntriesContainingObject:(id)arg1;	// IMP=0x001000000000b0db
- (id)base64EncodedStringFromDict;	// IMP=0x001000000000d0a7
@end

