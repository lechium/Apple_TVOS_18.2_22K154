//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol PXMutableAppleMusicPlayerController
@property(nonatomic) double volume;
@property(readonly, nonatomic) long long playbackState;
- (void)pause;
- (void)play;
- (void)prepareToPlayWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (void)setItemWithStoreID:(NSString *)arg1 startTime:(CDStruct_198678f7)arg2;
@end

