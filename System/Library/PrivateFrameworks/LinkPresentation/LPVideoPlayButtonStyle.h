//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPSize, UIColor;

__attribute__((visibility("hidden")))
@interface LPVideoPlayButtonStyle : NSObject
{
    LPSize *_size;	// 8 = 0x8
    LPSize *_backgroundSize;	// 16 = 0x10
    double _disabledOpacity;	// 24 = 0x18
    UIColor *_color;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000006f66d
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) double disabledOpacity; // @synthesize disabledOpacity=_disabledOpacity;
@property(retain, nonatomic) LPSize *backgroundSize; // @synthesize backgroundSize=_backgroundSize;
@property(retain, nonatomic) LPSize *size; // @synthesize size=_size;
- (id)initWithPlatform:(long long)arg1;	// IMP=0x000000000006f443

@end

