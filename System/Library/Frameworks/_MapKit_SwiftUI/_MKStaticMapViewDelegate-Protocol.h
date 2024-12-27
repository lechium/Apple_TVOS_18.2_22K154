//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <_MapKit_SwiftUI/NSObject-Protocol.h>

@class MKAnnotationView, MKOverlayRenderer, NSError, _MKStaticMapView;
@protocol MKAnnotation, MKOverlay;

@protocol _MKStaticMapViewDelegate <NSObject>

@optional
- (MKOverlayRenderer *)mapView:(_MKStaticMapView *)arg1 rendererForOverlay:(id <MKOverlay>)arg2;
- (MKAnnotationView *)mapView:(_MKStaticMapView *)arg1 viewForAnnotation:(id <MKAnnotation>)arg2;
- (void)mapViewDidFailLoadingMap:(_MKStaticMapView *)arg1 withError:(NSError *)arg2;
- (void)mapViewDidFinishLoadingMap:(_MKStaticMapView *)arg1;
- (void)mapViewWillStartLoadingMap:(_MKStaticMapView *)arg1;
@end

