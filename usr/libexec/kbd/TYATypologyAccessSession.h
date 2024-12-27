//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDirectoryEnumerator;
@protocol TITypologyPreferences;

@interface TYATypologyAccessSession : NSObject
{
    id <TITypologyPreferences> _typologyPreferences;	// 8 = 0x8
    NSDirectoryEnumerator *_directoryEnumerator;	// 16 = 0x10
    unsigned long long _accessMode;	// 24 = 0x18
    CDStruct_4c969caf _auditToken;	// 32 = 0x20
}

+ (id)_safeFilenameWithName:(id)arg1;	// IMP=0x00200000000019f8
- (void).cxx_destruct;	// IMP=0x0020000000002585
@property(nonatomic) unsigned long long accessMode; // @synthesize accessMode=_accessMode;
@property(retain, nonatomic) NSDirectoryEnumerator *directoryEnumerator; // @synthesize directoryEnumerator=_directoryEnumerator;
@property(retain, nonatomic) id <TITypologyPreferences> typologyPreferences; // @synthesize typologyPreferences=_typologyPreferences;
@property(nonatomic) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
- (void)writeData:(id)arg1 toTypologyFileWithName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000021a1
- (void)setTypologyAccessMode:(unsigned long long)arg1;	// IMP=0x00100000000020f3
- (void)removeTypologyFileWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001e52
- (void)nextTypologyURL:(CDUnknownBlockType)arg1;	// IMP=0x0010000000001bdb
- (void)startEnumeration;	// IMP=0x001000000000197c
- (id)_issueSandboxExtensionForURL:(id)arg1;	// IMP=0x0010000000001724
- (void)_initializeEnumerator;	// IMP=0x0010000000001360
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x00100000000012a2

@end

