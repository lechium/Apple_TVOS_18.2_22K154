//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMIHTMLReportBox : HMFObject
{
    float _opacity;	// 8 = 0x8
    float _value;	// 12 = 0xc
    NSString *_text;	// 16 = 0x10
    NSString *_color;	// 24 = 0x18
    struct CGRect _boundingBox;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000003aa8
@property(readonly) float value; // @synthesize value=_value;
@property(readonly) float opacity; // @synthesize opacity=_opacity;
@property(readonly) NSString *color; // @synthesize color=_color;
@property(readonly) NSString *text; // @synthesize text=_text;
@property(readonly) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
- (id)initWithBoundingBox:(struct CGRect)arg1 text:(id)arg2 color:(id)arg3 opacity:(float)arg4 value:(float)arg5;	// IMP=0x000000000000393c

@end

