//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface AVUpdatingControlItem
{
    CDUnknownBlockType _imageUpdatingBlock;	// 80 = 0x50
    CDUnknownBlockType _enabledBlock;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000004635b
@property(copy, nonatomic, getter=_isEnabledBlock, setter=_setEnabledBlock:) CDUnknownBlockType enabledBlock; // @synthesize enabledBlock=_enabledBlock;
@property(copy, nonatomic, getter=_imageUpdatingBlock, setter=_setImageUpdatingBlock:) CDUnknownBlockType imageUpdatingBlock; // @synthesize imageUpdatingBlock=_imageUpdatingBlock;
- (_Bool)isEnabled;	// IMP=0x00000000000462a5
- (id)_privateImage;	// IMP=0x0000000000046219

@end

