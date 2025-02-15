//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ARUICountdownView, NSString;

@protocol ARUICountdownAnimation
+ (NSString *)identifier;
- (void)applyToCountdownView:(ARUICountdownView *)arg1 completion:(void (^)(void))arg2;
- (NSString *)identifier;
- (_Bool)cancelable;
- (double)duration;
- (double)delay;

@optional
- (unsigned long long)countdownStep;
@end

