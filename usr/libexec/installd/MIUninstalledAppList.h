//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MIUninstalledAppList : NSObject
{
    NSObject<OS_dispatch_queue> *_listQueue;	// 8 = 0x8
    NSMutableDictionary *_uninstalledList;	// 16 = 0x10
}

+ (id)sharedList;	// IMP=0x004000000004f748
- (void).cxx_destruct;	// IMP=0x002000000005008a
@property(retain, nonatomic) NSMutableDictionary *uninstalledList; // @synthesize uninstalledList=_uninstalledList;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *listQueue; // @synthesize listQueue=_listQueue;
- (void)removeIdentifiers:(id)arg1;	// IMP=0x001000000004ff4a
- (void)addIdentifier:(id)arg1;	// IMP=0x001000000004fdf7
@property(readonly, nonatomic) NSDictionary *uninstalledDictionary;
- (void)preflightUninstalledMap;	// IMP=0x001000000004fb56
- (void)_onQueue_setUninstalledList:(id)arg1;	// IMP=0x001000000004f96d
- (id)_onQueue_uninstalledList;	// IMP=0x001000000004f85f
- (id)_mapPath;	// IMP=0x001000000004f7d5
- (id)init;	// IMP=0x001000000004f6c6

@end

