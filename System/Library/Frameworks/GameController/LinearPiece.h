//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface LinearPiece : NSObject
{
    float _value;	// 8 = 0x8
    float _delta;	// 12 = 0xc
}

+ (id)pieceWithValue:(float)arg1 delta:(float)arg2;	// IMP=0x00600000000e740a
@property float delta; // @synthesize delta=_delta;
@property float value; // @synthesize value=_value;
- (id)init;	// IMP=0x00000000000e73a3

@end

