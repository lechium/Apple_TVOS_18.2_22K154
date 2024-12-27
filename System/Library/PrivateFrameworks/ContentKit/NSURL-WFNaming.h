//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (WFNaming)
+ (id)dc_queryStringWithQueryDictionary:(id)arg1 addingPercentEscapes:(_Bool)arg2;	// IMP=0x00100000000b853e
+ (id)dc_queryStringWithQueryDictionary:(id)arg1;	// IMP=0x00100000000b8527
+ (id)dc_dictionaryFromQueryString:(id)arg1;	// IMP=0x00100000000b82fd
+ (id)dc_queryItemsFromQueryDictionary:(id)arg1;	// IMP=0x00100000000b7fff
+ (id)dc_queryItemsFromQueryString:(id)arg1;	// IMP=0x00100000000b7f9e
+ (id)wf_savedShortcutStatesURL;	// IMP=0x00100000000c94dc
+ (id)wf_shortcutsDirectoryURL;	// IMP=0x00100000000c9480
+ (id)wf_realLibraryDirectoryURL;	// IMP=0x00100000000c9424
+ (id)wf_realHomeDirectoryURL;	// IMP=0x00100000000c93f4
@property(readonly, copy, nonatomic) NSString *wfName;
- (_Bool)dc_matchesHost:(id)arg1;	// IMP=0x00100000000b7eec
- (id)dc_fragmentQueryDictionary;	// IMP=0x00100000000b7e32
- (id)dc_queryDictionary;	// IMP=0x00100000000b7dcf
- (id)wf_localizedDisplayName;	// IMP=0x00100000000bc6db
- (id)wf_displayPath;	// IMP=0x00100000000bc6d3
- (id)wf_displayPathComponents;	// IMP=0x00100000000bc6cb
- (_Bool)wf_fileIsShortcutsOwned;	// IMP=0x00100000000c9248
- (_Bool)wf_fileIsOnSameVolumeAsURL:(id)arg1;	// IMP=0x00100000000c90e7
- (_Bool)wf_proposedFileIsContainedByDirectoryAtURL:(id)arg1;	// IMP=0x00100000000c9028
- (_Bool)wf_isContainedByDirectoryAtURL:(id)arg1;	// IMP=0x00100000000c900f
- (id)wf_relativePathFromURL:(id)arg1;	// IMP=0x00100000000c8e68
- (long long)wf_relationshipToDirectoryAtURL:(id)arg1;	// IMP=0x00100000000c8dc9
- (id)wf_fileSize;	// IMP=0x00100000000c8cf5
- (_Bool)wf_fileHasExtendedAttribute:(id)arg1;	// IMP=0x00100000000c8bae
- (_Bool)wf_sandboxAllowsWritingFileWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x00100000000c8b95
- (_Bool)wf_sandboxAllowsReadingFileWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x00100000000c8b7c
- (_Bool)wf_sandboxAllowsWritingFile;	// IMP=0x00100000000c8b63
- (_Bool)wf_sandboxAllowsReadingFile;	// IMP=0x00100000000c8b4a
- (_Bool)wf_sandboxAllowsOperation:(const char *)arg1 withAuditToken:(CDStruct_6ad76789)arg2;	// IMP=0x00100000000c8aea
- (_Bool)wf_sandboxAllowsOperation:(const char *)arg1;	// IMP=0x00100000000c8a70
- (_Bool)wf_fileIsDirectory;	// IMP=0x00100000000c89de
- (_Bool)wf_fileIsWritable;	// IMP=0x00100000000c8963
- (_Bool)wf_fileIsReadable;	// IMP=0x00100000000c88e8
- (_Bool)wf_fileExists;	// IMP=0x00100000000c886d
@end

