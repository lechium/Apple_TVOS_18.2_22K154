//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMapTable, NSUUID;

__attribute__((visibility("hidden")))
@interface _UIWTCProofreadingDecorationInfo : NSObject
{
    NSUUID *_identifier;	// 8 = 0x8
    NSArray *_ranges;	// 16 = 0x10
    NSDictionary *_paths;	// 24 = 0x18
    NSMapTable *_containers;	// 32 = 0x20
    long long _type;	// 40 = 0x28
}

+ (id)highlightInfoWithIdentifier:(id)arg1 ranges:(id)arg2 decorationPaths:(id)arg3 containers:(id)arg4;	// IMP=0x00600000017b8505
+ (id)underlineInfoWithIdentifier:(id)arg1 ranges:(id)arg2 decorationPaths:(id)arg3 containers:(id)arg4;	// IMP=0x00600000017b845a
- (void).cxx_destruct;	// IMP=0x00000000017b86ed
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSMapTable *containers; // @synthesize containers=_containers;
@property(readonly, nonatomic) NSDictionary *paths; // @synthesize paths=_paths;
@property(readonly, nonatomic) NSArray *ranges; // @synthesize ranges=_ranges;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x00000000017b85b3
- (id)initWithType:(long long)arg1 identifier:(id)arg2 ranges:(id)arg3 decorationPaths:(id)arg4 containers:(id)arg5;	// IMP=0x00000000017b80bf

@end

