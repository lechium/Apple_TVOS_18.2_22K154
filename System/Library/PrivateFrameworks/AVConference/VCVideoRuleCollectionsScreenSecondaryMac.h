//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol VCHardwareSettingsMacProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsScreenSecondaryMac
{
    id <VCHardwareSettingsMacProtocol> _hardwareSettings;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x006000000031a570
- (_Bool)setupH264Rules;	// IMP=0x000000000031a6cb
- (_Bool)setupRules;	// IMP=0x000000000031a6b9
- (void)initSupportedPayloads;	// IMP=0x000000000031a6a2
- (id)initWithHardwareSettings:(id)arg1;	// IMP=0x000000000031a59e

@end

