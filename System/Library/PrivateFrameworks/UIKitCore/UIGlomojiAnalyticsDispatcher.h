//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIGlomojiAnalyticsDispatcher : NSObject
{
    _Bool _KBMenuAppeared;	// 8 = 0x8
    unsigned long long _glomojiType;	// 16 = 0x10
    unsigned long long _KBMenuInteractionSource;	// 24 = 0x18
    unsigned long long _KBMenuDismissSource;	// 32 = 0x20
    NSString *_originalInputMode;	// 40 = 0x28
    NSString *_updatedInputMode;	// 48 = 0x30
    unsigned long long _KBMenuSelectedAction;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000c356e5
@property(nonatomic) unsigned long long KBMenuSelectedAction; // @synthesize KBMenuSelectedAction=_KBMenuSelectedAction;
@property(copy, nonatomic) NSString *updatedInputMode; // @synthesize updatedInputMode=_updatedInputMode;
@property(copy, nonatomic) NSString *originalInputMode; // @synthesize originalInputMode=_originalInputMode;
@property(nonatomic) unsigned long long KBMenuDismissSource; // @synthesize KBMenuDismissSource=_KBMenuDismissSource;
@property(nonatomic) unsigned long long KBMenuInteractionSource; // @synthesize KBMenuInteractionSource=_KBMenuInteractionSource;
@property(nonatomic) _Bool KBMenuAppeared; // @synthesize KBMenuAppeared=_KBMenuAppeared;
@property(nonatomic) unsigned long long glomojiType; // @synthesize glomojiType=_glomojiType;
- (id)getInputMode;	// IMP=0x0000000000c355d0
- (unsigned long long)getGlomojiButtonTypeEnumValue;	// IMP=0x0000000000c3551a
- (void)didKBMenuDismiss;	// IMP=0x0000000000c353c2
- (void)didKBMenuInteraction;	// IMP=0x0000000000c35163
- (void)didKBMenuAppear;	// IMP=0x0000000000c35099
- (void)didGlomojiTap;	// IMP=0x0000000000c34e80
- (void)didKBMenuAction;	// IMP=0x0000000000c34dcc
- (id)init;	// IMP=0x0000000000c34c9d

@end

