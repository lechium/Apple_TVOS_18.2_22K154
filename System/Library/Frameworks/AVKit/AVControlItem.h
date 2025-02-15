//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface AVControlItem : NSObject
{
    UIImage *_image;	// 8 = 0x8
    NSString *__identifier;	// 16 = 0x10
    _Bool _enabled;	// 24 = 0x18
    _Bool __private;	// 25 = 0x19
    NSString *_accessibilityIdentifier;	// 32 = 0x20
    CDUnknownBlockType _action;	// 40 = 0x28
    UIColor *_tintColor;	// 48 = 0x30
    CDUnknownBlockType _actionBlock;	// 56 = 0x38
    CDUnknownBlockType _secondaryActionBlock;	// 64 = 0x40
    NSString *_title;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000046211
+ (id)controlItemWithImage:(id)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x0010000000046529
+ (id)controlItemWithImage:(id)arg1 action:(CDUnknownBlockType)arg2 secondaryAction:(CDUnknownBlockType)arg3;	// IMP=0x0010000000046f7d
+ (id)controlItemImageWithSymbolNamed:(id)arg1;	// IMP=0x0010000000046ef8
+ (id)_startPiPControlItem;	// IMP=0x00100000000467df
+ (id)_stopPiPControlItem;	// IMP=0x00100000000466c7
+ (id)_cancelPiPControlItem;	// IMP=0x00100000000465b1
- (void).cxx_destruct;	// IMP=0x000000000004613c
@property(nonatomic, getter=_isPrivate, setter=_setPrivate:) _Bool _private; // @synthesize _private=__private;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) CDUnknownBlockType secondaryActionBlock; // @synthesize secondaryActionBlock=_secondaryActionBlock;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
- (void)__pipDummy:(id)arg1;	// IMP=0x000000000004609a
@property(retain, nonatomic, getter=_privateImage, setter=_setPrivateImage:) UIImage *_privateImage;
- (void)_blockAction:(id)arg1;	// IMP=0x0000000000045fa8
@property(retain, nonatomic) UIImage *image;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000045dd2
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000045c91
- (id)init;	// IMP=0x0000000000045c41
@property(readonly, copy) NSString *description;
@property(retain, nonatomic, getter=_identifier, setter=_setIdentifier:) NSString *_identifier;
@property(readonly, nonatomic) double width;
- (void)_sendSecondaryActionWithSender:(id)arg1;	// IMP=0x00000000000463e2
- (void)_sendActionWithSender:(id)arg1;	// IMP=0x00000000000463a2
@property(readonly, nonatomic, getter=_hasSecondaryAction) _Bool _hasSecondaryAction;
@property(readonly, nonatomic, getter=_isSpacer) _Bool spacer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

