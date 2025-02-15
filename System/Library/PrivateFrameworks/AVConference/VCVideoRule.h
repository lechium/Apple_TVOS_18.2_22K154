//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCVideoRule : NSObject
{
    int _width;	// 8 = 0x8
    int _height;	// 12 = 0xc
    float _frameRate;	// 16 = 0x10
    float _priority;	// 20 = 0x14
    int _payload;	// 24 = 0x18
}

@property(readonly, nonatomic) int iPayload; // @synthesize iPayload=_payload;
@property(nonatomic) float fPref; // @synthesize fPref=_priority;
@property(readonly, nonatomic) float fRate; // @synthesize fRate=_frameRate;
@property(readonly, nonatomic) int iHeight; // @synthesize iHeight=_height;
@property(readonly, nonatomic) int iWidth; // @synthesize iWidth=_width;
- (_Bool)isVideoFullHD;	// IMP=0x000000000011123c
- (void)setFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3;	// IMP=0x000000000011122b
- (void)setToVideoRule:(id)arg1;	// IMP=0x00000000001111b0
@property(readonly, nonatomic) NSString *description;
- (long long)compareByPref:(id)arg1;	// IMP=0x00000000001110cd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000110fe9
- (long long)compare:(id)arg1;	// IMP=0x0000000000110efd
- (id)initWithFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3 payload:(int)arg4;	// IMP=0x0000000000110ee0
- (id)initWithFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3;	// IMP=0x0000000000110ebd
- (id)initWithFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3 payload:(int)arg4 priority:(float)arg5;	// IMP=0x0000000000110e2a

@end

