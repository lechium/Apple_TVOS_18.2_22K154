//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PCSCKKSOutOfBandFetchCache : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct _PCSIdentitySetData *_identities;	// 16 = 0x10
    NSMutableSet *_currentItemNegativeCache;	// 24 = 0x18
    NSMutableDictionary *_identityNegativeCache;	// 32 = 0x20
}

+ (id)cache;	// IMP=0x006000000003dc61
- (void).cxx_destruct;	// IMP=0x000000000003ec88
@property(retain) NSMutableDictionary *identityNegativeCache; // @synthesize identityNegativeCache=_identityNegativeCache;
@property(retain) NSMutableSet *currentItemNegativeCache; // @synthesize currentItemNegativeCache=_currentItemNegativeCache;
@property(readonly) struct _PCSIdentitySetData *identities; // @synthesize identities=_identities;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)cachePCSIdentityFetchResult:(struct _PCSIdentitySetData *)arg1 notFound:(id)arg2 serviceID:(unsigned int)arg3;	// IMP=0x000000000003e837
- (void)getPCSIdentities:(id)arg1 forServiceID:(unsigned int)arg2 result:(CDUnknownBlockType)arg3;	// IMP=0x000000000003e436
- (void)cacheCurrentIdentityFetchResult:(struct _PCSIdentitySetData *)arg1 notFound:(id)arg2;	// IMP=0x000000000003e17b
- (void)getCurrentIdentities:(id)arg1 result:(CDUnknownBlockType)arg2;	// IMP=0x000000000003dd99
- (void)dealloc;	// IMP=0x000000000003dd52
- (id)init;	// IMP=0x000000000003dcb6

@end

