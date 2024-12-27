//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTLmScorerRequest, FTLmScorerResponse, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTLmtLmScorerMessage : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct LmtLmScorerMessage *_root;	// 24 = 0x18
}

+ (long long)session_message_typeForImmutableObject:(id)arg1;	// IMP=0x001000000008d306
+ (Class)session_message_immutableClassForType:(long long)arg1;	// IMP=0x001000000008d2c6
- (void).cxx_destruct;	// IMP=0x000000000008d67c
- (id)flatbuffData;	// IMP=0x000000000008d4ff
- (Offset_dbb877ef)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000008d395
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property(readonly, nonatomic) FTLmScorerResponse *session_messageAsFTLmScorerResponse;
@property(readonly, nonatomic) FTLmScorerRequest *session_messageAsFTLmScorerRequest;
@property(readonly, nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008d05f
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LmtLmScorerMessage *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000008ce7c
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LmtLmScorerMessage *)arg2;	// IMP=0x000000000008ce67
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000008ce4d
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000008ce36

@end

