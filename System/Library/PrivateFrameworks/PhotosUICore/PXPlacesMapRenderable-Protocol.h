//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSOrderedSet;
@protocol PXPlacesMapRenderer, PXPlacesMapSelectionHandler;

@protocol PXPlacesMapRenderable <NSObject>
@property(nonatomic) long long index;
@property(retain) NSOrderedSet *geotaggables;
@property __weak id <PXPlacesMapSelectionHandler> selectionHandler;
@property __weak id <PXPlacesMapRenderer> renderer;
@end

