//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUICore/NSObject-Protocol.h>

@class SUICVoiceSelectionViewModelLanguage, SUICVoiceSelectionViewModelVoice;
@protocol SUICVoiceSelectionDisplaying;

@protocol SUICVoiceSelectionEventHandling <NSObject>
- (void)voiceSelectionView:(id <SUICVoiceSelectionDisplaying>)arg1 receivedRequestToSelectLanguage:(SUICVoiceSelectionViewModelLanguage *)arg2;
- (void)voiceSelectionView:(id <SUICVoiceSelectionDisplaying>)arg1 receivedRequestToSelectVoice:(SUICVoiceSelectionViewModelVoice *)arg2;
@end

