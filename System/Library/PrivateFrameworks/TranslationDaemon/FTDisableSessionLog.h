//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTDisableSessionLog : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct DisableSessionLog *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007cde8
- (id)flatbuffData;	// IMP=0x000000000007cc6b
- (Offset_8dc9e736)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000007cc51
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007cc46
- (id)initWithFlatbuffData:(id)arg1 root:(const struct DisableSessionLog *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000007ca9b
- (id)initWithFlatbuffData:(id)arg1 root:(const struct DisableSessionLog *)arg2;	// IMP=0x000000000007ca86
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000007ca6c
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000007ca55

@end

