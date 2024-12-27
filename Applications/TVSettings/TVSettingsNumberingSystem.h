//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVSettingsNumberingSystem : NSObject
{
    _Bool _isSelected;	// 8 = 0x8
    NSString *_localeIdentifier;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
    NSString *_shortDisplayName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000e40bb
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(readonly, nonatomic) NSString *shortDisplayName; // @synthesize shortDisplayName=_shortDisplayName;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
- (unsigned long long)hash;	// IMP=0x00100000000e4033
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000e3f2d
- (id)initWithLocaleIdentifier:(id)arg1 displayName:(id)arg2 shortDisplayName:(id)arg3 isSelected:(_Bool)arg4;	// IMP=0x00100000000e3e3c

@end

