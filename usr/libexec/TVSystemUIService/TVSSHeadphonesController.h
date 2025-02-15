//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TVSSHeadphonesController : NSObject
{
    _Bool _allowHeadphoneMoviesToPlay;	// 8 = 0x8
    NSMutableDictionary *_cachedMediaPlayerViews;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000932f0
@property(retain, nonatomic) NSMutableDictionary *cachedMediaPlayerViews; // @synthesize cachedMediaPlayerViews=_cachedMediaPlayerViews;
@property(readonly, nonatomic) _Bool allowHeadphoneMoviesToPlay; // @synthesize allowHeadphoneMoviesToPlay=_allowHeadphoneMoviesToPlay;
- (void)_createMediaPlayerViewForRouteUIDIfNecessary:(id)arg1;	// IMP=0x0010000000093140
- (id)_bluetoothDeviceForRouteUID:(id)arg1;	// IMP=0x0010000000092ee0
- (id)_avPlayerForRouteUID:(id)arg1;	// IMP=0x0010000000092c70
- (void)resetHeadphoneMovies;	// IMP=0x0010000000092a60
- (void)pauseHeadphoneMovies;	// IMP=0x00100000000927f0
- (void)playHeadphoneMovies;	// IMP=0x00100000000925e0
- (void)clearMediaPlayerViewCache;	// IMP=0x00100000000925a0
- (id)imageForRouteUID:(id)arg1;	// IMP=0x0010000000092420
- (id)mediaPlayerViewForRouteUID:(id)arg1;	// IMP=0x0010000000092360
- (void)createMediaPlayerViewForRouteUIDIfNecessary:(id)arg1;	// IMP=0x0010000000092300
- (id)init;	// IMP=0x0010000000092250

@end

