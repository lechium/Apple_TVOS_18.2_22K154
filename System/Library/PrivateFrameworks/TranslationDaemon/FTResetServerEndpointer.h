//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTResetServerEndpointer : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct ResetServerEndpointer *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000fb531
- (id)flatbuffData;	// IMP=0x00000000000fb3b4
- (Offset_012fa2a8)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000fb36c
@property(readonly, nonatomic) long long speech_packet_count;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fb333
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ResetServerEndpointer *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000fb188
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ResetServerEndpointer *)arg2;	// IMP=0x00000000000fb173
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000fb159
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000fb142

@end

