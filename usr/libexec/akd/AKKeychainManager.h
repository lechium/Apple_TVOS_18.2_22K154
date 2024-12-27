//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AKKeychainManager : NSObject
{
    NSObject<OS_dispatch_queue> *_keychainQueue;	// 8 = 0x8
}

+ (id)sharedManager;	// IMP=0x00400000000bd5b9
- (void).cxx_destruct;	// IMP=0x00200000000be4d0
- (_Bool)_unsafe_deleteKeychainItemWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000be469
- (id)_unsafe_fetchKeychainItemsWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000be08e
- (id)_unsafe_fetchKeychainItemWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000bdec3
- (_Bool)_unsafe_updateKeychainItemWithDescriptor:(id)arg1 newItem:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000bdddd
- (_Bool)_unsafe_addKeychainItem:(id)arg1 shouldAttemptUpdate:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000000bdcfa
- (void)deleteKeychainItemWithDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000bdbe2
- (void)fetchKeychainItemsWithDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000bdabb
- (void)fetchKeychainItemWithDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000bd994
- (void)updateKeychainItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000bd845
- (void)addOrUpdateKeychainItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000bd728
- (void)addKeychainItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000bd60e
- (id)init;	// IMP=0x00100000000bd561

@end

