//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CIFilterClassInfo : NSObject
{
    NSArray *inputKeys;	// 8 = 0x8
    NSArray *inputClasses;	// 16 = 0x10
    NSArray *outputKeys;	// 24 = 0x18
}

+ (id)classInfoForClass:(Class)arg1;	// IMP=0x00600000000fe766
+ (void)clearCache;	// IMP=0x00600000000fe73b
+ (id)cache;	// IMP=0x00600000000fe6a9
- (id)outputKeys;	// IMP=0x00000000000ff228
- (id)inputClasses;	// IMP=0x00000000000ff21e
- (id)inputKeys;	// IMP=0x00000000000ff214
- (id)description;	// IMP=0x00000000000ff17d
- (id)initWithClass:(Class)arg1;	// IMP=0x00000000000fe888
- (id)init;	// IMP=0x00000000000fe874
- (void)dealloc;	// IMP=0x00000000000fe823

@end

