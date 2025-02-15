//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_nw_array, OS_nw_dictionary;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_storage : NSObject
{
    char *path;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *queue;	// 16 = 0x10
    struct sqlite3 *db;	// 24 = 0x18
    struct sqlite3_stmt *load_stmt;	// 32 = 0x20
    struct sqlite3_stmt *save_stmt;	// 40 = 0x28
    struct sqlite3_stmt *delete_stmt;	// 48 = 0x30
    NSObject<OS_nw_dictionary> *providers;	// 56 = 0x38
    NSObject<OS_nw_dictionary> *canvas_cache;	// 64 = 0x40
    NSObject<OS_nw_array> *flush_queue;	// 72 = 0x48
    struct nw_storage_chain chain;	// 80 = 0x50
    unsigned int flush_scheduled:1;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000781570
- (void)dealloc;	// IMP=0x00000000007814c0
- (id)init;	// IMP=0x0000000000781040

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

