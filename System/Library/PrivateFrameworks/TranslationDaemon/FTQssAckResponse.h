//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTQssAckResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct QssAckResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000121ec4
- (id)flatbuffData;	// IMP=0x0000000000121d47
- (Offset_eb305189)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000121d2d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000121d22
- (id)initWithFlatbuffData:(id)arg1 root:(const struct QssAckResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000121b77
- (id)initWithFlatbuffData:(id)arg1 root:(const struct QssAckResponse *)arg2;	// IMP=0x0000000000121b62
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000121b48
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000121b31

@end

