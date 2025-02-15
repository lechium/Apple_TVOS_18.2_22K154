//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXContentFilterState, PXLibraryFilterState, PXSharedLibraryStatusProvider, UIView;
@protocol PXFilterControllerDelegate;

@protocol PXFilterController <NSObject>
@property(copy, nonatomic) PXContentFilterState *contentFilterState;
@property(readonly, nonatomic) PXLibraryFilterState *libraryFilterState;
- (id)initWithDelegate:(id <PXFilterControllerDelegate>)arg1 libraryFilterState:(PXLibraryFilterState *)arg2 initialContentFilterState:(PXContentFilterState *)arg3 sharedLibraryStatusProvider:(PXSharedLibraryStatusProvider *)arg4 filterControllerOptions:(unsigned long long)arg5;

@optional
- (void)showFilterUIRelativeToRect:(struct CGRect)arg1 ofView:(UIView *)arg2;
@end

