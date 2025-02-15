//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIKBCacheToken;

__attribute__((visibility("hidden")))
@interface UIKeyboardTransitionSlice : NSObject
{
    struct CGRect _startRect;	// 8 = 0x8
    struct CGRect _endRect;	// 40 = 0x28
    UIKBCacheToken *_startToken;	// 72 = 0x48
    UIKBCacheToken *_endToken;	// 80 = 0x50
    _Bool _shiftContents;	// 88 = 0x58
    _Bool _delayCrossfade;	// 89 = 0x59
    int _normalization;	// 92 = 0x5c
}

+ (id)sliceWithStart:(struct CGRect)arg1 end:(struct CGRect)arg2;	// IMP=0x0060000000f241bc
- (void).cxx_destruct;	// IMP=0x0000000000f24487
@property _Bool delayCrossfade; // @synthesize delayCrossfade=_delayCrossfade;
@property int normalization; // @synthesize normalization=_normalization;
@property(retain) UIKBCacheToken *endToken; // @synthesize endToken=_endToken;
@property(retain) UIKBCacheToken *startToken; // @synthesize startToken=_startToken;
@property struct CGRect endRect; // @synthesize endRect=_endRect;
@property struct CGRect startRect; // @synthesize startRect=_startRect;
- (id)description;	// IMP=0x0000000000f242db
@property(readonly) _Bool hasGeometry;
- (void)addStartRect:(struct CGRect)arg1 end:(struct CGRect)arg2;	// IMP=0x0000000000f24222
- (id)init;	// IMP=0x0000000000f2411d

@end

