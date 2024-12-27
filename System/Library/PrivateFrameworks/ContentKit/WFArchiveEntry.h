//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFArchiveEntry : NSObject
{
    struct archive_entry *_entry;	// 8 = 0x8
    CDUnknownBlockType _dataProvider;	// 16 = 0x10
}

+ (id)archiveEntriesWithTopLevelFileRepresentation:(id)arg1 usedFilenames:(id)arg2;	// IMP=0x00600000000a5dd3
- (void).cxx_destruct;	// IMP=0x00000000000a5dad
@property(readonly, nonatomic) CDUnknownBlockType dataProvider; // @synthesize dataProvider=_dataProvider;
@property(readonly, nonatomic) struct archive_entry *entry; // @synthesize entry=_entry;
- (void)dealloc;	// IMP=0x00000000000a5d5f
- (id)initWithFilename:(id)arg1 fileType:(unsigned short)arg2 filePermission:(unsigned short)arg3 fileSize:(long long)arg4 modificationDate:(id)arg5 creationDate:(id)arg6 dataProvider:(CDUnknownBlockType)arg7;	// IMP=0x00000000000a5ae7
- (id)initWithFilename:(id)arg1 fileRepresentation:(id)arg2;	// IMP=0x00000000000a58d1
- (id)initWithDirectoryName:(id)arg1;	// IMP=0x00000000000a5898

@end

