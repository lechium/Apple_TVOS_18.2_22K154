//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechRequestDevConfig : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechRequestDevConfig *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000112efe
- (id)flatbuffData;	// IMP=0x0000000000112d81
- (Offset_8a6daecd)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000112c01
@property(readonly, nonatomic) _Bool return_server_info;
@property(readonly, nonatomic) NSString *resource_asset_path;
@property(readonly, nonatomic) NSString *voice_asset_path;
@property(readonly, nonatomic) _Bool return_log;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000112ab8
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestDevConfig *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000011290d
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestDevConfig *)arg2;	// IMP=0x00000000001128f8
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000001128de
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000001128c7

@end

