//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CADPooledConnection : NSObject
{
    struct CalDatabase *_database;	// 8 = 0x8
    unsigned long long _lastUsedTimestamp;	// 16 = 0x10
}

@property(nonatomic) unsigned long long lastUsedTimestamp; // @synthesize lastUsedTimestamp=_lastUsedTimestamp;
@property(nonatomic) struct CalDatabase *database; // @synthesize database=_database;
- (void)dealloc;	// IMP=0x000000000003bdd8
- (id)initWithDatabase:(struct CalDatabase *)arg1;	// IMP=0x000000000003bd89

@end

