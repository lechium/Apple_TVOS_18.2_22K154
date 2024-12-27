//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, TTSVoiceAsset;

@interface VOTActiveSiriVoiceManager : NSObject
{
    NSLock *_cachedSiriVoiceLock;	// 8 = 0x8
    TTSVoiceAsset *_cachedSiriVoiceAsset;	// 16 = 0x10
    int _gryphonInstallNotifyToken;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00400000000d3f48
- (void).cxx_destruct;	// IMP=0x00200000000d468d
- (id)siriVoiceIdentifierForLanguage:(id)arg1;	// IMP=0x00100000000d42a6
- (void)_handleSiriVoiceUpdate;	// IMP=0x00100000000d4203
- (void)_deregisterForNotifications;	// IMP=0x00100000000d41c7
- (void)_registerForNotifications;	// IMP=0x00100000000d4081
- (void)dealloc;	// IMP=0x00100000000d4043
- (id)_init;	// IMP=0x00100000000d3fdd

@end

