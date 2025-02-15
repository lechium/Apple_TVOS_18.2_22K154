//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol LASecureStorageService, OS_dispatch_queue;

@interface DTOKVStore : NSObject
{
    id <LASecureStorageService> _storage;	// 8 = 0x8
    id <LASecureStorageService> _uncheckedStorage;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000002fae
- (long long)_storageKeyForKVSKey:(long long)arg1;	// IMP=0x0010000000002f8d
- (void)_setValue:(id)arg1 forKey:(long long)arg2 contextUUID:(id)arg3 connection:(id)arg4 storage:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000002cba
- (void)_valueForKey:(long long)arg1 connection:(id)arg2 storage:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000002853
- (void)processWriteRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000270f
- (void)setValue:(id)arg1 forKey:(long long)arg2 contextUUID:(id)arg3 connection:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000002529
- (void)setValue:(id)arg1 forKey:(long long)arg2 contextUUID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000023dd
- (void)setValue:(id)arg1 forKey:(long long)arg2 connection:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000002247
- (void)setValue:(id)arg1 forKey:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000021b1
- (void)processReadRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000020b8
- (void)valueForKey:(long long)arg1 connection:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000001f7c
- (void)valueForKey:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001f06
- (id)initWithWorkQueue:(id)arg1;	// IMP=0x0010000000001dcc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

