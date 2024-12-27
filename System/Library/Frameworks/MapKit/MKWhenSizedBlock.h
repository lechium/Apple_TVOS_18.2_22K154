//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MKWhenSizedBlock : NSObject
{
    _Bool _shouldRun;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    CDUnknownBlockType _block;	// 24 = 0x18
    CDUnknownBlockType _completion;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000007bb14
@property(nonatomic) _Bool shouldRun; // @synthesize shouldRun=_shouldRun;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)perform;	// IMP=0x000000000007ba81
- (id)initWithType:(long long)arg1 block:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000007b9cd
- (id)initWithType:(long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000007b9b8

@end

