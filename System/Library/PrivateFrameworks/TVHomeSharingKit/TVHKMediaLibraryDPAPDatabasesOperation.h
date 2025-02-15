//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TVHKMediaLibraryDPAPDatabasesOperation
{
    _Bool _importingDatabase;	// 8 = 0x8
    unsigned int _databaseID;	// 12 = 0xc
    unsigned long long _databasePersistentID;	// 16 = 0x10
}

@property(nonatomic, getter=isImportingDatabase) _Bool importingDatabase; // @synthesize importingDatabase=_importingDatabase;
@property(nonatomic) unsigned long long databasePersistentID; // @synthesize databasePersistentID=_databasePersistentID;
@property(nonatomic) unsigned int databaseID; // @synthesize databaseID=_databaseID;
- (void)_handleResponse:(id)arg1;	// IMP=0x000000000005f977
- (id)initWithSessionState:(id)arg1 requestSession:(id)arg2;	// IMP=0x000000000005f8a0
- (id)initWithRequest:(id)arg1 requestSession:(id)arg2;	// IMP=0x000000000005f831

@end

