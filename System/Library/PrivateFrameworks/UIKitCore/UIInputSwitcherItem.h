//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIFont, UISwitch;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherItem : NSObject
{
    _Bool _usesDeviceLanguage;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_localizedTitle;	// 24 = 0x18
    NSString *_localizedSubtitle;	// 32 = 0x20
    UIFont *_titleFont;	// 40 = 0x28
    UIFont *_subtitleFont;	// 48 = 0x30
    UISwitch *_switchControl;	// 56 = 0x38
    CDUnknownBlockType _switchIsOnBlock;	// 64 = 0x40
    CDUnknownBlockType _switchToggleBlock;	// 72 = 0x48
    long long _selectedSegmentIndex;	// 80 = 0x50
    NSArray *_segmentTitles;	// 88 = 0x58
    NSArray *_segmentImages;	// 96 = 0x60
    CDUnknownBlockType _persistentSelectedIndex;	// 104 = 0x68
}

+ (id)switcherItemWithIdentifier:(id)arg1;	// IMP=0x0060000000c22204
- (void).cxx_destruct;	// IMP=0x0000000000c224ef
@property(copy, nonatomic) CDUnknownBlockType persistentSelectedIndex; // @synthesize persistentSelectedIndex=_persistentSelectedIndex;
@property(retain, nonatomic) NSArray *segmentImages; // @synthesize segmentImages=_segmentImages;
@property(retain, nonatomic) NSArray *segmentTitles; // @synthesize segmentTitles=_segmentTitles;
@property(nonatomic) long long selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
@property(copy, nonatomic) CDUnknownBlockType switchToggleBlock; // @synthesize switchToggleBlock=_switchToggleBlock;
@property(copy, nonatomic) CDUnknownBlockType switchIsOnBlock; // @synthesize switchIsOnBlock=_switchIsOnBlock;
@property(retain, nonatomic) UISwitch *switchControl; // @synthesize switchControl=_switchControl;
@property(nonatomic) _Bool usesDeviceLanguage; // @synthesize usesDeviceLanguage=_usesDeviceLanguage;
@property(retain, nonatomic) UIFont *subtitleFont; // @synthesize subtitleFont=_subtitleFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(copy, nonatomic) NSString *localizedSubtitle; // @synthesize localizedSubtitle=_localizedSubtitle;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) _Bool isSegmentedItem;
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000c222b3
- (void)dealloc;	// IMP=0x0000000000c2224d

@end

