//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVWeakReference;
@protocol AVAssetWriterInputMediaDataRequesterDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputMediaDataRequester : NSObject
{
    NSObject<OS_dispatch_queue> *_requestQueue;	// 8 = 0x8
    CDUnknownBlockType _requestBlock;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;	// 24 = 0x18
    AVWeakReference *_weakReferenceToDelegate;	// 32 = 0x20
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // @synthesize requestQueue=_requestQueue;
- (void)requestMediaDataIfNecessary;	// IMP=0x00000000000c5dae
@property __weak id <AVAssetWriterInputMediaDataRequesterDelegate> delegate;
- (void)dealloc;	// IMP=0x00000000000c5b9d
- (void)_collectUncollectables_invokedFromDeallocAndFinalize;	// IMP=0x00000000000c5b6f
- (id)init;	// IMP=0x00000000000c5b59
- (id)initWithRequestQueue:(id)arg1 requestBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c5a50

@end

