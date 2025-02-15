//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantUI/NSObject-Protocol.h>

@class AFUISiriSession, NSArray;

@protocol AFUISiriSessionLocalDataSource <NSObject>
- (_Bool)getUIViewModeIsUIFreeForCurrentRequest;
- (_Bool)isPPTAvailable;
- (long long)carPlayEnhancedVoiceTriggerModeForSiriSession:(AFUISiriSession *)arg1;
- (unsigned long long)lockStateForSiriSession:(AFUISiriSession *)arg1;
- (NSArray *)starkAppBundleIdentifierContextForSiriSession:(AFUISiriSession *)arg1;
- (NSArray *)currentCarPlaySupportedOEMAppIDListForSiriSession:(AFUISiriSession *)arg1;
- (NSArray *)contextAppInfosForSiriSession:(AFUISiriSession *)arg1;
- (NSArray *)bulletinsForSiriSession:(AFUISiriSession *)arg1;
- (_Bool)recentTouchScreenActivityDetected:(AFUISiriSession *)arg1;
- (_Bool)isAmbientPresented:(AFUISiriSession *)arg1;
- (_Bool)recentButtonPressActivityDetected:(AFUISiriSession *)arg1;
- (long long)getDeviceOrientation:(AFUISiriSession *)arg1;
@end

