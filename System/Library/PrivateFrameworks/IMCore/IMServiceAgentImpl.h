//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "IMServiceAgent.h"

@interface IMServiceAgentImpl : IMServiceAgent
{
}

+ (id)imageURLForStatus:(unsigned long long)arg1;	// IMP=0x00800000000a869e
+ (id)imageNameForStatus:(unsigned long long)arg1;	// IMP=0x00800000000a862b
+ (void)_determineStatusImageAppearance;	// IMP=0x00800000000a85d6
+ (void)_statusImageAppearanceChanged:(id)arg1;	// IMP=0x00800000000a8563
+ (void)forgetStatusImageAppearance;	// IMP=0x00800000000a8552
+ (id)notificationCenter;	// IMP=0x00800000000a8542
+ (void)initialize;	// IMP=0x00800000000a8386
+ (id)sharedAgent;	// IMP=0x00800000000a8349
- (unsigned long long)vcCapabilities;	// IMP=0x00000000000a8d01
- (void)vcCapabilitiesChanged:(unsigned long long)arg1;	// IMP=0x00000000000a8cfb
- (void)setupComplete;	// IMP=0x00000000000a8c66
- (void)setMyAwayMessages:(id)arg1;	// IMP=0x00000000000a8bfd
- (void)setMyAvailableMessages:(id)arg1;	// IMP=0x00000000000a8b94
- (id)myAwayMessages;	// IMP=0x00000000000a8b0f
- (id)myAvailableMessages;	// IMP=0x00000000000a8a8a
- (void)_customMessagesChanged:(id)arg1;	// IMP=0x00000000000a8982
- (void)_statusImageAppearanceChanged:(id)arg1;	// IMP=0x00000000000a8575
- (id)notificationCenter;	// IMP=0x00000000000a854a
- (id)serviceWithName:(id)arg1;	// IMP=0x00000000000a8447
- (void)launchIfNecessary;	// IMP=0x00000000000a8441
- (void)_daemonDisconnected:(id)arg1;	// IMP=0x00000000000a843b
- (void)_daemonConnected:(id)arg1;	// IMP=0x00000000000a8435
- (void)dealloc;	// IMP=0x00000000000a83bb
- (id)init;	// IMP=0x00000000000a838c

@end

