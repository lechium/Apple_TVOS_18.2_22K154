//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UICommandParentInserts : NSObject
{
    NSMutableDictionary *_childInserts;	// 8 = 0x8
    NSMutableArray *_fallbackBeforeElements;	// 16 = 0x10
    NSMutableArray *_fallbackAfterElements;	// 24 = 0x18
    NSArray *_atStartElements;	// 32 = 0x20
    NSArray *_atEndElements;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000feb601
@property(readonly, nonatomic) NSArray *fallbackAfterElements; // @synthesize fallbackAfterElements=_fallbackAfterElements;
@property(readonly, nonatomic) NSArray *fallbackBeforeElements; // @synthesize fallbackBeforeElements=_fallbackBeforeElements;
@property(readonly, nonatomic) NSDictionary *childInserts; // @synthesize childInserts=_childInserts;
@property(readonly, nonatomic) NSArray *atEndElements; // @synthesize atEndElements=_atEndElements;
@property(readonly, nonatomic) NSArray *atStartElements; // @synthesize atStartElements=_atStartElements;
- (void)_addFallbackBeforeElements:(id)arg1 fallbackAfterElements:(id)arg2;	// IMP=0x0000000000feb4cf
- (void)_setBeforeElements:(id)arg1 afterElements:(id)arg2 aroundElement:(id)arg3;	// IMP=0x0000000000feb34e
- (void)_setAtStartElements:(id)arg1 atEndElements:(id)arg2;	// IMP=0x0000000000feb208

@end

