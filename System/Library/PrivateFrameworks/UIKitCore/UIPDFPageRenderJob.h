//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIImage, UIPDFPage, UIPDFPageRenderOperation;

__attribute__((visibility("hidden")))
@interface UIPDFPageRenderJob : NSObject
{
    UIPDFPage *_page;	// 8 = 0x8
    unsigned long long _pageIndex;	// 16 = 0x10
    struct CGSize _size;	// 24 = 0x18
    long long _priority;	// 40 = 0x28
    UIImage *_image;	// 48 = 0x30
    UIPDFPageRenderOperation *_operation;	// 56 = 0x38
    id _target;	// 64 = 0x40
    SEL _callback;	// 72 = 0x48
    id _userData;	// 80 = 0x50
    _Bool _sendPending;	// 88 = 0x58
    _Bool _releaseWhenDone;	// 89 = 0x59
    struct os_unfair_lock_s _lock;	// 92 = 0x5c
}

@property(readonly) struct CGSize size; // @synthesize size=_size;
@property _Bool releaseWhenDone; // @synthesize releaseWhenDone=_releaseWhenDone;
@property(readonly) long long priority; // @synthesize priority=_priority;
@property(readonly) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
- (void)sendImageTo:(id)arg1 callback:(SEL)arg2 userData:(id)arg3;	// IMP=0x00000000011b3e33
- (void)sendImage;	// IMP=0x00000000011b3cf7
- (void)renderImage;	// IMP=0x00000000011b36a7
@property(readonly, retain) UIImage *image; // @dynamic image;
- (void)releaseOperation;	// IMP=0x00000000011b3649
@property UIPDFPageRenderOperation *operation; // @dynamic operation;
- (void)setTarget:(id)arg1 callback:(SEL)arg2 userData:(id)arg3;	// IMP=0x00000000011b348f
- (void)cancelOperationForTarget:(id)arg1;	// IMP=0x00000000011b3307
- (void)cancelOperation;	// IMP=0x00000000011b319f
- (void)cancel;	// IMP=0x00000000011b301d
- (void)dealloc;	// IMP=0x00000000011b2fc5
- (id)initWithPage:(id)arg1 maxSize:(struct CGSize)arg2 queuePriority:(long long)arg3;	// IMP=0x00000000011b2ee3
- (_Bool)hasPage;	// IMP=0x00000000011b2eb6

@end

