//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface PBPIPControl : NSObject
{
    _Bool _destructive;	// 8 = 0x8
    NSString *_localizedTitle;	// 16 = 0x10
    UIImage *_image;	// 24 = 0x18
}

+ (id)end;	// IMP=0x00400000001da6db
+ (id)layoutOptionFullScreenPictureInPicture;	// IMP=0x00100000001da6a0
+ (id)layoutOptionFullScreenSplitView;	// IMP=0x00100000001da665
+ (id)layoutOptionSplitView;	// IMP=0x00100000001da606
+ (id)layoutOptionPictureInPicture;	// IMP=0x00100000001da5cb
+ (id)splitViewLayout;	// IMP=0x00100000001da500
+ (id)hideSplitView;	// IMP=0x00100000001da4c1
+ (id)pictureInPictureLayout;	// IMP=0x00100000001da486
+ (id)cancelPictureInPicture;	// IMP=0x00100000001da44b
+ (id)stopPictureInPicture;	// IMP=0x00100000001da410
+ (id)movePictureInPictureWithCurrentQuadrant:(long long)arg1;	// IMP=0x00100000001da3a6
+ (id)hidePictureInPicture;	// IMP=0x00100000001da36b
+ (id)controlWithLocalizedTitleKey:(id)arg1 systemImageName:(id)arg2 accessibilityIdentifier:(id)arg3 accessibilityLabelKey:(id)arg4;	// IMP=0x00100000001d9f2e
+ (id)controlWithLocalizedTitleKey:(id)arg1 image:(id)arg2 accessibilityIdentifier:(id)arg3 accessibilityLabelKey:(id)arg4;	// IMP=0x00100000001d9e43
- (void).cxx_destruct;	// IMP=0x00200000001da77f
@property(nonatomic, getter=isDestructive) _Bool destructive; // @synthesize destructive=_destructive;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
- (id)createActionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001da290
- (id)createButton;	// IMP=0x00100000001da1e6
- (void)updateAction:(id)arg1;	// IMP=0x00100000001da137
- (void)updateButton:(id)arg1;	// IMP=0x00100000001da095
- (void)_updateAX:(id)arg1;	// IMP=0x00100000001d9ff6
- (id)initWithLocalizedTitleKey:(id)arg1 image:(id)arg2;	// IMP=0x00100000001d9d9b

@end

