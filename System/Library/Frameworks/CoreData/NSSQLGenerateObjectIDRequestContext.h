//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSSQLModel;

__attribute__((visibility("hidden")))
@interface NSSQLGenerateObjectIDRequestContext
{
    NSDictionary *_entitiesAndCounts;	// 88 = 0x58
    NSSQLModel *_model;	// 96 = 0x60
}

- (_Bool)executeRequestCore:(id *)arg1;	// IMP=0x00000000002a99a6
- (_Bool)isWritingRequest;	// IMP=0x00000000002a999e
- (void)dealloc;	// IMP=0x00000000002a9933
- (id)initForEntitiesAndCounts:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;	// IMP=0x00000000002a98aa

@end

