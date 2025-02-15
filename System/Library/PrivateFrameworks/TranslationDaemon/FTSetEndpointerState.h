//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTSetEndpointerState : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct SetEndpointerState *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d1aca
- (id)flatbuffData;	// IMP=0x00000000000d194d
- (Offset_8e83f458)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000d1905
@property(readonly, nonatomic) _Bool enable_server_side_endpoint;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d18c9
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SetEndpointerState *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000d171e
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SetEndpointerState *)arg2;	// IMP=0x00000000000d1709
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000d16ef
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000d16d8

@end

