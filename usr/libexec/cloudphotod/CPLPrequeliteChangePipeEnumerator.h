//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLPrequeliteStore, CPLPrequeliteTable, CPLPrequeliteVariable;

@interface CPLPrequeliteChangePipeEnumerator : NSObject
{
    CPLPrequeliteVariable *_pullGenerationVar;	// 8 = 0x8
    _Bool _hasAlterationFlags;	// 16 = 0x10
    CPLPrequeliteStore *_store;	// 24 = 0x18
    CPLPrequeliteTable *_table;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000186627
@property(readonly, nonatomic) CPLPrequeliteTable *table; // @synthesize table=_table;
@property(readonly, nonatomic) CPLPrequeliteStore *store; // @synthesize store=_store;
- (void)enumerateChangesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000186496
@property(readonly, nonatomic) _Bool hasChanges;
- (id)initWithStore:(id)arg1 table:(id)arg2;	// IMP=0x0010000000186356

@end

