//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTShortcutFuzzyMatchResponse_ShortcutScorePair : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct ShortcutScorePair *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000136983
- (id)flatbuffData;	// IMP=0x0000000000136806
- (Offset_288bd34a)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000013671b
@property(readonly, nonatomic) double similarity_score;
@property(readonly, nonatomic) NSString *shortcut;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000136674
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ShortcutScorePair *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000001364c9
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ShortcutScorePair *)arg2;	// IMP=0x00000000001364b4
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000013649a
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000136483

@end

