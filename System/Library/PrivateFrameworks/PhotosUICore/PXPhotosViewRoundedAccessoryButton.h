//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIButton.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface PXPhotosViewRoundedAccessoryButton : UIButton
{
    MISSING_TYPE *symbolName;	// 8 = 0x8
    MISSING_TYPE *menuOffset;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001a7020
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a6f90
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001a6f10
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000001a6e90
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000001a6e70
- (void)layoutSubviews;	// IMP=0x00000000001a6e40
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001a6c60
- (struct CGPoint)menuAttachmentPointForConfiguration:(id)arg1;	// IMP=0x00000000001a6890
@property(nonatomic) struct CGPoint menuOffset; // @synthesize menuOffset;

@end

