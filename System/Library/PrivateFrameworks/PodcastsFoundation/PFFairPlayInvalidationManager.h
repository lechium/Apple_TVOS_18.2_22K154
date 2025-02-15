//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface PFFairPlayInvalidationManager : NSObject
{
    MISSING_TYPE *keyLoader;	// 8 = 0x8
    MISSING_TYPE *episodeFetcher;	// 16 = 0x10
    MISSING_TYPE *internalQueue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000003b3010
- (id)removeKeyFor:(id)arg1;	// IMP=0x00000000003b2f60
- (void)removeKeyFor:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003b2ee0
- (void)removalAllFairPlayKeysWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003b29c0
- (void)markAllFairPlayKeysForInvalidationWithShouldRemove:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003b2130
- (void)markKeyForInvalidationAt:(id)arg1 shouldRemove:(_Bool)arg2;	// IMP=0x00000000003b1570
- (void)invalidateFairPlayKeyFor:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003b14d0
- (id)init;	// IMP=0x00000000003b0c00

@end

