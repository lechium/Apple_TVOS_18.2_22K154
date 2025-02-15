//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIAction, UIMenu, UIMenuElement;

__attribute__((visibility("hidden")))
@interface _AVUnifiedPlayerMenuElementInfo : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    UIMenuElement *_menuElement;	// 16 = 0x10
}

+ (_Bool)_isMenuEmpty:(id)arg1;	// IMP=0x00100000000947da
+ (unsigned long long)_typeForMenuElement:(id)arg1;	// IMP=0x001000000009475a
- (void).cxx_destruct;	// IMP=0x000000000009474a
@property(retain, nonatomic) UIMenuElement *menuElement; // @synthesize menuElement=_menuElement;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden;
@property(readonly, nonatomic) UIMenu *menu;
@property(readonly, nonatomic) UIAction *action;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

