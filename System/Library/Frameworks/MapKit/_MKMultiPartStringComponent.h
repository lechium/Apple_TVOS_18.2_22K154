//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _MKMultiPartStringComponent : NSObject
{
    NSAttributedString *_attributedString;	// 8 = 0x8
    struct _NSRange _originalRange;	// 16 = 0x10
    struct _NSRange _range;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000071db1
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, nonatomic) struct _NSRange originalRange; // @synthesize originalRange=_originalRange;
@property(readonly, copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (id)description;	// IMP=0x0000000000071cc6
- (id)initWithAttributedString:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000071c2d

@end

