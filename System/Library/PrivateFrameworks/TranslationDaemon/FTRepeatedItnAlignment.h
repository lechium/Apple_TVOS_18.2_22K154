//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTRepeatedItnAlignment : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct RepeatedItnAlignment *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000bf213
- (id)flatbuffData;	// IMP=0x00000000000bf096
- (Offset_9e06b00a)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000bec84
- (void)itn_alignment_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bead3
- (unsigned long long)itn_alignment_count;	// IMP=0x00000000000bea37
- (id)itn_alignment_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000be93d
@property(readonly, nonatomic) NSArray *itn_alignment;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000be814
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RepeatedItnAlignment *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000be669
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RepeatedItnAlignment *)arg2;	// IMP=0x00000000000be654
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000be63a
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000be623

@end

