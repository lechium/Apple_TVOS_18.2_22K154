//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_group, UITextPasteCoordinatorDelegate;

__attribute__((visibility("hidden")))
@interface UITextPasteCoordinator : NSObject
{
    NSMutableArray *_items;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_wait;	// 16 = 0x10
    id <UITextPasteCoordinatorDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000146487c
@property(readonly, nonatomic) __weak id <UITextPasteCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_finish;	// IMP=0x000000000146463b
- (void)_determineFinished;	// IMP=0x0000000001464420
- (_Bool)performBlockingWait:(double)arg1;	// IMP=0x0000000001464385
- (void)setResult:(id)arg1 forItem:(id)arg2;	// IMP=0x000000000146425c
- (void)addItem:(id)arg1;	// IMP=0x00000000014641de
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000001464149

@end

