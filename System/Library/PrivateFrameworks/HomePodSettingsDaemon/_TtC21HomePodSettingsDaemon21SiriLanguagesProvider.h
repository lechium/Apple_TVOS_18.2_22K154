//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC21HomePodSettingsDaemon21SiriLanguagesProvider : NSObject
{
    MISSING_TYPE *keys;	// 8 = 0x8
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *logger;	// 0 = 0x0
    MISSING_TYPE *assetInstalledNotifyToken;	// 0 = 0x0
    MISSING_TYPE *voiceUpdateNotifyToken;	// 812480 = 0xc65c0
    MISSING_TYPE *cachedLanguageItems;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000084636
- (void)dealloc;	// IMP=0x0000000000084619
- (id)init;	// IMP=0x000000000008450a
- (void)outputVoiceDidChange;	// IMP=0x0000000000087604
- (void)languageCodeDidChange;	// IMP=0x0000000000087127

@end

