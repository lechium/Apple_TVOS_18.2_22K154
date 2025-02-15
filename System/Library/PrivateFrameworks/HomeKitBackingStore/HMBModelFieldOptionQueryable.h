//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMBModelFieldOption.h"

__attribute__((visibility("hidden")))
@interface HMBModelFieldOptionQueryable : HMBModelFieldOption
{
    CDUnknownBlockType _encodingBlock;	// 8 = 0x8
    CDUnknownBlockType _decodingBlock;	// 16 = 0x10
    CDUnknownBlockType _descriptionBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a8198
@property(copy, nonatomic) CDUnknownBlockType descriptionBlock; // @synthesize descriptionBlock=_descriptionBlock;
@property(copy, nonatomic) CDUnknownBlockType decodingBlock; // @synthesize decodingBlock=_decodingBlock;
@property(copy, nonatomic) CDUnknownBlockType encodingBlock; // @synthesize encodingBlock=_encodingBlock;
- (void)applyTo:(id)arg1;	// IMP=0x00000000000a7f41
- (id)initWithEncodingBlock:(CDUnknownBlockType)arg1 decodingBlock:(CDUnknownBlockType)arg2 descriptionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a7e5f

@end

