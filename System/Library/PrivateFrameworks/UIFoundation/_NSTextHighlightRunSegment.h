//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTextRange, _NSTextHighlightRun;

__attribute__((visibility("hidden")))
@interface _NSTextHighlightRunSegment : NSObject
{
    _Bool _isExtraAddedEmptyLine;	// 8 = 0x8
    _NSTextHighlightRun *_run;	// 16 = 0x10
    unsigned long long _segmentIndex;	// 24 = 0x18
    double _topLeftCornerRadius;	// 32 = 0x20
    double _topRightCornerRadius;	// 40 = 0x28
    double _bottomLeftCornerRadius;	// 48 = 0x30
    double _bottomRightCornerRadius;	// 56 = 0x38
    NSMutableArray *_cornerExtensions;	// 64 = 0x40
    double _leftEnd;	// 72 = 0x48
    double _rightEnd;	// 80 = 0x50
    NSTextRange *_textRange;	// 88 = 0x58
    struct CGRect _textSegmentFrame;	// 96 = 0x60
    struct CGRect _highlightFrame;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000092647
- (id)description;	// IMP=0x00000000000924ca
- (_Bool)nextSegmentInCurrentRunIsOnPoint:(struct CGPoint)arg1 withLeftCornerExtensionDistance:(double *)arg2 withRightCornerExtensionDistance:(double *)arg3;	// IMP=0x000000000009236b
- (_Bool)previousSegmentInCurrentRunIsOnPoint:(struct CGPoint)arg1 withLeftCornerExtensionDistance:(double *)arg2 withRightCornerExtensionDistance:(double *)arg3;	// IMP=0x000000000009220c
- (_Bool)anyRunHasTopBorderOnPoint:(struct CGPoint)arg1 withLeftCornerExtensionDistance:(double *)arg2 withRightCornerExtensionDistance:(double *)arg3;	// IMP=0x0000000000091fe9
- (_Bool)anyRunHasBottomBorderOnPoint:(struct CGPoint)arg1 withLeftCornerExtensionDistance:(double *)arg2 withRightCornerExtensionDistance:(double *)arg3;	// IMP=0x0000000000091dc6
- (_Bool)doesAnySegmentHaveTopBorderOnPoint:(struct CGPoint)arg1 withLeftCornerExtensionDistance:(double *)arg2 withRightCornerExtensionDistance:(double *)arg3;	// IMP=0x0000000000091d28
- (_Bool)doesAnySegmentHaveBottomBorderOnPoint:(struct CGPoint)arg1 withLeftCornerExtensionDistance:(double *)arg2 withRightCornerExtensionDistance:(double *)arg3;	// IMP=0x0000000000091c8e
- (struct CGPath *)createBottomRightCornerExtensionWithRadius:(double)arg1;	// IMP=0x0000000000091c0e
- (struct CGPath *)createBottomLeftCornerExtensionWithRadius:(double)arg1;	// IMP=0x0000000000091b93
- (struct CGPath *)createTopLeftCornerExtensionWithRadius:(double)arg1;	// IMP=0x0000000000091b19
- (struct CGPath *)createTopRightCornerExtensionWithRadius:(double)arg1;	// IMP=0x0000000000091a99
- (struct CGPath *)createCornerExtensionWithOrigin:(struct CGPoint)arg1 radius:(double)arg2 firstPoint:(struct CGPoint)arg3 secondPoint:(struct CGPoint)arg4 arcCenter:(struct CGPoint)arg5 startAngle:(double)arg6 endAngle:(double)arg7;	// IMP=0x00000000000919d6
- (void)_calculateHighlightSegmentShape;	// IMP=0x0000000000091394
- (struct CGPoint)topLeftCornerPoint;	// IMP=0x00000000000910db
- (struct CGPoint)topRightCornerPoint;	// IMP=0x00000000000910bd
- (struct CGPoint)bottomRightCornerPoint;	// IMP=0x000000000009109b
- (struct CGPoint)bottomLeftCornerPoint;	// IMP=0x000000000009107d

@end

