//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DropInCore/NSObject-Protocol.h>

@class NSArray, TUAudioFrequencyController;

@protocol TUAudioFrequencyControllerDelegate <NSObject>
- (void)frequencyController:(TUAudioFrequencyController *)arg1 audioPowerChanged:(float)arg2 forParticipantWithStreamToken:(long long)arg3;

@optional
- (void)frequencyController:(TUAudioFrequencyController *)arg1 spectrumChanged:(NSArray *)arg2 forParticipantWithStreamToken:(long long)arg3;
- (void)frequencyController:(TUAudioFrequencyController *)arg1 rawValueForAudioPowerChanged:(float)arg2 forParticipantWithStreamToken:(long long)arg3;
@end

