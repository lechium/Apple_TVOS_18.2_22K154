//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/MRUIControllable-Protocol.h>

@class NSSet, NSString;

@protocol MRNowPlayingActivityUIControllable <MRUIControllable>
- (void)suppressPresentationOverBundleIdentifiers:(NSSet *)arg1;
- (void)setPreferredState:(long long)arg1;
- (void)acquireNowPlayingActivityAssertionForRouteIdentifier:(NSString *)arg1 withDuration:(long long)arg2 preferredState:(long long)arg3;
@end

