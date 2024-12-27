//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ML3DatabaseConnection, ML3DatabaseModule, ML3DatabaseTable, NSString;
@protocol ML3VirtualTableDelegate;

__attribute__((visibility("hidden")))
@interface ML3VirtualTable : NSObject
{
    NSString *_virtualTableName;	// 8 = 0x8
    ML3DatabaseModule *_module;	// 16 = 0x10
    id <ML3VirtualTableDelegate> _delegate;	// 24 = 0x18
    ML3DatabaseTable *_databaseTable;	// 32 = 0x20
    ML3DatabaseConnection *_connection;	// 40 = 0x28
    shared_ptr_c3e79333 _dataSource;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x0000000000195838
- (void).cxx_destruct;	// IMP=0x00000000001957e8
@property(readonly, nonatomic) ML3DatabaseConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) ML3DatabaseTable *databaseTable; // @synthesize databaseTable=_databaseTable;
@property(nonatomic) __weak id <ML3VirtualTableDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) shared_ptr_c3e79333 dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)unregister;	// IMP=0x0000000000195579
- (_Bool)registerWithConnection:(id)arg1;	// IMP=0x000000000019529d
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;	// IMP=0x000000000019521c
- (id)initWithDatabaseTable:(id)arg1;	// IMP=0x0000000000195098

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

