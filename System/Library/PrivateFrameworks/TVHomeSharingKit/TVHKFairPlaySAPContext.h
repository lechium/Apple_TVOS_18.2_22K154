//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TVHKFairPlaySAPContext : NSObject
{
    void *_context;	// 8 = 0x8
}

+ (id)_fixedUpURLPathString:(id)arg1;	// IMP=0x00600000000a6383
@property(nonatomic) void *context; // @synthesize context=_context;
- (id)_encryptData:(id)arg1;	// IMP=0x00000000000a637b
- (id)decryptData:(id)arg1;	// IMP=0x00000000000a6373
- (id)signURLPathString:(id)arg1;	// IMP=0x00000000000a61d2
- (void)dealloc;	// IMP=0x00000000000a6194
- (id)initWithFairPlaySAPContext:(void *)arg1;	// IMP=0x00000000000a6157
- (id)init;	// IMP=0x00000000000a60e8
- (id)new;	// IMP=0x00000000000a60b9

@end

