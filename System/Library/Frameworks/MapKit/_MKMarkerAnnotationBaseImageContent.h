//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _MKMarkerAnnotationBaseImageContent : NSObject
{
    int _blendMode;	// 8 = 0x8
    UIColor *_fillColor;	// 16 = 0x10
    UIColor *_strokeColor;	// 24 = 0x18
    double _strokeWidth;	// 32 = 0x20
    long long _baseImageType;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000016eb84
@property(readonly, nonatomic) long long baseImageType; // @synthesize baseImageType=_baseImageType;
@property(readonly, nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(readonly, nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(readonly, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(readonly, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (id)initWithFillColor:(id)arg1 strokeColor:(id)arg2 strokeWidth:(double)arg3 blendMode:(int)arg4 baseImageType:(long long)arg5;	// IMP=0x000000000016ea94

@end

