//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol TIAssistantSettings
- (void)launchPencilSettings;
- (void)launchDictationSettings;
- (void)launchKeyboardSettings;
- (void)dismissedDataSharingWithResponse:(long long)arg1;
- (void)dismissDialogWithCompletionHandler:(void (^)(void))arg1;
- (void)presentDialogForType:(long long)arg1 withCompletionHandler:(void (^)(long long))arg2;
@end

