//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INAppDescriptor.h>

@interface INAppDescriptor (Shortcuts)
- (id)selfIfNotShortcutsApp;	// IMP=0x0030000000076fcd
@property(readonly, nonatomic, getter=isShortcutsApp) _Bool shortcutsApp;
@property(readonly, nonatomic, getter=isThirdParty) _Bool thirdParty;
- (_Bool)isEqualForSmartPromptPurposes:(id)arg1;	// IMP=0x0030000000076a3c
- (unsigned long long)hashForSmartPromptPurposes;	// IMP=0x0030000000076986
- (id)initWithSerializedRepresentation:(id)arg1;	// IMP=0x003000000007677f
- (id)initWithBundleRecord:(id)arg1;	// IMP=0x0030000000076462
- (id)serializedRepresentation;	// IMP=0x003000000007634d
@end

