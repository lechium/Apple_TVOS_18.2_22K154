//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAWindowServerDisplay;

@interface _BKDisplayInfo : NSObject
{
    CAWindowServerDisplay *_windowServerDisplay;	// 8 = 0x8
    struct CGSize _size;	// 16 = 0x10
    double _scale;	// 32 = 0x20
    unsigned char _nativeRotation;	// 40 = 0x28
    struct CGRect _normalizedDigitizerRect;	// 48 = 0x30
    _Bool _external;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000017ee3
@property(nonatomic, getter=isExternal) _Bool external; // @synthesize external=_external;
@property(nonatomic) struct CGRect normalizedDigitizerRect; // @synthesize normalizedDigitizerRect=_normalizedDigitizerRect;
@property(nonatomic) unsigned char nativeRotation; // @synthesize nativeRotation=_nativeRotation;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) CAWindowServerDisplay *windowServerDisplay; // @synthesize windowServerDisplay=_windowServerDisplay;
- (id)description;	// IMP=0x0010000000017d81
- (id)init;	// IMP=0x0010000000017d3b

@end

