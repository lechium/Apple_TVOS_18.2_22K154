//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface AVTStickerImageProp
{
    NSString *_imagePath;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000031222
- (id)dictionaryWithTargetPath:(id)arg1;	// IMP=0x0000000000031176
- (void)buildNodeForAvatar:(id)arg1 withCamera:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000003098f
@property(readonly, nonatomic) NSString *imagePath;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000030827
- (id)initWithImageAtPath:(id)arg1 size:(struct CGSize)arg2 scale:(_Bool)arg3 position:(_Bool)arg4 renderLast:(id)arg5 orientToCamera:(id)arg6 rotation:(id)arg7 palettesDescriptions:modifiers:adjustments: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000030765

@end

