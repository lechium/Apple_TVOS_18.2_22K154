//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVImageScaleDecorator.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _TVImageKeyFrameArtDecorator : TVImageScaleDecorator
{
    NSString *_inlineTitle;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000126522
@property(copy, nonatomic) NSString *inlineTitle; // @synthesize inlineTitle=_inlineTitle;
- (id)decorate:(id)arg1 scaledWithSize:(struct CGSize)arg2 croppedToFit:(_Bool)arg3;	// IMP=0x0000000000125e6f
- (id)decoratorIdentifier;	// IMP=0x0000000000125d9d
- (id)initWithInlineTitle:(id)arg1;	// IMP=0x0000000000125d2f

@end

