//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MigratorConfigurationStore, NSMutableArray;
@protocol OS_dispatch_queue;

@interface Migrator : NSObject
{
    MigratorConfigurationStore *_configurationStore;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSMutableArray *_migrations;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001539ce
- (void)_handleMonitorStateDidChangeNotification:(id)arg1;	// IMP=0x001000000015366e
- (void)_handleNetworkStateDidChangeNotification:(id)arg1;	// IMP=0x0010000000152e91
- (void)dealloc;	// IMP=0x0010000000152a4f
- (id)init;	// IMP=0x001000000015241f

@end

