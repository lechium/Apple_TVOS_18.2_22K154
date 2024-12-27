//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface KMAppGlobalVocabularyBridge : NSObject
{
    NSString *_appId;	// 8 = 0x8
    unsigned short _cascadeItemType;	// 16 = 0x10
    NSArray *_items;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000e1a5
- (_Bool)enumerateItemsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e02e
- (id)originAppId;	// IMP=0x000000000000e020
- (unsigned short)cascadeItemType;	// IMP=0x000000000000e016
- (id)initWithOriginAppId:(id)arg1 cascadeItemType:(unsigned short)arg2 items:(id)arg3;	// IMP=0x000000000000df72
- (id)init;	// IMP=0x000000000000df2a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

