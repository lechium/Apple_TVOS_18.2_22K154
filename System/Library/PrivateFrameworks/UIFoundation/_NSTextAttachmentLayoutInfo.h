//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSTextAttachment, NSTextAttachmentViewProvider, NSTextLayoutFragment, _NSTextAttachmentLayoutContext;
@protocol NSTextLocation;

__attribute__((visibility("hidden")))
@interface _NSTextAttachmentLayoutInfo : NSObject
{
    _NSTextAttachmentLayoutContext *_layoutContext;	// 8 = 0x8
    id <NSTextLocation> _location;	// 16 = 0x10
    long long _locationOffsetFromBase;	// 24 = 0x18
    NSDictionary *_attributes;	// 32 = 0x20
    NSTextAttachment *_textAttachment;	// 40 = 0x28
    NSTextAttachmentViewProvider *_textAttachmentViewProvider;	// 48 = 0x30
    NSTextLayoutFragment *_textLayoutFragment;	// 56 = 0x38
    struct __CTRunDelegate *_runDelegate;	// 64 = 0x40
    struct CGRect _bounds;	// 72 = 0x48
    struct CGRect _proposedLineFragment;	// 104 = 0x68
    double _baselineOffset;	// 136 = 0x88
    double _horizontalOffset;	// 144 = 0x90
    _Bool _isBoundsValid;	// 152 = 0x98
    _Bool _isLineFragmentLayout;	// 153 = 0x99
    struct CGRect _resolvedAttachmentFrame;	// 160 = 0xa0
}

@property(readonly) struct CGRect resolvedAttachmentFrame; // @synthesize resolvedAttachmentFrame=_resolvedAttachmentFrame;
@property(readonly) _NSTextAttachmentLayoutContext *layoutContext; // @synthesize layoutContext=_layoutContext;
@property(readonly) NSTextAttachment *textAttachment; // @synthesize textAttachment=_textAttachment;
@property(readonly, copy) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (void)invalidateAttachmentMeasurements;	// IMP=0x0000000000131683
- (void)_invalidateLocations;	// IMP=0x0000000000131661
@property struct CGPoint attachmentFrameOrigin; // @dynamic attachmentFrameOrigin;
@property(readonly) struct __CTRunDelegate *runDelegate; // @dynamic runDelegate;
@property(retain) NSTextAttachmentViewProvider *textAttachmentViewProvider; // @dynamic textAttachmentViewProvider;
- (id)textLayoutFragment;	// IMP=0x000000000013143f
@property(readonly) id <NSTextLocation> location; // @dynamic location;
- (void)_queryLayoutWithHorizontalOffset:(double)arg1;	// IMP=0x000000000013127e
- (void)_queryLayout;	// IMP=0x0000000000130fcd
- (void)dealloc;	// IMP=0x0000000000130f6e
- (id)initWithContext:(id)arg1 location:(id)arg2 attributes:(id)arg3;	// IMP=0x0000000000130e23

@end

