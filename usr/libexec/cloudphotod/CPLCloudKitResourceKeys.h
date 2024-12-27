//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CPLCloudKitResourceKeys : NSObject
{
    unsigned long long _resourceType;	// 8 = 0x8
    NSString *_prefix;	// 16 = 0x10
    NSString *_fileSizeKey;	// 24 = 0x18
    NSString *_fileUTIKey;	// 32 = 0x20
    NSString *_widthKey;	// 40 = 0x28
    NSString *_heightKey;	// 48 = 0x30
    NSString *_fingerprintKey;	// 56 = 0x38
    NSString *_stableHashKey;	// 64 = 0x40
    NSString *_encryptedInfoKey;	// 72 = 0x48
    NSString *_expungedStateKey;	// 80 = 0x50
    NSString *_expungedDateKey;	// 88 = 0x58
    NSString *_resourceKey;	// 96 = 0x60
    NSString *_dynamicKey;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x002000000009d19b
- (id)_allKeys;	// IMP=0x001000000009cf8e
- (id)_allKeysWithoutExpungedState;	// IMP=0x001000000009cefa
- (id)redactedDescription;	// IMP=0x001000000009cee8
- (id)description;	// IMP=0x001000000009ce6b
- (id)initWithPrefix:(id)arg1 resourceType:(unsigned long long)arg2;	// IMP=0x001000000009cc2a

@end

