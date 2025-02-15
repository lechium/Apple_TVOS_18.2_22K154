//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlaybackSpeed, NSArray;
@protocol AVPlaybackSpeedCollectionDelegate;

__attribute__((visibility("hidden")))
@interface AVPlaybackSpeedCollection : NSObject
{
    id <AVPlaybackSpeedCollectionDelegate> _delegate;	// 8 = 0x8
    NSArray *_speeds;	// 16 = 0x10
    AVPlaybackSpeed *_activeSpeed;	// 24 = 0x18
}

+ (id)defaultSpeedFromList:(id)arg1;	// IMP=0x006000000004277d
+ (id)keyPathsForValuesAffectingDisplaySpeeds;	// IMP=0x0060000000042751
+ (id)keyPathsForValuesAffectingSelectedSpeed;	// IMP=0x0060000000042731
+ (id)collectionWithSpeeds:(id)arg1;	// IMP=0x00600000000426e8
- (void).cxx_destruct;	// IMP=0x00000000000423ba
- (id)description;	// IMP=0x00000000000423ae
- (id)debugDescription;	// IMP=0x00000000000423a2
- (id)internalDescription;	// IMP=0x0000000000042393
- (id)displaySpeeds;	// IMP=0x0000000000042318
- (void)setDelegate:(id)arg1;	// IMP=0x00000000000422c4
- (id)delegate;	// IMP=0x00000000000422ae
- (void)setActiveSpeed:(id)arg1;	// IMP=0x000000000004226a
- (id)activeSpeed;	// IMP=0x000000000004225c
- (void)selectNextPlaybackSpeed:(id)arg1;	// IMP=0x000000000004208c
- (void)selectSpeed:(id)arg1;	// IMP=0x0000000000041fd5
@property(readonly, nonatomic) AVPlaybackSpeed *selectedSpeed;
@property(readonly, nonatomic) NSArray *speeds;
- (id)_initInternalWithSpeeds:(id)arg1;	// IMP=0x0000000000041e7b

@end

