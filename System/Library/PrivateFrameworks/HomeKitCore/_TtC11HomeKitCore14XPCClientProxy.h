//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC11HomeKitCore14XPCClientProxy : NSObject
{
    MISSING_TYPE *connection;	// 8 = 0x8
    MISSING_TYPE *homesStore;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005fec0
- (id)init;	// IMP=0x000000000005fe60
- (void)registerObserver:(id)arg1 modelTypes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000062ca0
- (void)fetchModelsWithTypes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000617a0
- (void)fetchModelsWithType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000060820

@end

