//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKeyboardInputMode.h"

@class NSExtension;

__attribute__((visibility("hidden")))
@interface UIKeyboardExtensionInputMode : UIKeyboardInputMode
{
    NSExtension *_extension;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000c0aa6f
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
- (id)_indicatorIconWithBackground:(_Bool)arg1 iconWidth:(double)arg2 scaleFactor:(double)arg3;	// IMP=0x0000000000c0a83d
- (_Bool)isDesiredForTraits:(id)arg1;	// IMP=0x0000000000c0a60f
- (_Bool)isAllowedForTraits:(id)arg1;	// IMP=0x0000000000c0a5fd
- (id)normalizedIdentifierLevels;	// IMP=0x0000000000c0a5f0
- (id)identifierWithLayouts;	// IMP=0x0000000000c0a5de
- (id)containingBundleDisplayName;	// IMP=0x0000000000c0a564
- (id)containingBundle;	// IMP=0x0000000000c0a4b8
- (_Bool)isExtensionInputMode;	// IMP=0x0000000000c0a4b0
- (_Bool)isStalledExtensionInputMode;	// IMP=0x0000000000c0a3d0
- (_Bool)defaultLayoutIsASCIICapable;	// IMP=0x0000000000c0a334
- (_Bool)isDefaultRightToLeft;	// IMP=0x0000000000c0a298
- (id)extendedDisplayName;	// IMP=0x0000000000c0a14a
- (id)displayName;	// IMP=0x0000000000c0a138
- (id)monolingualDisplayName;	// IMP=0x0000000000c0a066
- (id)hardwareLayout;	// IMP=0x0000000000c0993f
- (_Bool)showSWLayoutWithHWKeyboard;	// IMP=0x0000000000c098b7
- (void)setPrimaryLanguage:(id)arg1;	// IMP=0x0000000000c0978b
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000c09293

@end

