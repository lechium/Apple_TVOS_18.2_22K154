//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTBatchTranslationFeedbackRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct BatchTranslationFeedbackRequest *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000013c583
- (id)flatbuffData;	// IMP=0x000000000013c406
- (Offset_94ef6cc9)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000013beca
@property(readonly, nonatomic) NSString *device_type;
@property(readonly, nonatomic) NSString *os_version;
@property(readonly, nonatomic) NSString *app_id;
@property(readonly, nonatomic) NSString *safari_version;
@property(readonly, nonatomic) NSString *target_language;
@property(readonly, nonatomic) NSString *source_language;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *errors;
@property(readonly, nonatomic) NSString *url;
@property(readonly, nonatomic) NSString *translated_content;
@property(readonly, nonatomic) NSString *source_content;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013ba05
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationFeedbackRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000013b85a
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationFeedbackRequest *)arg2;	// IMP=0x000000000013b845
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000013b82b
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000013b814

@end

