//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _CFPasteboardEntry : NSObject
{
    struct __CFString *_flavorName;	// 8 = 0x8
    struct __CFUUID *_uuid;	// 16 = 0x10
    struct __CFData *_data;	// 24 = 0x18
    NSObject<OS_xpc_object> *_xpcData;	// 32 = 0x20
    unsigned long long _dataFlags;	// 40 = 0x28
    CDUnknownBlockType _promisor;	// 48 = 0x30
    CDUnknownBlockType _asyncPromisor;	// 56 = 0x38
    NSObject<OS_dispatch_group> *_promiseGroup;	// 64 = 0x40
    NSObject<OS_xpc_object> *_promisorConnection;	// 72 = 0x48
    struct os_unfair_lock_s _lock;	// 80 = 0x50
    int _itemIdentifier;	// 84 = 0x54
    unsigned char _isHidden;	// 88 = 0x58
    unsigned char _isPendingFlush;	// 89 = 0x59
    unsigned char _extensionConsumed;	// 90 = 0x5a
    _Atomic unsigned char _promiseState;	// 91 = 0x5b
}

@property unsigned char extensionConsumed; // @synthesize extensionConsumed=_extensionConsumed;
@property unsigned char isPendingFlush; // @synthesize isPendingFlush=_isPendingFlush;
@property(getter=isHidden) unsigned char hidden; // @synthesize hidden=_isHidden;
@property(readonly) struct __CFUUID *promiseUUID; // @synthesize promiseUUID=_uuid;
@property(readonly) int itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property unsigned long long dataFlags; // @synthesize dataFlags=_dataFlags;
@property(readonly) struct __CFString *flavorName; // @synthesize flavorName=_flavorName;
- (CDUnknownBlockType)requestDataForPasteboard:(struct __CFPasteboard *)arg1 generation:(long long)arg2 immediatelyAvailableResult:(CDStruct_55991ab6 *)arg3;	// IMP=0x0000000000073867
- (void)resolveClientPromisedDataWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000073548
- (unsigned char)resolveLocalPromisedData;	// IMP=0x000000000007349f
- (void)promiseDataWithBlock:(CDUnknownBlockType)arg1 forPasteboard:(struct __CFPasteboard *)arg2 generation:(long long)arg3;	// IMP=0x0000000000073375
- (id)createXPCObjectWithMetadataOnly:(unsigned char)arg1;	// IMP=0x000000000007323c
- (id)initFromXPCObject:(id)arg1 fromConnection:(id)arg2;	// IMP=0x0000000000072e88
@property(readonly) unsigned char promisorExistsInCurrentProcess;
- (void)_setLocalPromiseState:(unsigned char)arg1;	// IMP=0x0000000000072cca
@property(readonly) unsigned char hasLocalPromise;
- (struct __CFData *)createDataAndReturnError:(int *)arg1;	// IMP=0x0000000000072b75
- (id)_createXPCData;	// IMP=0x0000000000072b20
- (void)setData:(struct __CFData *)arg1;	// IMP=0x0000000000072a8a
@property(readonly) unsigned char hasData;
- (id)description;	// IMP=0x00000000000728eb
- (void)dealloc;	// IMP=0x000000000007281b
- (id)initWithFlavorName:(struct __CFString *)arg1 itemIdentifier:(int)arg2;	// IMP=0x000000000007277f
- (void)promiseDataWithFetchOperation:(id)arg1;	// IMP=0x000000000010e8c2

@end

